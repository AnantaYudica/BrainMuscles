#ifndef TYPE_ITERATOR_MEMBER_M_RIGHTVALUE_H_
#define TYPE_ITERATOR_MEMBER_M_RIGHTVALUE_H_

#include "type\iterator\Base.h"
#include "type\iterator\handle\info\IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace member
			{
				
				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				class M_RightValue :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef DERIVED DerivedType;
					typedef HANDLE HandleType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
					typedef TYPE ValueType;
				protected:
					M_RightValue();
					M_RightValue(const DerivedType& derived);
					M_RightValue(const HandleType& handle);
					template<typename... ARGS>
					M_RightValue(ARGS... args);
				public:
					virtual ~M_RightValue();
				protected:
					virtual DERIVED* ThisDerived() = 0;

					virtual const ValueType& OnRequestReference() = 0;
					virtual ValueType* OnRequestPointer() = 0;
				public:
					const ValueType& operator*();
					ValueType* operator->();

				};

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_RightValue<TYPE, DERIVED, HANDLE, HANDLE_INFO>::M_RightValue() :
					BaseType()
				{}

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_RightValue<TYPE, DERIVED, HANDLE, HANDLE_INFO>::M_RightValue(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_RightValue<TYPE, DERIVED, HANDLE, HANDLE_INFO>::M_RightValue(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				template<typename... ARGS>
				M_RightValue<TYPE, DERIVED, HANDLE, HANDLE_INFO>::M_RightValue(ARGS... args) :
					BaseType(args...)
				{}

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_RightValue<TYPE, DERIVED, HANDLE, HANDLE_INFO>::~M_RightValue()
				{}

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				const typename M_RightValue<TYPE, DERIVED, HANDLE, HANDLE_INFO>::ValueType&
				M_RightValue<TYPE, DERIVED, HANDLE, HANDLE_INFO>::operator*()
				{
					return OnRequestReference();
				}

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				typename M_RightValue<TYPE, DERIVED, HANDLE, HANDLE_INFO>::ValueType*
				M_RightValue<TYPE, DERIVED, HANDLE, HANDLE_INFO>::operator->()
				{
					return OnRequestPointer();
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_RIGHTVALUE_H_