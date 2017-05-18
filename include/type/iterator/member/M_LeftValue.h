#ifndef TYPE_ITERATOR_MEMBER_M_LEFTVALUE_H_
#define TYPE_ITERATOR_MEMBER_M_LEFTVALUE_H_

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
				class M_LeftValue :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
				public:
					typedef DERIVED DerivedType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
					typedef TYPE ValueType;
				protected:
					M_LeftValue();
					M_LeftValue(const DerivedType& derived);
					M_LeftValue(const HandleType& handle);
					template<typename... ARGS>
					M_LeftValue(ARGS... args);
				public:
					virtual ~M_LeftValue();
				protected:
					virtual DERIVED* ThisDerived() = 0;

					virtual ValueType& OnRequestReference() = 0;
					virtual ValueType* OnRequestPointer() = 0;
				public:
					ValueType& operator*();
					ValueType* operator->();

				};

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_LeftValue<TYPE, HANDLE, DERIVED>::M_LeftValue() :
					BaseType()
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_LeftValue<TYPE, HANDLE, DERIVED>::M_LeftValue(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_LeftValue<TYPE, HANDLE, DERIVED>::M_LeftValue(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				template<typename... ARGS>
				M_LeftValue<TYPE, HANDLE, DERIVED>::M_LeftValue(ARGS... args) :
					BaseType(args...)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_LeftValue<TYPE, HANDLE, DERIVED>::~M_LeftValue()
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				typename M_LeftValue<TYPE, HANDLE, DERIVED>::ValueType&
				M_LeftValue<TYPE, HANDLE, DERIVED>::operator*()
				{
					return OnRequestReference();
				}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				typename M_LeftValue<TYPE, HANDLE, DERIVED>::ValueType*
				M_LeftValue<TYPE, HANDLE, DERIVED>::operator->()
				{
					return OnRequestPointer();
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_LEFTVALUE_H_