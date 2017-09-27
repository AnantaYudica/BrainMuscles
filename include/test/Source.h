#ifndef TEST_SOURCE_H_
#define TEST_SOURCE_H_

#ifdef _USING_TEST_SOURCE_

#include <utility>
#include <string>
#include <type_traits>

#include "test\source\Result.h"
#include "test\source\Environment.h"

namespace BrainMuscles
{
	namespace test
	{
		template<typename DERIVED_TYPE>
		class Source
		{
		public:
			typedef BrainMuscles::test::source::Result			ResultType;
		private:
			static DERIVED_TYPE ms_instance;
		private:
			template<typename TYPE>
			static std::true_type IsBaseOfSourceImpl(const Source<TYPE>&);
			static std::false_type IsBaseOfSourceImpl(...);
		private:
			ResultType m_status;
		public:
			static const ResultType ResultStaticTest;
		protected:
			Source();
		public:
			~Source();
		private:
			static ResultType RunStaticTest();
			static void RunPreTest();
			static const ResultType& SetStatus(const ResultType& status);
		protected:
			static void Assert(const bool& condition, const char* file, const std::size_t& line, const char* message, const char* condition_str = NULL);
			template<typename OTHER_SOURCE>
			static typename std::enable_if<!std::is_same<DERIVED_TYPE, OTHER_SOURCE>::value, void>::type 
				Requirement(const char* file, const std::size_t& line);
		public:
			static bool HasTest();
			static bool HasStaticTest();
			static bool HasPreTest();
			static bool IsPass();
			static bool IsError();
			static bool IsNotTest();
		public:
			static const ResultType& Status();
			static ResultType RunTest();
			static const DERIVED_TYPE& GetInstance();
			static void Test();
			static void StaticTest();
			static void PreTest();
		};

		template<typename DERIVED_TYPE>
		const typename Source<DERIVED_TYPE>::ResultType Source<DERIVED_TYPE>::ResultStaticTest = RunStaticTest();

		template<typename DERIVED_TYPE>
		DERIVED_TYPE Source<DERIVED_TYPE>::ms_instance = DERIVED_TYPE();

		template<typename DERIVED_TYPE>
		Source<DERIVED_TYPE>::Source() :
			m_status(ResultType::not_test)
		{}

		template<typename DERIVED_TYPE>
		Source<DERIVED_TYPE>::~Source()
		{}

		template<typename DERIVED_TYPE>
		typename Source<DERIVED_TYPE>::ResultType Source<DERIVED_TYPE>::RunStaticTest()
		{
			if (BrainMuscles::test::source::Environment::IsPass() && HasStaticTest())
			{
				DERIVED_TYPE::StaticTest();
				return SetStatus(BrainMuscles::test::source::Environment::Result())
			}
			return ResultType::not_test;
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::RunPreTest()
		{
			if (BrainMuscles::test::source::Environment::IsPass() && HasPreTest() && IsNotTest())
			{
				DERIVED_TYPE::PreTest();
			}
		}

		template<typename DERIVED_TYPE>
		typename const Source<DERIVED_TYPE>::ResultType& Source<DERIVED_TYPE>::SetStatus(const ResultType& status)
		{
			if (IsNotTest())
			{
				ms_instance.m_status = status;
			}
			return ms_instance.m_status;
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::Assert(const bool& condition, const char* file, const std::size_t& line, const char* message, const char* condition_str)
		{
			if (BrainMuscles::test::source::Environment::Result() == ResultType::pass)
			{
				if (!condition)
				{
					BrainMuscles::test::source::Environment::SetError(message, file, line);
				}
			}
		}

		template<typename DERIVED_TYPE>
		template<typename OTHER_SOURCE>
		typename std::enable_if<!std::is_same<DERIVED_TYPE, OTHER_SOURCE>::value, void>::type 
			Source<DERIVED_TYPE>::Requirement(const char* file, const std::size_t& line)
		{
			static_assert(decltype(IsBaseOfSourceImpl(std::declval<OTHER_SOURCE>()))::value,
				"OTHER_SOURCE not base of BrainMuscles::test::Source<?>");
			if (BrainMuscles::test::source::Environment::IsPass())
			{
				if (!OTHER_SOURCE::HasTest())
				{
					std::string msg = typeid(OTHER_SOURCE).name();
					msg += " not has static function member 'Test'";
					Assert(false, file, line, msg.c_str());
					return;
				}
				if (OTHER_SOURCE::IsNotTest())
				{
					OTHER_SOURCE::RunTest();
				}
			}
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::HasTest()
		{
			return &DERIVED_TYPE::Test != &Source<DERIVED_TYPE>::Test;
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::HasStaticTest()
		{
			return &DERIVED_TYPE::StaticTest != &Source<DERIVED_TYPE>::StaticTest;
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::HasPreTest()
		{
			return &DERIVED_TYPE::PreTest != &Source<DERIVED_TYPE>::PreTest;
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::IsPass()
		{
			return Status() == ResultType::pass;
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::IsError()
		{
			return Status() == ResultType::error;
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::IsNotTest()
		{
			return Status() == ResultType::not_test;
		}

		template<typename DERIVED_TYPE>
		const typename Source<DERIVED_TYPE>::ResultType& Source<DERIVED_TYPE>::Status()
		{
			return ms_instance.m_status;
		}

		template<typename DERIVED_TYPE>
		typename Source<DERIVED_TYPE>::ResultType Source<DERIVED_TYPE>::RunTest()
		{
			if (HasTest())
			{
				RunPreTest();
				if (BrainMuscles::test::source::Environment::IsPass() && IsNotTest())
				{
					DERIVED_TYPE::Test();
					return SetStatus(BrainMuscles::test::source::Environment::Result());
				}
			}
			return ResultType::not_test;
		}

		template<typename DERIVED_TYPE>
		const DERIVED_TYPE& Source<DERIVED_TYPE>::GetInstance()
		{
			return ms_instance;
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::Test()
		{}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::StaticTest()
		{}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::PreTest()
		{}
	}
}

#ifndef SourceAssert

//SourceAssert(CONDITION [, MESSAGE])
#define SourceAssert(CONDITION, ...)\
do{\
	Assert(CONDITION, __FILE__, __LINE__, __VA_ARGS__, #CONDITION);\
}while(false)

#endif //!SourceAssert

#ifndef SourceRequirement

//SourceRequirement(SOURCE_TYPE)
#define SourceRequirement(SOURCE_TYPE)\
do{\
	Requirement<SOURCE_TYPE>(__FILE__, __LINE__);\
}while(false)

#endif //!SourceRequirement

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_H_