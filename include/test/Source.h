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
#include "test\source\Constant.h"

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
			typedef BrainMuscles::test::source::Constant		ConstantType;
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
			static bool IsBeginStage();
			static bool IsNotTestStage();
			static bool IsPreTestStage();
			static bool IsTestStage();
			static bool IsPostTestStage();
			static bool IsEndStage();
		private:
			static bool CanBeginStage();
			static bool CanPreTestStage();
			static bool CanTestStage();
			static bool CanPostTestStage();
			static bool CanEndStage();
		private:
			static void StageBegin();
			static void StagePreTest();
			static void StageTest();
			static void StagePostTest();
			static void StageEnd();
		private:
			static ResultType RunStaticTest();
			static void RunPreTest();
			static void RunPostTest();
			static const ResultType& SetStatus(const ResultType& status);
			static void SetError(const char* file, const std::size_t& line, std::string title, std::string message);
			template<typename... ARGS>
			static void SetError(const char* file, const std::size_t& line, std::string title, const char* format, ARGS... args);
		private:
			template<typename OTHER_SOURCE>
			static void BaseOfSource(std::string title, const char* file, const std::size_t& line);
			template<typename OTHER_SOURCE>
			static void SourceHasTest(std::string title, const char* file, const std::size_t& line);
			template<typename OTHER_SOURCE>
			static void SourceIsError(std::string title, const char* file, const std::size_t& line);
			template<typename OTHER_SOURCE>
			static void SourceIsNotCompleted(std::string title, const char* file, const std::size_t& line);
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
			static bool IsPassStaticTest();
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
		bool Source<DERIVED_TYPE>::IsBeginStage()
		{
			return ms_instance.m_stage.IsBeginStage();
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::IsNotTestStage()
		{
			return ms_instance.m_stage.IsNotTestStage();
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::IsPreTestStage()
		{
			return ms_instance.m_stage.IsPreTestStage();
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::IsTestStage()
		{
			return ms_instance.m_stage.IsTestStage();
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::IsPostTestStage()
		{
			return ms_instance.m_stage.IsPostTestStage();
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::IsEndStage()
		{
			return ms_instance.m_stage.IsEndStage();
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::CanBeginStage()
		{
			return ms_instance.m_stage.CanBeginStage();
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::CanPreTestStage()
		{
			return ms_instance.m_stage.CanPreTestStage();
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::CanTestStage()
		{
			return ms_instance.m_stage.CanTestStage();
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::CanPostTestStage()
		{
			return ms_instance.m_stage.CanPostTestStage();
		}

		template<typename DERIVED_TYPE>
		bool Source<DERIVED_TYPE>::CanEndStage()
		{
			return ms_instance.m_stage.CanEndStage();
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::StageBegin()
		{
			if (CanBeginStage())
			{
				SetStatus(ResultType::not_completed);
			}
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::StagePreTest()
		{
			if (CanPreTestStage())
			{
				EnvironmentType::CallerFunction(ConstantType::CallerPreTest<DERIVED_TYPE>());
				DERIVED_TYPE::PreTest();
				EnvironmentType::PopCallerFunction();
			}
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::StageTest()
		{
			if (CanTestStage())
			{
				EnvironmentType::CallerFunction(ConstantType::CallerTest<DERIVED_TYPE>());
				DERIVED_TYPE::Test();
				EnvironmentType::PopCallerFunction();
				SetStatus(ResultType::pass);
			}
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::StagePostTest()
		{
			if (CanPostTestStage())
			{
				EnvironmentType::CallerFunction(ConstantType::CallerPostTest<DERIVED_TYPE>());
				DERIVED_TYPE::PostTest();
				EnvironmentType::PopCallerFunction();
			}
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::StageEnd()
		{
			if (CanEndStage())
			{
			}
		}

		template<typename DERIVED_TYPE>
		typename Source<DERIVED_TYPE>::ResultType Source<DERIVED_TYPE>::RunStaticTest()
		{
			if (EnvironmentType::IsPass() && HasStaticTest())
			{
				EnvironmentType::CallerFunction(ConstantType::CallerStaticTest<DERIVED_TYPE>());
				DERIVED_TYPE::StaticTest();
				TriggerError();
				EnvironmentType::PopCallerFunction();
				SetStatus(EnvironmentType::Result());
				return EnvironmentType::Result();
			}
			return ResultType::not_test;
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::RunPreTest()
		{
			if (EnvironmentType::IsPass() && HasPreTest())
			{
				StagePreTest();
			}
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::RunPostTest()
		{
			if (EnvironmentType::IsPass() && HasPostTest() && IsPass())
			{
				StagePostTest();
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
		void Source<DERIVED_TYPE>::SetError(const char* file, const std::size_t& line, std::string title, std::string message)
		{
			if (!IsPass() && ms_instance.m_error == nullptr)
			{
				ms_instance.m_error = new ErrorType(EnvironmentType::ErrorMessage(file, line, title, message));
			}
			SetStatus(ResultType::error);
		}

		template<typename DERIVED_TYPE>
		template<typename... ARGS>
		void Source<DERIVED_TYPE>::SetError(const char* file, const std::size_t& line, std::string title, const char* format, ARGS... args)
		{
			if (!IsPass() && ms_instance.m_error == nullptr)
			{
				ms_instance.m_error = new ErrorType(EnvironmentType::ErrorMessage(file, line, title, format, args...));
			}
			SetStatus(ResultType::error);
		}

		template<typename DERIVED_TYPE>
		template<typename OTHER_SOURCE>
		void Source<DERIVED_TYPE>::BaseOfSource(std::string title, const char* file, const std::size_t& line)
		{
			if (!decltype(IsBaseOfSourceImpl(std::declval<OTHER_SOURCE>()))::value)
			{
				SetError(file, line, title, ConstantType::BaseOfSourceMsg, typeid(OTHER_SOURCE).name());
			}
		}

		template<typename DERIVED_TYPE>
		template<typename OTHER_SOURCE>
		void Source<DERIVED_TYPE>::SourceHasTest(std::string title, const char* file, const std::size_t& line)
		{
			if (!OTHER_SOURCE::HasTest())
			{
				SetError(file, line, title, ConstantType::SourceHasTestMsg, typeid(OTHER_SOURCE).name());
			}
		}

		template<typename DERIVED_TYPE>
		template<typename OTHER_SOURCE>
		void Source<DERIVED_TYPE>::SourceIsError(std::string title, const char* file, const std::size_t& line)
		{
			if (OTHER_SOURCE::IsError())
			{
				SetError(file, line, title, ConstantType::SourceIsErrorMsg, typeid(OTHER_SOURCE).name());
			}
		}

		template<typename DERIVED_TYPE>
		template<typename OTHER_SOURCE>
		void Source<DERIVED_TYPE>::SourceIsNotCompleted(std::string title, const char* file, const std::size_t& line)
		{
			if (OTHER_SOURCE::IsNotCompleted())
			{
				SetError(file, line, title, ConstantType::SourceIsNotCompletedMsg, typeid(OTHER_SOURCE).name());
			}
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::Assert(const bool& condition, const char* file, const std::size_t& line, const char* condition_str)
		{

			if (EnvironmentType::IsPass() && !IsError() && !condition)
			{
				EnvironmentType::Trace(EnvironmentType::CallerFunction(), file, line);
				SetError(file, line, ConstantType::AssertionFailed(), condition_str);
				EnvironmentType::PopTrace();
			}
		}

		template<typename DERIVED_TYPE>
		template<typename... ARGS>
		void Source<DERIVED_TYPE>::Assert(const bool& condition, const char* file, const std::size_t& line, const char* condition_str, ARGS... args)
		{
			if (EnvironmentType::IsPass() && !IsError() && !condition)
			{
				EnvironmentType::Trace(EnvironmentType::CallerFunction(), file, line);
				SetError(file, line, ConstantType::AssertionFailed(), args...);
				EnvironmentType::PopTrace();
			}
		}

		template<typename DERIVED_TYPE>
		template<typename OTHER_SOURCE>
		typename std::enable_if<!std::is_same<DERIVED_TYPE, OTHER_SOURCE>::value, void>::type 
			Source<DERIVED_TYPE>::Requirement(const char* file, const std::size_t& line)
		{
			EnvironmentType::Trace(ConstantType::CallerRequirement<DERIVED_TYPE>(), file, line);
			if (EnvironmentType::IsPass())
			{
				if (OTHER_SOURCE::IsNotTest())
				{
					BaseOfSource<OTHER_SOURCE>(ConstantType::RequirementFailed(), file, line);
					SourceHasTest<OTHER_SOURCE>(ConstantType::RequirementFailed(), file, line);
					if (!IsError())
					{
						OTHER_SOURCE::RunTest();
						OTHER_SOURCE::TriggerError();
					}
				}
				SourceIsError<OTHER_SOURCE>(ConstantType::RequirementFailed(), file, line);
				SourceIsNotCompleted<OTHER_SOURCE>(ConstantType::RequirementFailed(), file, line);
			}
			EnvironmentType::PopTrace();
		}

		template<typename DERIVED_TYPE>
		void Source<DERIVED_TYPE>::Call(const char* file, const std::size_t& line)
		{
			EnvironmentType::Trace(ConstantType::CallerCall<DERIVED_TYPE>(), file, line);
			if (EnvironmentType::IsPass() && IsNotTest())
			{
				SourceHasTest<DERIVED_TYPE>(ConstantType::CallFailed(), file, line);
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
		bool Source<DERIVED_TYPE>::IsPassStaticTest()
		{
			return ResultStaticTest == ResultType::not_test || ResultStaticTest == ResultType::pass;
		}

		template<typename DERIVED_TYPE>
		const typename Source<DERIVED_TYPE>::ResultType& Source<DERIVED_TYPE>::Status()
		{
			return ms_instance.m_status;
		}

		template<typename DERIVED_TYPE>
		typename Source<DERIVED_TYPE>::ResultType Source<DERIVED_TYPE>::RunTest()
		{
			if (HasTest() && IsNotTest() && IsPassStaticTest() && EnvironmentType::IsPass())
			{
				StageBegin();
				RunPreTest();
				if (IsNotCompleted())
				{
					StageTest();
					RunPostTest();
				}
				StageEnd();
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