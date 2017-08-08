#ifndef TEST_SIMPLE_LOG_OUTPUT_SET_BASE_H_
#define TEST_SIMPLE_LOG_OUTPUT_SET_BASE_H_

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
					namespace set
					{
						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE, typename ARG, typename... ARGS>
						class Base :
							public Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, ARGS...>
						{
						protected:
							typedef Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, ARG, ARGS...>	CurrentType;
							typedef Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, ARGS...>		ParentType;
							typedef typename ParentType::FunctionType							FunctionType;
						private:
							typename std::remove_reference<ARG>::type m_value;
						protected:
							Base(FunctionType function, ARG arg, ARGS... args);
						protected:
							template<typename... FILL_ARGS>
							RETURN_TYPE Filler(CLASS_TYPE* object, FILL_ARGS... fill_args) const;
						protected:
							RETURN_TYPE Value(CLASS_TYPE* object) const;
						};

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename ARG, typename... ARGS>
						class Base<FUNCTION_TYPE, CLASS_TYPE, void, ARG, ARGS...> :
							public Base<FUNCTION_TYPE, CLASS_TYPE, void, ARGS...>
						{
						protected:
							typedef Base<FUNCTION_TYPE, CLASS_TYPE, void, ARG, ARGS...>			CurrentType;
							typedef Base<FUNCTION_TYPE, CLASS_TYPE, void, ARGS...>				ParentType;
							typedef typename ParentType::FunctionType							FunctionType;
						private:
							typename std::remove_reference<ARG>::type m_value;
						protected:
							Base(FunctionType function, ARG arg, ARGS... args);
						protected:
							template<typename... FILL_ARGS>
							void Filler(CLASS_TYPE* object, FILL_ARGS... fill_args) const;
						protected:
							void Value(CLASS_TYPE* object) const;
						};

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE, typename ARG>
						class Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, ARG>
						{
						protected:
							typedef Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, ARG>	CurrentType;
							typedef void												ParentType;
							typedef FUNCTION_TYPE										FunctionType;
						private:
							typename std::remove_reference<ARG>::type m_value;
							FunctionType m_function;
						protected:
							Base(FunctionType function, ARG arg);
						protected:
							template<typename... FILL_ARGS>
							RETURN_TYPE Filler(CLASS_TYPE* object, FILL_ARGS... fill_args) const;
						protected:
							RETURN_TYPE Value(CLASS_TYPE* object) const;
						};

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename ARG>
						class Base<FUNCTION_TYPE, CLASS_TYPE, void, ARG>
						{
						protected:
							typedef Base<FUNCTION_TYPE, CLASS_TYPE, void, ARG>			CurrentType;
							typedef void												ParentType;
							typedef FUNCTION_TYPE										FunctionType;
						private:
							typename std::remove_reference<ARG>::type m_value;
							FunctionType m_function;
						protected:
							Base(FunctionType function, ARG arg);
						protected:
							template<typename... FILL_ARGS>
							void Filler(CLASS_TYPE* object, FILL_ARGS... fill_args) const;
						protected:
							void Value(CLASS_TYPE* object) const;
						};

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE>
						class Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, void>
						{
						protected:
							typedef Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, void>	CurrentType;
							typedef void												ParentType;
							typedef FUNCTION_TYPE										FunctionType;
						private:
							FunctionType m_function;
						protected:
							Base(FunctionType function);
						protected:
							RETURN_TYPE Filler(CLASS_TYPE* object) const;
						protected:
							RETURN_TYPE Value(CLASS_TYPE* object) const;
						};

						template<typename FUNCTION_TYPE, typename CLASS_TYPE>
						class Base<FUNCTION_TYPE, CLASS_TYPE, void, void>
						{
						protected:
							typedef Base<FUNCTION_TYPE, CLASS_TYPE, void, void>			CurrentType;
							typedef void												ParentType;
							typedef FUNCTION_TYPE										FunctionType;
						private:
							FunctionType m_function;
						protected:
							Base(FunctionType function);
						protected:
							void Filler(CLASS_TYPE* object) const;
						protected:
							void Value(CLASS_TYPE* object) const;
						};

						/////////////////////////////////////////////////////////////////////////////////

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE, typename ARG, typename... ARGS>
						Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, ARG, ARGS...>::Base(FunctionType function, ARG arg, ARGS... args) :
							ParentType(function, args...),
							m_value(arg)
						{}

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE, typename ARG, typename... ARGS>
						template<typename... FILL_ARGS>
						RETURN_TYPE Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, ARG, ARGS...>::
							Filler(CLASS_TYPE* object, FILL_ARGS... fill_args) const
						{
							return ParentType::Filler(object, fill_args..., m_value);
						}

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE, typename ARG, typename... ARGS>
						RETURN_TYPE Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, ARG, ARGS...>::
							Value(CLASS_TYPE* object) const
						{
							return ParentType::Filler(object, m_value);
						}

						/////////////////////////////////////////////////////////////////////////////////

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename ARG, typename... ARGS>
						Base<FUNCTION_TYPE, CLASS_TYPE, void, ARG, ARGS...>::Base(FunctionType function, ARG arg, ARGS... args) :
							ParentType(function, args...),
							m_value(arg)
						{}

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename ARG, typename... ARGS>
						template<typename... FILL_ARGS>
						void Base<FUNCTION_TYPE, CLASS_TYPE, void, ARG, ARGS...>::
							Filler(CLASS_TYPE* object, FILL_ARGS... fill_args) const
						{
							ParentType::Filler(object, fill_args..., m_value);
						}

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename ARG, typename... ARGS>
						void Base<FUNCTION_TYPE, CLASS_TYPE, void, ARG, ARGS...>::
							Value(CLASS_TYPE* object) const
						{
							ParentType::Filler(object, m_value);
						}

						/////////////////////////////////////////////////////////////////////////////////

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE, typename ARG>
						Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, ARG>::Base(FunctionType function, ARG arg) :
							m_function(function),
							m_value(arg)
						{}

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE, typename ARG>
						template<typename... FILL_ARGS>
						RETURN_TYPE Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, ARG>::
							Filler(CLASS_TYPE* object, FILL_ARGS... fill_args) const
						{
							return (object->*m_function)(fill_args..., m_value);
						}
					
						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE, typename ARG>
						RETURN_TYPE Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, ARG>::
							Value(CLASS_TYPE* object) const
						{
							return CurrentType::Filler(object);
						}

						/////////////////////////////////////////////////////////////////////////////////

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename ARG>
						Base<FUNCTION_TYPE, CLASS_TYPE, void, ARG>::Base(FunctionType function, ARG arg) :
							m_function(function),
							m_value(arg)
						{}

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename ARG>
						template<typename... FILL_ARGS>
						void Base<FUNCTION_TYPE, CLASS_TYPE, void, ARG>::
							Filler(CLASS_TYPE* object, FILL_ARGS... fill_args) const
						{
							(object->*m_function)(fill_args..., m_value);
						}

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename ARG>
						void Base<FUNCTION_TYPE, CLASS_TYPE, void, ARG>::
							Value(CLASS_TYPE* object) const
						{
							CurrentType::Filler(object);
						}

						/////////////////////////////////////////////////////////////////////////////////

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE>
						Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, void>::Base(FunctionType function) :
							m_function(function)
						{}

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE>
						RETURN_TYPE Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, void>::
							Filler(CLASS_TYPE* object) const
						{
							return (object->*m_function)();
						}

						template<typename FUNCTION_TYPE, typename CLASS_TYPE, typename RETURN_TYPE>
						RETURN_TYPE Base<FUNCTION_TYPE, CLASS_TYPE, RETURN_TYPE, void>::
							Value(CLASS_TYPE* object) const
						{
							return CurrentType::Filler(object);
						}

						/////////////////////////////////////////////////////////////////////////////////

						template<typename FUNCTION_TYPE, typename CLASS_TYPE>
						Base<FUNCTION_TYPE, CLASS_TYPE, void, void>::Base(FunctionType function) :
							m_function(function)
						{}

						template<typename FUNCTION_TYPE, typename CLASS_TYPE>
						void Base<FUNCTION_TYPE, CLASS_TYPE, void, void>::
							Filler(CLASS_TYPE* object) const
						{
							(object->*m_function)();
						}
						template<typename FUNCTION_TYPE, typename CLASS_TYPE>
						void Base<FUNCTION_TYPE, CLASS_TYPE, void, void>::
							Value(CLASS_TYPE* object) const
						{
							CurrentType::Filler(object);
						}
					}
				}
			}
		}
	}
}

#endif 

#endif //!TEST_SIMPLE_LOG_OUTPUT_SET_BASE_H_