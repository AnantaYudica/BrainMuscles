#ifndef TEST_SIMPLE_FUNCTIONAL_FUNCTION_MEMBER_H_
#define TEST_SIMPLE_FUNCTIONAL_FUNCTION_MEMBER_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/functional/Function.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace functional
			{
				namespace function
				{
					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					class Member :
						public BrainMuscles::test::simple::functional::Function<RETURN_TYPE, OBJECT_TYPE*, ARGS...>
					{
					public:
						typedef OBJECT_TYPE ObjectType;
						typedef ObjectType* ObjectPtrType;
						typedef Member<RETURN_TYPE, ObjectType, ARGS...> MemberType;
						typedef BrainMuscles::test::simple::functional::
							Function<RETURN_TYPE, ObjectPtrType, ARGS...> BaseType;
						typedef RETURN_TYPE(OBJECT_TYPE::*FunctionMemberType)(ARGS...);
					private:
						ObjectPtrType m_object;
					public:
						Member();
						Member(FunctionMemberType function_member, ObjectPtrType object);
						Member(const MemberType& copy);
						Member(MemberType&& move);
					public:
						RETURN_TYPE operator()(ARGS... args) const;
					};

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					class Member<RETURN_TYPE, const OBJECT_TYPE, ARGS...> :
						public BrainMuscles::test::simple::functional::Function<RETURN_TYPE, const OBJECT_TYPE*, ARGS...>
					{
					public:
						typedef const OBJECT_TYPE ObjectType;
						typedef ObjectType* ObjectPtrType;
						typedef Member<RETURN_TYPE, ObjectType, ARGS...> MemberType;
						typedef BrainMuscles::test::simple::functional::
							Function<RETURN_TYPE, ObjectPtrType, ARGS...> BaseType;
						typedef RETURN_TYPE(OBJECT_TYPE::*FunctionMemberType)(ARGS...) const;
					private:
						ObjectPtrType m_object;
					public:
						Member();
						Member(FunctionMemberType function_member, ObjectPtrType object);
						Member(const MemberType& copy);
						Member(MemberType&& move);
					public:
						RETURN_TYPE operator()(ARGS... args) const;
					};

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					class Member<RETURN_TYPE, volatile OBJECT_TYPE, ARGS...> :
						public BrainMuscles::test::simple::functional::Function<RETURN_TYPE, volatile OBJECT_TYPE*, ARGS...>
					{
					public:
						typedef volatile OBJECT_TYPE ObjectType;
						typedef ObjectType* ObjectPtrType;
						typedef Member<RETURN_TYPE, ObjectType, ARGS...> MemberType;
						typedef BrainMuscles::test::simple::functional::
							Function<RETURN_TYPE, ObjectPtrType, ARGS...> BaseType;
						typedef RETURN_TYPE(OBJECT_TYPE::*FunctionMemberType)(ARGS...) volatile;
					private:
						ObjectPtrType m_object;
					public:
						Member();
						Member(FunctionMemberType function_member, ObjectPtrType object);
						Member(const MemberType& copy);
						Member(MemberType&& move);
					public:
						RETURN_TYPE operator()(ARGS... args) const;
					};

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					class Member<RETURN_TYPE, const volatile OBJECT_TYPE, ARGS...> :
						public BrainMuscles::test::simple::functional::Function<RETURN_TYPE, const volatile OBJECT_TYPE*, ARGS...>
					{
					public:
						typedef const volatile OBJECT_TYPE ObjectType;
						typedef ObjectType* ObjectPtrType;
						typedef Member<RETURN_TYPE, ObjectType, ARGS...> MemberType;
						typedef BrainMuscles::test::simple::functional::
							Function<RETURN_TYPE, ObjectPtrType, ARGS...> BaseType;
						typedef RETURN_TYPE(OBJECT_TYPE::*FunctionMemberType)(ARGS...) const volatile;
					private:
						ObjectPtrType m_object;
					public:
						Member();
						Member(FunctionMemberType function_member, ObjectPtrType object);
						Member(const MemberType& copy);
						Member(MemberType&& move);
					public:
						RETURN_TYPE operator()(ARGS... args) const;
					};

					///////////////////////////////////////////////////////////////////////////////////////

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, OBJECT_TYPE, ARGS...>::Member() :
						m_object(0)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, OBJECT_TYPE, ARGS...>::Member(FunctionMemberType function_member, ObjectPtrType object) :
						BaseType(function_member),
						m_object(object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, OBJECT_TYPE, ARGS...>::Member(const MemberType& copy) :
						BaseType(copy),
						m_object(copy.m_object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, OBJECT_TYPE, ARGS...>::Member(MemberType&& move) :
						BaseType(move),
						m_object(move.m_object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					RETURN_TYPE Member<RETURN_TYPE, OBJECT_TYPE, ARGS...>::operator()(ARGS... args) const
					{
						return BaseType::operator()(m_object, args...);
					}

					///////////////////////////////////////////////////////////////////////////////////////

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, const OBJECT_TYPE, ARGS...>::Member() :
						m_object(0)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, const OBJECT_TYPE, ARGS...>::Member(FunctionMemberType function_member, ObjectPtrType object) :
						BaseType(function_member),
						m_object(object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, const OBJECT_TYPE, ARGS...>::Member(const MemberType& copy) :
						BaseType(copy),
						m_object(copy.m_object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, const OBJECT_TYPE, ARGS...>::Member(MemberType&& move) :
						BaseType(move),
						m_object(move.m_object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					RETURN_TYPE Member<RETURN_TYPE, const OBJECT_TYPE, ARGS...>::operator()(ARGS... args) const
					{
						return BaseType::operator()(m_object, args...);
					}

					///////////////////////////////////////////////////////////////////////////////////////

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, volatile OBJECT_TYPE, ARGS...>::Member() :
						m_object(0)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, volatile OBJECT_TYPE, ARGS...>::Member(FunctionMemberType function_member, ObjectPtrType object) :
						BaseType(function_member),
						m_object(object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, volatile OBJECT_TYPE, ARGS...>::Member(const MemberType& copy) :
						BaseType(copy),
						m_object(copy.m_object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, volatile OBJECT_TYPE, ARGS...>::Member(MemberType&& move) :
						BaseType(move),
						m_object(move.m_object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					RETURN_TYPE Member<RETURN_TYPE, volatile OBJECT_TYPE, ARGS...>::operator()(ARGS... args) const
					{
						return BaseType::operator()(m_object, args...);
					}

					///////////////////////////////////////////////////////////////////////////////////////

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, const volatile OBJECT_TYPE, ARGS...>::Member() :
						m_object(0)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, const volatile OBJECT_TYPE, ARGS...>::Member(FunctionMemberType function_member, ObjectPtrType object) :
						BaseType(function_member),
						m_object(object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, const volatile OBJECT_TYPE, ARGS...>::Member(const MemberType& copy) :
						BaseType(copy),
						m_object(copy.m_object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Member<RETURN_TYPE, const volatile OBJECT_TYPE, ARGS...>::Member(MemberType&& move) :
						BaseType(move),
						m_object(move.m_object)
					{}

					template<typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					RETURN_TYPE Member<RETURN_TYPE, const volatile OBJECT_TYPE, ARGS...>::operator()(ARGS... args) const
					{
						return BaseType::operator()(m_object, args...);
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_FUNCTIONAL_FUNCTION_MEMBER_H_