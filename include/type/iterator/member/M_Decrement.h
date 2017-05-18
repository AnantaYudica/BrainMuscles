#ifndef TYPE_ITERATOR_MEMBER_M_DECREMENT_H_
#define TYPE_ITERATOR_MEMBER_M_DECREMENT_H_

#include "type\iterator\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace member
			{
				template<typename HANDLE, typename DERIVED>
				class M_Decrement :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
				public:
					typedef DERIVED DerivedType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
					typedef M_Decrement<HANDLE, DERIVED> DecrementType;
					typedef DERIVED DerivedType;
				protected:
					M_Decrement();
					M_Decrement(const DerivedType& derived);
					M_Decrement(const HandleType& handle);
					template<typename... ARGS>
					M_Decrement(ARGS... args);
				public:
					virtual ~M_Decrement();
				protected:
					virtual DERIVED* ThisDerived() = 0;

					virtual void OnRequestDecrement(HandleType& handle) = 0;
				public:
					DerivedType& operator--();
					DerivedType operator--(int);
				};

				template<typename HANDLE, typename DERIVED>
				M_Decrement<HANDLE, DERIVED>::M_Decrement() :
					BaseType()
				{}

				template<typename HANDLE, typename DERIVED>
				M_Decrement<HANDLE, DERIVED>::M_Decrement(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED>
				M_Decrement<HANDLE, DERIVED>::M_Decrement(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED>
				template<typename... ARGS>
				M_Decrement<HANDLE, DERIVED>::M_Decrement(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED>
				M_Decrement<HANDLE, DERIVED>::~M_Decrement()
				{}

				template<typename HANDLE, typename DERIVED>
				typename M_Decrement<HANDLE, DERIVED>::DerivedType&
				M_Decrement<HANDLE, DERIVED>::operator--()
				{
					OnRequestDecrement(GetHandle());
					return *ThisDerived();
				}

				template<typename HANDLE, typename DERIVED>
				typename M_Decrement<HANDLE, DERIVED>::DerivedType
				M_Decrement<HANDLE, DERIVED>::operator--(int)
				{
					DerivedType copy = DerivedType(*ThisDerived());
					OnRequestDecrement(GetHandle());
					return copy;
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_DECREMENT_H_