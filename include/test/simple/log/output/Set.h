#ifndef TEST_SIMPLE_LOG_OUTPUT_SET_H_
#define TEST_SIMPLE_LOG_OUTPUT_SET_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <type_traits>

#include "test\simple\log\output\set\Type.h"
#include "test\simple\log\output\set\Base.h"

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
					template<typename CLASS_TYPE, typename RETURN_TYPE, typename ARG, typename... ARGS>
					class Set :
						public BrainMuscles::test::simple::log::output::set::Base<
							RETURN_TYPE(CLASS_TYPE::*)(ARG, ARGS...), CLASS_TYPE, RETURN_TYPE, ARG, ARGS...>
					{
					public:
						typedef RETURN_TYPE(CLASS_TYPE::*FunctionType)(ARG, ARGS...);
					public:
						typedef BrainMuscles::test::simple::log::output::set::Type		Type;
						typedef BrainMuscles::test::simple::log::output::set::Base<
							FunctionType, CLASS_TYPE, RETURN_TYPE, ARG, ARGS...>		BaseType;
					private:
						Type m_type;
					public:
						Set(Type type, FunctionType function, ARG arg, ARGS... args);
					public:
						bool IsSetLocalValue() const;
						bool IsSetGlobalValue() const;
					public:
						RETURN_TYPE Value(CLASS_TYPE* object) const;
					};

					template<typename CLASS_TYPE, typename ARG, typename... ARGS>
					class Set<CLASS_TYPE, void, ARG, ARGS...> :
						public BrainMuscles::test::simple::log::output::set::Base<
							void(CLASS_TYPE::*)(ARG, ARGS...), CLASS_TYPE, void, ARG, ARGS...>
					{
					public:
						typedef void(CLASS_TYPE::*FunctionType)(ARG, ARGS...);
					public:
						typedef BrainMuscles::test::simple::log::output::set::Type		Type;
						typedef BrainMuscles::test::simple::log::output::set::Base<
							FunctionType, CLASS_TYPE, void, ARG, ARGS...>				BaseType;
					private:
						Type m_type;
					public:
						Set(Type type, FunctionType function, ARG arg, ARGS... args);
					public:
						bool IsSetLocalValue() const;
						bool IsSetGlobalValue() const;
					public:
						void Value(CLASS_TYPE* object) const;
					};

					template<typename CLASS_TYPE, typename RETURN_TYPE>
					class Set<CLASS_TYPE, RETURN_TYPE, void> :
						public BrainMuscles::test::simple::log::output::set::Base<
							RETURN_TYPE(CLASS_TYPE::*)(), CLASS_TYPE, RETURN_TYPE, void>
					{
					public:
						typedef RETURN_TYPE(CLASS_TYPE::*FunctionType)();
					public:
						typedef BrainMuscles::test::simple::log::output::set::Type		Type;
						typedef BrainMuscles::test::simple::log::output::set::Base<
							FunctionType, CLASS_TYPE, RETURN_TYPE, void>				BaseType;
					private:
						Type m_type;
					public:
						Set(Type type, FunctionType function);
					public:
						bool IsSetLocalValue() const;
						bool IsSetGlobalValue() const;
					public:
						RETURN_TYPE Value(CLASS_TYPE* object) const;
					};

					template<typename CLASS_TYPE>
					class Set<CLASS_TYPE, void, void> :
						public BrainMuscles::test::simple::log::output::set::Base<
							void(CLASS_TYPE::*)(), CLASS_TYPE, void, void>
					{
					public:
						typedef void(CLASS_TYPE::*FunctionType)();
					public:
						typedef BrainMuscles::test::simple::log::output::set::Type		Type;
						typedef BrainMuscles::test::simple::log::output::set::Base<
							FunctionType, CLASS_TYPE, void, void>						BaseType;
					private:
						Type m_type;
					public:
						Set(Type type, FunctionType function);
					public:
						bool IsSetLocalValue() const;
						bool IsSetGlobalValue() const;
					public:
						void Value(CLASS_TYPE* object) const;
					};

					/////////////////////////////////////////////////////////////////////////////////

					template<typename CLASS_TYPE, typename RETURN_TYPE, typename ARG, typename... ARGS>
					Set<CLASS_TYPE, RETURN_TYPE, ARG, ARGS...>::Set(Type type, FunctionType function, ARG arg, ARGS... args) :
						BaseType(function, arg, args...),
						m_type(type)
					{}

					template<typename CLASS_TYPE, typename RETURN_TYPE, typename ARG, typename... ARGS>
					RETURN_TYPE Set<CLASS_TYPE, RETURN_TYPE, ARG, ARGS...>::Value(CLASS_TYPE* object) const
					{
						return BaseType::Value(object);
					}

					template<typename CLASS_TYPE, typename RETURN_TYPE, typename ARG, typename... ARGS>
					bool Set<CLASS_TYPE, RETURN_TYPE, ARG, ARGS...>::IsSetLocalValue() const
					{
						return m_type == Type::local_value;
					}

					template<typename CLASS_TYPE, typename RETURN_TYPE, typename ARG, typename... ARGS>
					bool Set<CLASS_TYPE, RETURN_TYPE, ARG, ARGS...>::IsSetGlobalValue() const
					{
						return m_type == Type::global_value;
					}

					/////////////////////////////////////////////////////////////////////////////////

					template<typename CLASS_TYPE, typename ARG, typename... ARGS>
					Set<CLASS_TYPE, void, ARG, ARGS...>::Set(Type type, FunctionType function, ARG arg, ARGS... args) :
						BaseType(function, arg, args...),
						m_type(type)
					{}

					template<typename CLASS_TYPE, typename ARG, typename... ARGS>
					void Set<CLASS_TYPE, void, ARG, ARGS...>::Value(CLASS_TYPE* object) const
					{
						BaseType::Value(object);
					}

					template<typename CLASS_TYPE, typename ARG, typename... ARGS>
					bool Set<CLASS_TYPE, void, ARG, ARGS...>::IsSetLocalValue() const
					{
						return m_type == Type::local_value;
					}

					template<typename CLASS_TYPE, typename ARG, typename... ARGS>
					bool Set<CLASS_TYPE, void, ARG, ARGS...>::IsSetGlobalValue() const
					{
						return m_type == Type::global_value;
					}

					/////////////////////////////////////////////////////////////////////////////////

					template<typename CLASS_TYPE, typename RETURN_TYPE>
					Set<CLASS_TYPE, RETURN_TYPE, void>::Set(Type type, FunctionType function) :
						BaseType(function),
						m_type(type)
					{}

					template<typename CLASS_TYPE, typename RETURN_TYPE>
					RETURN_TYPE Set<CLASS_TYPE, RETURN_TYPE, void>::Value(CLASS_TYPE* object) const
					{
						return BaseType::Value(object);
					}

					template<typename CLASS_TYPE, typename RETURN_TYPE>
					bool Set<CLASS_TYPE, RETURN_TYPE, void>::IsSetLocalValue() const
					{
						return m_type == Type::local_value;
					}

					template<typename CLASS_TYPE, typename RETURN_TYPE>
					bool Set<CLASS_TYPE, RETURN_TYPE, void>::IsSetGlobalValue() const
					{
						return m_type == Type::global_value;
					}

					/////////////////////////////////////////////////////////////////////////////////

					template<typename CLASS_TYPE>
					Set<CLASS_TYPE, void, void>::Set(Type type, FunctionType function) :
						BaseType(function),
						m_type(type)
					{}

					template<typename CLASS_TYPE>
					void Set<CLASS_TYPE, void, void>::Value(CLASS_TYPE* object) const
					{
						BaseType::Value(object);
					}

					template<typename CLASS_TYPE>
					bool Set<CLASS_TYPE, void, void>::IsSetLocalValue() const
					{
						return m_type == Type::local_value;
					}

					template<typename CLASS_TYPE>
					bool Set<CLASS_TYPE, void, void>::IsSetGlobalValue() const
					{
						return m_type == Type::global_value;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_SET_H_