#ifndef TEST_SOURCE_H_
#define TEST_SOURCE_H_

#ifdef _USING_TEST_SOURCE_

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
			ResultType m_status;
		protected:
			Source();
		public:
			~Source();
		protected:
			static void Assert(const bool& condition, const char* file, const std::size_t& line, const char* message, const char* condition_str = NULL);
		public:
			static const ResultType& Status();
			static ResultType RunTest();
			static const DERIVED_TYPE& GetInstance();
		};

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
		const typename Source<DERIVED_TYPE>::ResultType& Source<DERIVED_TYPE>::Status()
		{
			return ms_instance.m_status;
		}

		template<typename DERIVED_TYPE>
		typename Source<DERIVED_TYPE>::ResultType Source<DERIVED_TYPE>::RunTest()
		{
			if (BrainMuscles::test::source::Environment::Result() == ResultType::pass && ms_instance.m_status == ResultType::not_test)
			{
				DERIVED_TYPE::Test();
				ms_instance.m_status = BrainMuscles::test::source::Environment::Result();
				return ms_instance.m_status;
			}
			return ResultType::not_test;
		}

		template<typename DERIVED_TYPE>
		const DERIVED_TYPE& Source<DERIVED_TYPE>::GetInstance()
		{
			return ms_instance;
		}
	}
}

#ifndef SourceAssert

//SourceAssert(CONDITION [, MESSAGE])
#define SourceAssert(CONDITION, ...)\
do{\
	Assert(CONDITION, __FILE__, __LINE__, __VA_ARGS__, #CONDITION);\
}while(false)

#endif //!SourceAssert

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_H_