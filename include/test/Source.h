#ifndef TEST_SOURCE_H_
#define TEST_SOURCE_H_

#ifdef _USING_TEST_SOURCE_

#include <utility>
#include <string>
#include <type_traits>

#include "test\source\Result.h"
#include "test\source\Error.h"
#include "test\source\Stage.h"
#include "test\source\Environment.h"

namespace BrainMuscles
{
	namespace test
	{
		template<typename DERIVED_TYPE>
		class Source
		{
		private:
			typedef BrainMuscles::test::source::Environment		EnvironmentType;
		public:
			typedef BrainMuscles::test::source::Result			ResultType;
			typedef BrainMuscles::test::source::Stage			StageType;
			typedef BrainMuscles::test::source::Error			ErrorType;
		private:
			static DERIVED_TYPE ms_instance;
		private:
			template<typename TYPE>
			static std::true_type IsBaseOfSourceImpl(const Source<TYPE>&);
			static std::false_type IsBaseOfSourceImpl(...);
		private:
			ResultType m_status;
			ErrorType* m_error;
			StageType m_stage;
		public:
			static const ResultType ResultStaticTest;
		protected:
			Source();
		public:
			~Source();
		private:
			static ResultType RunStaticTest();
			static void RunPreTest();
			static void RunPostTest();
			static const ResultType& SetStatus(const ResultType& status);
			static void StagePreTest();
			static void StageTest();
			static void StagePostTest();
			static void SetError(const char* file, const std::size_t& line, std::string title, std::string message);
			template<typename... ARGS>
			static void SetError(const char* file, const std::size_t& line, std::string title, const char* format, ARGS... args);
			static std::string CallerFunction(const char* caller);
			static std::string TitleFailed(const char* caller);
		private:
			template<typename OTHER_SOURCE>
			static void BaseOfSource(const char* caller, const char* file, const std::size_t& line);
			template<typename OTHER_SOURCE>
			static void SourceHasTest(const char* caller, const char* file, const std::size_t& line);
			template<typename OTHER_SOURCE>
			static void SourceIsError(const char* caller, const char* file, const std::size_t& line);
			template<typename OTHER_SOURCE>
			static void SourceIsNotCompleted(const char* caller, const char* file, const std::size_t& line);
		protected:
			static void Assert(const bool& condition, const char* file, const std::size_t& line, const char* condition_str);
			template<typename... ARGS>
			static void Assert(const bool& condition, const char* file, const std::size_t& line, const char* condition_str, ARGS... args);
			template<typename OTHER_SOURCE>
			static typename std::enable_if<!std::is_same<DERIVED_TYPE, OTHER_SOURCE>::value, void>::type 
				Requirement(const char* file, const std::size_t& line);
		public:
			static void Call(const char* file, const std::size_t& line);
		public:
			static bool HasTest();
			static bool HasStaticTest();
			static bool HasPreTest();
			static bool HasPostTest();
			static bool IsPass();
			static bool IsError();
			static bool IsNotTest();
			static bool IsNotCompleted();
		public:
			static const ResultType& Status();
			static ResultType RunTest();
			static const DERIVED_TYPE& GetInstance();
			static void Test();
			static void StaticTest();
			static void PreTest();
			static void PostTest();
		public:
			static void TriggerError();
			static std::string ErrorMessage();
		};

		template<typename DERIVED_TYPE>
		const typename Source<DERIVED_TYPE>::ResultType Source<DERIVED_TYPE>::ResultStaticTest = RunStaticTest();

		template<typename DERIVED_TYPE>
		DERIVED_TYPE Source<DERIVED_TYPE>::ms_instance = DERIVED_TYPE();

		template<typename DERIVED_TYPE>
		Source<DERIVED_TYPE>::Source() :
			m_status(ResultType::not_test),
			m_error(nullptr)
		{}

		template<typename DERIVED_TYPE>
		Source<DERIVED_TYPE>::~Source()
		{
			if (m_error != nullptr)
			{
				delete m_error;
			}
		}

		template<typename DERIVED_TYPE>
		typename Source<DERIVED_TYPE>::ResultType Source<DERIVED_TYPE>::RunStaticTest()
		{
			if (EnvironmentType::IsPass() && HasStaticTest())
			{
				EnvironmentType::Trace(CallerFunction("StaticTest"));
				DERIVED_TYPE::StaticTest();
				EnvironmentType::PopTrace();
				return SetStatus(EnvironmentType::Result())
			}
			return ResultType::not_test;
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::RunPreTest()
		{
			if (EnvironmentType::IsPass() && HasPreTest())
			{
				StagePreTest();
				DERIVED_TYPE::PreTest();
			}
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::RunPostTest()
		{
			if (EnvironmentType::IsPass() && HasPostTest() && IsPass())
			{
				StagePostTest();
				DERIVED_TYPE::PostTest();
			}
		}

		template<typename DERIVED_TYPE>
		typename const Source<DERIVED_TYPE>::ResultType& Source<DERIVED_TYPE>::SetStatus(const ResultType& status)
		{
			if (IsNotTest() && (status == ResultType::not_completed || status == ResultType::error))
			{
				ms_instance.m_status = status;
			}
			else if (IsNotCompleted() && (status == ResultType::error || status == ResultType::pass))
			{
				ms_instance.m_status = status;
			}
			return ms_instance.m_status;
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::StagePreTest()
		{
			ms_instance.m_stage.SetPreTest();
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::StageTest()
		{
			ms_instance.m_stage.SetTest();
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::StagePostTest()
		{
			ms_instance.m_stage.SetPostTest();
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::SetError(const char* file, const std::size_t& line, std::string title, std::string message)
		{
			if (ms_instance.m_error == nullptr)
			{
				ms_instance.m_error = new ErrorType(EnvironmentType::ErrorMessage(file, line, title, message));
			}
			SetStatus(ResultType::error);
		}

		template<typename DERIVED_TYPE>
		template<typename... ARGS>
		void Source<DERIVED_TYPE>::SetError(const char* file, const std::size_t& line, std::string title, const char* format, ARGS... args)
		{
			if (ms_instance.m_error == nullptr)
			{
				ms_instance.m_error = new ErrorType(EnvironmentType::ErrorMessage(file, line, title, format, args...));
			}
			SetStatus(ResultType::error);
		}

		template<typename DERIVED_TYPE>
		std::string Source<DERIVED_TYPE>::CallerFunction(const char* caller)
		{
			std::string ret = "";
			if (GetInstance().m_stage.IsNotTest())
			{
				ret += "when called ";
				ret += caller;
				ret += " from ";
				ret += typeid(DERIVED_TYPE).name();
			}
			else if (GetInstance().m_stage.IsPreTest())
			{
				ret += "in called static function member 'PreTest' from ";
				ret += typeid(DERIVED_TYPE).name();
			}
			else if (GetInstance().m_stage.IsTest())
			{
				ret += "in called static function member 'Test' from ";
				ret += typeid(DERIVED_TYPE).name();
			}
			else if (GetInstance().m_stage.IsPostTest())
			{
				ret += "in called static function member 'PostTest' from ";
				ret += typeid(DERIVED_TYPE).name();
			}
			return ret;
		}
		
		template<typename DERIVED_TYPE>
		std::string Source<DERIVED_TYPE>::TitleFailed(const char* caller)
		{
			std::string title = caller;
			title += " failed";
			return title;
		}

		template<typename DERIVED_TYPE>
		template<typename OTHER_SOURCE>
		void Source<DERIVED_TYPE>::BaseOfSource(const char* caller, const char* file, const std::size_t& line)
		{
			if (!decltype(IsBaseOfSourceImpl(std::declval<OTHER_SOURCE>()))::value)
			{
				SetError(file, line, TitleFailed(caller), "%s is not base class with class BrainMuscles::test::Source", typeid(OTHER_SOURCE).name());
			}
		}

		template<typename DERIVED_TYPE>
		template<typename OTHER_SOURCE>
		void Source<DERIVED_TYPE>::SourceHasTest(const char* caller, const char* file, const std::size_t& line)
		{
			if (!OTHER_SOURCE::HasTest())
			{
				SetError(file, line, TitleFailed(caller), "%s is not has static function member 'Test'", typeid(OTHER_SOURCE).name());
			}
		}

		template<typename DERIVED_TYPE>
		template<typename OTHER_SOURCE>
		void Source<DERIVED_TYPE>::SourceIsError(const char* caller, const char* file, const std::size_t& line)
		{
			if (OTHER_SOURCE::IsError())
			{
				SetError(file, line, TitleFailed(caller), "%s has error", typeid(OTHER_SOURCE).name());
			}
		}

		template<typename DERIVED_TYPE>
		template<typename OTHER_SOURCE>
		void Source<DERIVED_TYPE>::SourceIsNotCompleted(const char* caller, const char* file, const std::size_t& line)
		{
			if (DERIVED_TYPE::IsNotCompleted())
			{
				SetError(file, line, TitleFailed(caller), "test in %s is not completed", typeid(DERIVED_TYPE).name());
			}
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::Assert(const bool& condition, const char* file, const std::size_t& line, const char* condition_str)
		{
			if (EnvironmentType::IsPass() && !IsError() && !condition)
			{
				SetError(file, line, TitleFailed("Assertion"), condition_str);
			}
		}

		template<typename DERIVED_TYPE>
		template<typename... ARGS>
		void Source<DERIVED_TYPE>::Assert(const bool& condition, const char* file, const std::size_t& line, const char* condition_str, ARGS... args)
		{
			if (EnvironmentType::IsPass() && !IsError() && !condition)
			{
				SetError(file, line, TitleFailed("Assertion"), condition_str, args...);
			}
		}

		template<typename DERIVED_TYPE>
		template<typename OTHER_SOURCE>
		typename std::enable_if<!std::is_same<DERIVED_TYPE, OTHER_SOURCE>::value, void>::type 
			Source<DERIVED_TYPE>::Requirement(const char* file, const std::size_t& line)
		{
			EnvironmentType::Trace(CallerFunction("static function member 'Requirement'"), file, line);
			BaseOfSource<OTHER_SOURCE>("Requirement", file, line);
			SourceHasTest<OTHER_SOURCE>("Requirement", file, line);

			if (EnvironmentType::IsPass() && !IsError())
			{
				if (OTHER_SOURCE::IsNotTest())
				{
					OTHER_SOURCE::RunTest();
				}
				OTHER_SOURCE::TriggerError();
				SourceIsError<OTHER_SOURCE>("Requirement", file, line);
				SourceIsNotCompleted<OTHER_SOURCE>("Requirement", file, line);
			}
			EnvironmentType::PopTrace();
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::Call(const char* file, const std::size_t& line)
		{
			EnvironmentType::Trace(CallerFunction("static function member 'Call'"), file, line);
			SourceHasTest<DERIVED_TYPE>("Call", file, line);
			if (EnvironmentType::IsPass() && IsNotTest())
			{
				RunTest();
				TriggerError();
			}
			EnvironmentType::PopTrace();
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
		bool Source<DERIVED_TYPE>::HasPostTest()
		{
			return &DERIVED_TYPE::PostTest != &Source<DERIVED_TYPE>::PostTest;
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
		bool Source<DERIVED_TYPE>::IsNotCompleted()
		{
			return Status() == ResultType::not_completed;
		}

		template<typename DERIVED_TYPE>
		const typename Source<DERIVED_TYPE>::ResultType& Source<DERIVED_TYPE>::Status()
		{
			return ms_instance.m_status;
		}

		template<typename DERIVED_TYPE>
		typename Source<DERIVED_TYPE>::ResultType Source<DERIVED_TYPE>::RunTest()
		{
			if (HasTest() && IsNotTest())
			{
				SetStatus(ResultType::not_completed);
				RunPreTest();
				if (EnvironmentType::IsPass())
				{
					StageTest();
					DERIVED_TYPE::Test();
					SetStatus(ResultType::pass);
					RunPostTest();
				}
			}
			return Status();
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

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::PostTest()
		{}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::TriggerError()
		{
			if (IsError() && ms_instance.m_error != nullptr)
			{
				EnvironmentType::Error(*ms_instance.m_error);
			}
		}

		template<typename DERIVED_TYPE>
		std::string Source<DERIVED_TYPE>::ErrorMessage()
		{
			if (ms_instance.m_error == nullptr)
			{
				return "";
			}
			return std::to_string(ms_instance.m_error);
		}
	}
}

#ifndef SourceAssert

//SourceAssert(CONDITION [, [MESSAGE | [FORMAT, ...]]])
#define SourceAssert(CONDITION, ...) Assert(CONDITION, __FILE__, __LINE__, #CONDITION, __VA_ARGS__)

#endif //!SourceAssert

#ifndef SourceRequirement

//SourceRequirement(SOURCE_TYPE)
#define SourceRequirement(SOURCE_TYPE) Requirement<SOURCE_TYPE>(__FILE__, __LINE__)

#endif //!SourceRequirement

#ifndef SourceCall

//SourceCall(SOURCE_TYPE)
#define SourceCall(SOURCE_TYPE) SOURCE_TYPE::Call(__FILE__, __LINE__)

#endif //!SourceCall

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_H_