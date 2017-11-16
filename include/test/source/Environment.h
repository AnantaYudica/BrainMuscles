#ifndef TEST_SOURCE_ENVIRONMENT_H_
#define TEST_SOURCE_ENVIRONMENT_H_

#ifdef _USING_TEST_SOURCE_

#include <string>
#include <stack>
#include <cstdio>

#include "test\source\Info.h"
#include "test\source\error\Message.h"
#include "test\source\info\Delegate.h"
#include "test\source\status\Flags.h"
#include "test\source\environment\trace\Interface.h"
#include "test\source\environment\trace\Function.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			class Environment final
			{
			public:
				typedef BrainMuscles::test::source::status::Flags	StatusFlagsType;
				typedef BrainMuscles::test::source::error::Message	ErrorMessageType;
				typedef BrainMuscles::test::source::Info	InfoType;
				typedef typename InfoType::FlagsType		InfoFlagsType;
				typedef typename InfoType::FlagsIntegerType	InfoFlagsIntegerType;
				typedef BrainMuscles::test::source::environment::trace::Interface
					TraceInterfaceType;
				typedef BrainMuscles::test::source::environment::trace::Function
					TraceFunctionType;
			public:
				typedef BrainMuscles::test::source::info::Delegate<Environment> DelegateType;
			private:
				StatusFlagsType m_result;
				std::FILE* m_file;
				InfoType m_info;
				TraceInterfaceType m_traceInterface;
				TraceFunctionType m_traceFunction;
			private:
				inline Environment();
			private:
				static inline Environment& Instance();
			public:
				static inline bool IsPass();
			public:
				static inline const Environment& GetInstance();
				static inline const StatusFlagsType& Result();
				static inline void Error(const ErrorMessageType& error_message);
			public:
				static inline InfoType& Info();
				static inline void Info(InfoFlagsIntegerType flag);
				static inline DelegateType Info(const char* file, const std::size_t& line, InfoFlagsIntegerType flag, std::size_t buffer_allocation = DelegateType::BufferAllocation);
				template<typename... ARGS>
				static void Info(const char* file, const std::size_t& line, const char* format, ARGS... args);
				template<typename... ARGS>
				static void Info(InfoFlagsIntegerType info_flag, const char* file, const std::size_t& line, const char* format, ARGS... args);
			public:
				static inline TraceInterfaceType& TraceInterface();
				static inline TraceFunctionType& TraceFunction();
			};

			inline Environment::Environment() :
				m_result(StatusFlagsType::pass),
				m_file(stderr),
				m_info(),
				m_traceInterface(),
				m_traceFunction(&m_traceInterface)
			{}

			inline Environment& Environment::Instance()
			{
				static Environment instance = Environment();
				return instance;
			}

			inline bool Environment::IsPass()
			{
				return Result() == StatusFlagsType::pass;
			}

			inline const Environment& Environment::GetInstance()
			{
				return Instance();
			}

			inline const typename Environment::StatusFlagsType& Environment::Result()
			{
				return GetInstance().m_result;
			}

			inline void Environment::Error(const ErrorMessageType& error)
			{
				fprintf(Instance().m_file, "%s\n", std::to_string(error).c_str());
				Instance().m_result = StatusFlagsType::error;
			}

			inline typename Environment::InfoType& Environment::Info()
			{
				return Instance().m_info;
			}

			inline void Environment::Info(InfoFlagsIntegerType flag)
			{
				Info().Enable(flag);
			}

			inline typename Environment::DelegateType 
				Environment::Info(const char* file, const std::size_t& line, 
					InfoFlagsIntegerType flag, std::size_t buffer_allocation)
			{
				return DelegateType(&Info(), file, line, flag, buffer_allocation);
			}

			template<typename... ARGS>
			void Environment::Info(const char* file, const std::size_t& line, 
				const char* format, ARGS... args)
			{
				fprintf(Instance().m_file, "Info : ");
				fprintf(Instance().m_file, format, args...);
				fprintf(Instance().m_file, " file %s, line %zu\n", file, line);
			}

			template<typename... ARGS>
			void Environment::Info(InfoFlagsIntegerType info_flag, 
				const char* file, const std::size_t& line, 
				const char* format, ARGS... args)
			{
				if (Info().IsEnable(info_flag))
				{
					Info(file, line, format, args);
				}
			}
		}
	}
}

inline typename BrainMuscles::test::source::Environment::TraceInterfaceType&
BrainMuscles::test::source::Environment::TraceInterface()
{
	return Instance().m_traceInterface;
}

inline  typename BrainMuscles::test::source::Environment::TraceFunctionType& 
BrainMuscles::test::source::Environment::TraceFunction() 
{
	return Instance().m_traceFunction;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ENVIRONMENT_H_