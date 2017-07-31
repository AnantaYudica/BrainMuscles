#ifndef TEST_SIMPLE_LOG_OUTPUT_CALL_H_
#define TEST_SIMPLE_LOG_OUTPUT_CALL_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <type_traits>

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace log
			{
				namespace output
				{
					template<typename CALLER_TYPE, typename ARG, typename... ARGS>
					class Call :
						public Call<CALLER_TYPE, ARGS...>
					{
					public:
						typedef CALLER_TYPE						CallerType;
						typedef ARG								Type;
						typedef Call<CallerType, ARG, ARGS...>	CallType;
						typedef Call<CallerType, ARGS...>		BaseType;
						template<typename RETURN_TYPE>
						using CallFunctionType = RETURN_TYPE(*)(ARG, ARGS...);
						template<typename RETURN_TYPE, typename CLASS_TYPE>
						using CallMemberFunctionType = RETURN_TYPE(CLASS_TYPE::*)(ARG, ARGS...);
					private:
						Type m_value;
					public:
						Call(ARG arg, ARGS... args);
					protected:
						template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
							Filler(CLASS_TYPE* object, FUNCTION_TYPE function, FILL_ARGS... fill_args) const;
						template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
							Filler(CLASS_TYPE* object, FUNCTION_TYPE function, FILL_ARGS... fill_args) const;

						template<typename RETURN_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type 
							Filler(FUNCTION_TYPE function, FILL_ARGS... fill_args) const;
						template<typename RETURN_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
							Filler(FUNCTION_TYPE function, FILL_ARGS... fill_args) const;
					public:
						template<typename RETURN_TYPE, typename CLASS_TYPE>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type 
							Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const;
						template<typename RETURN_TYPE, typename CLASS_TYPE>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type 
							Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const;
						
						template<typename RETURN_TYPE>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type 
							Fill(CallFunctionType<RETURN_TYPE> function) const;
						template<typename RETURN_TYPE>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type 
							Fill(CallFunctionType<RETURN_TYPE> function) const;
					};

					template<typename CALLER_TYPE, typename ARG>
					class Call<CALLER_TYPE, ARG>
					{
					public:
						typedef CALLER_TYPE				CallerType;
						typedef ARG						Type;
						typedef Call<CallerType, ARG>	CallType;
						typedef void					BaseType;
						template<typename RETURN_TYPE>
						using CallFunctionType = RETURN_TYPE(*)(ARG);
						template<typename RETURN_TYPE, typename CLASS_TYPE>
						using CallMemberFunctionType = RETURN_TYPE(CLASS_TYPE::*)(ARG);
					private:
						Type m_value;
					public:
						Call(ARG arg);
					protected:
						template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
							Filler(CLASS_TYPE* object, FUNCTION_TYPE function, FILL_ARGS... fill_args) const;
						template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
							Filler(CLASS_TYPE* object, FUNCTION_TYPE function, FILL_ARGS... fill_args) const;
						
						template<typename RETURN_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
							Filler(FUNCTION_TYPE function, FILL_ARGS... fill_args) const;
						template<typename RETURN_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
							Filler(FUNCTION_TYPE function, FILL_ARGS... fill_args) const;
					public:
						template<typename RETURN_TYPE, typename CLASS_TYPE>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
							Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const;
						template<typename RETURN_TYPE, typename CLASS_TYPE>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
							Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const;

						template<typename RETURN_TYPE>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
							Fill(CallFunctionType<RETURN_TYPE> function) const;
						template<typename RETURN_TYPE>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
							Fill(CallFunctionType<RETURN_TYPE> function) const;
					};

					template<typename CALLER_TYPE>
					class Call<CALLER_TYPE, void>
					{
					public:
						typedef CALLER_TYPE				CallerType;
						typedef Call<CallerType, void>	CallType;
						typedef void					BaseType;
						template<typename RETURN_TYPE>
						using CallFunctionType = RETURN_TYPE(*)(void);
						template<typename RETURN_TYPE, typename CLASS_TYPE>
						using CallMemberFunctionType = RETURN_TYPE(CLASS_TYPE::*)(void);
					public:
						Call();
					protected:
						template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
							Filler(CLASS_TYPE* object, FUNCTION_TYPE function) const;
						template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
							Filler(CLASS_TYPE* object, FUNCTION_TYPE function) const;

						template<typename RETURN_TYPE, typename FUNCTION_TYPE>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
							Filler(FUNCTION_TYPE function) const;
						template<typename RETURN_TYPE, typename FUNCTION_TYPE>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
							Filler(FUNCTION_TYPE function) const;
					public:
						template<typename RETURN_TYPE, typename CLASS_TYPE>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
							Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const;
						template<typename RETURN_TYPE, typename CLASS_TYPE>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
							Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const;

						template<typename RETURN_TYPE>
						typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
							Fill(CallFunctionType<RETURN_TYPE> function) const;
						template<typename RETURN_TYPE>
						typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
							Fill(CallFunctionType<RETURN_TYPE> function) const;
					};

					/////////////////////////////////////////////////////////////////////////////////

					template<typename CALLER_TYPE, typename ARG, typename... ARGS>
					Call<CALLER_TYPE, ARG, ARGS...>::Call(ARG arg, ARGS... args) :
						BaseType(args...),
						m_value(arg)
					{}
					
					template<typename CALLER_TYPE, typename ARG, typename... ARGS>
					template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
						Call<CALLER_TYPE, ARG, ARGS...>::Filler(CLASS_TYPE* object, FUNCTION_TYPE function, FILL_ARGS... fill_args) const
					{
						BaseType::Filler<RETURN_TYPE, CLASS_TYPE, FUNCTION_TYPE, FILL_ARGS..., ARG>(object, function, fill_args..., m_value);
					}

					template<typename CALLER_TYPE, typename ARG, typename... ARGS>
					template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
						Call<CALLER_TYPE, ARG, ARGS...>::Filler(CLASS_TYPE* object, FUNCTION_TYPE function, FILL_ARGS... fill_args) const
					{
						return BaseType::Filler<RETURN_TYPE, CLASS_TYPE, FUNCTION_TYPE, FILL_ARGS..., ARG>(object, function, fill_args..., m_value);
					}

					template<typename CALLER_TYPE, typename ARG, typename... ARGS>
					template<typename RETURN_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type 
						Call<CALLER_TYPE, ARG, ARGS...>::Filler(FUNCTION_TYPE function, FILL_ARGS... fill_args) const
					{
						BaseType::Filler<RETURN_TYPE, FUNCTION_TYPE, FILL_ARGS..., ARG>(function, fill_args..., m_value);
					}

					template<typename CALLER_TYPE, typename ARG, typename... ARGS>
					template<typename RETURN_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
						Call<CALLER_TYPE, ARG, ARGS...>::Filler(FUNCTION_TYPE function, FILL_ARGS... fill_args) const
					{
						return BaseType::Filler<RETURN_TYPE, FUNCTION_TYPE, FILL_ARGS..., ARG>(function, fill_args..., m_value);
					}

					template<typename CALLER_TYPE, typename ARG, typename... ARGS>
					template<typename RETURN_TYPE, typename CLASS_TYPE>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type 
						Call<CALLER_TYPE, ARG, ARGS...>::Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const
					{
						BaseType::Filler<RETURN_TYPE, CLASS_TYPE, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE>, ARG>(object, function, m_value);
					}

					template<typename CALLER_TYPE, typename ARG, typename... ARGS>
					template<typename RETURN_TYPE, typename CLASS_TYPE>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type 
						Call<CALLER_TYPE, ARG, ARGS...>::Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const
					{
						return BaseType::Filler<RETURN_TYPE, CLASS_TYPE, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE>, ARG>(object, function, m_value);
					}

					template<typename CALLER_TYPE, typename ARG, typename... ARGS>
					template<typename RETURN_TYPE>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type  
						Call<CALLER_TYPE, ARG, ARGS...>::Fill(CallFunctionType<RETURN_TYPE> function) const
					{
						BaseType::Filler<RETURN_TYPE, CallFunctionType<RETURN_TYPE>, ARG>(function, m_value);
					}

					template<typename CALLER_TYPE, typename ARG, typename... ARGS>
					template<typename RETURN_TYPE>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
						Call<CALLER_TYPE, ARG, ARGS...>::Fill(CallFunctionType<RETURN_TYPE> function) const
					{
						return BaseType::Filler<RETURN_TYPE, CallFunctionType<RETURN_TYPE>, ARG>(function, m_value);
					}

					/////////////////////////////////////////////////////////////////////////////////

					template<typename CALLER_TYPE, typename ARG>
					Call<CALLER_TYPE, ARG>::Call(ARG arg) :
						m_value(arg)
					{}

					template<typename CALLER_TYPE, typename ARG>
					template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
						Call<CALLER_TYPE, ARG>::Filler(CLASS_TYPE* object, FUNCTION_TYPE function, FILL_ARGS... fill_args) const
					{
						(object->*function)(fill_args..., m_value);
					}

					template<typename CALLER_TYPE, typename ARG>
					template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
						Call<CALLER_TYPE, ARG>::Filler(CLASS_TYPE* object, FUNCTION_TYPE function, FILL_ARGS... fill_args) const
					{
						return (object->*function)(fill_args..., m_value);
					}

					template<typename CALLER_TYPE, typename ARG>
					template<typename RETURN_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
						Call<CALLER_TYPE, ARG>::Filler(FUNCTION_TYPE function, FILL_ARGS... fill_args) const
					{
						function(fill_args..., m_value);
					}

					template<typename CALLER_TYPE, typename ARG>
					template<typename RETURN_TYPE, typename FUNCTION_TYPE, typename... FILL_ARGS>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
						Call<CALLER_TYPE, ARG>::Filler(FUNCTION_TYPE function, FILL_ARGS... fill_args) const
					{
						return function(fill_args..., m_value);
					}

					template<typename CALLER_TYPE, typename ARG>
					template<typename RETURN_TYPE, typename CLASS_TYPE>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
						Call<CALLER_TYPE, ARG>::Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const
					{
						CallType::Filler<RETURN_TYPE, CLASS_TYPE, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE>>(object, function);
					}

					template<typename CALLER_TYPE, typename ARG>
					template<typename RETURN_TYPE, typename CLASS_TYPE>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
						Call<CALLER_TYPE, ARG>::Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const
					{
						return CallType::Filler<RETURN_TYPE, CLASS_TYPE, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE>>(object, function);
					}

					template<typename CALLER_TYPE, typename ARG>
					template<typename RETURN_TYPE>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
						Call<CALLER_TYPE, ARG>::Fill(CallFunctionType<RETURN_TYPE> function) const
					{
						CallType::Filler<RETURN_TYPE, CallFunctionType<RETURN_TYPE>>(function);
					}

					template<typename CALLER_TYPE, typename ARG>
					template<typename RETURN_TYPE>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
						Call<CALLER_TYPE, ARG>::Fill(CallFunctionType<RETURN_TYPE> function) const
					{
						return CallType::Filler<RETURN_TYPE, CallFunctionType<RETURN_TYPE>>(function);
					}

					/////////////////////////////////////////////////////////////////////////////////

					template<typename CALLER_TYPE>
					Call<CALLER_TYPE, void>::Call()
					{}
					
					template<typename CALLER_TYPE>
					template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
						Call<CALLER_TYPE, void>::Filler(CLASS_TYPE* object, FUNCTION_TYPE function) const
					{
						(object->*function)();
					}

					template<typename CALLER_TYPE>
					template<typename RETURN_TYPE, typename CLASS_TYPE, typename FUNCTION_TYPE>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
						Call<CALLER_TYPE, void>::Filler(CLASS_TYPE* object, FUNCTION_TYPE function) const
					{
						return (object->*function)();
					}

					template<typename CALLER_TYPE>
					template<typename RETURN_TYPE, typename FUNCTION_TYPE>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
						Call<CALLER_TYPE, void>::Filler(FUNCTION_TYPE function) const
					{
						function();
					}

					template<typename CALLER_TYPE>
					template<typename RETURN_TYPE, typename FUNCTION_TYPE>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
						Call<CALLER_TYPE, void>::Filler(FUNCTION_TYPE function) const
					{
						return function();
					}

					template<typename CALLER_TYPE>
					template<typename RETURN_TYPE, typename CLASS_TYPE>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
						Call<CALLER_TYPE, void>::Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const
					{
						CallType::Filler<RETURN_TYPE, CLASS_TYPE, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE>>(object, function);
					}

					template<typename CALLER_TYPE>
					template<typename RETURN_TYPE, typename CLASS_TYPE>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
						Call<CALLER_TYPE, void>::Fill(CLASS_TYPE* object, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE> function) const
					{
						return CallType::Filler<RETURN_TYPE, CLASS_TYPE, CallMemberFunctionType<RETURN_TYPE, CLASS_TYPE>>(object, function);
					}

					template<typename CALLER_TYPE>
					template<typename RETURN_TYPE>
					typename std::enable_if<std::is_void<RETURN_TYPE>::value, void>::type
						Call<CALLER_TYPE, void>::Fill(CallFunctionType<RETURN_TYPE> function) const
					{
						CallType::Filler<RETURN_TYPE, CallFunctionType<RETURN_TYPE>>(function);
					}

					template<typename CALLER_TYPE>
					template<typename RETURN_TYPE>
					typename std::enable_if<!std::is_void<RETURN_TYPE>::value, RETURN_TYPE>::type
						Call<CALLER_TYPE, void>::Fill(CallFunctionType<RETURN_TYPE> function) const
					{
						return CallType::Filler<RETURN_TYPE, CallFunctionType<RETURN_TYPE>>(function);
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_CALL_H_