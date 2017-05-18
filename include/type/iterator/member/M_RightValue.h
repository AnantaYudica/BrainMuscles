#ifndef TYPE_ITERATOR_MEMBER_M_RIGHTVALUE_H_
#define TYPE_ITERATOR_MEMBER_M_RIGHTVALUE_H_

#include "type\iterator\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace member
			{
				
				template<typename TYPE, typename HANDLE, typename DERIVED>
				class M_RightValue :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
				public:
					typedef DERIVED DerivedType;
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

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_RightValue<TYPE, HANDLE, DERIVED>::M_RightValue() :
					BaseType()
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_RightValue<TYPE, HANDLE, DERIVED>::M_RightValue(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_RightValue<TYPE, HANDLE, DERIVED>::M_RightValue(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				template<typename... ARGS>
				M_RightValue<TYPE, HANDLE, DERIVED>::M_RightValue(ARGS... args) :
					BaseType(args...)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_RightValue<TYPE, HANDLE, DERIVED>::~M_RightValue()
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				const typename M_RightValue<TYPE, HANDLE, DERIVED>::ValueType&
				M_RightValue<TYPE, HANDLE, DERIVED>::operator*()
				{
					return OnRequestReference();
				}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				typename M_RightValue<TYPE, HANDLE, DERIVED>::ValueType*
				M_RightValue<TYPE, HANDLE, DERIVED>::operator->()
				{
					return OnRequestPointer();
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_RIGHTVALUE_H_