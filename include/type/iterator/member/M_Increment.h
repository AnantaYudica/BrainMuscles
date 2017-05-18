#ifndef TYPE_ITERATOR_MEMBER_M_INCREMENT_H_
#define TYPE_ITERATOR_MEMBER_M_INCREMENT_H_

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
				class M_Increment :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
				public:
					typedef DERIVED DerivedType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
					typedef HANDLE HandleType;
					typedef HANDLE * PointerHandle;
				protected:
					M_Increment();
					M_Increment(const DerivedType& derived);
					M_Increment(const HandleType& handle);
					template<typename... ARGS>
					M_Increment(ARGS... args);
				public:
					virtual ~M_Increment();
				protected:
					virtual DERIVED* ThisDerived() = 0;

					virtual void OnRequestIncrement(HandleType& handle) = 0;
				public:
					DerivedType& operator++();
					DerivedType operator++(int);
				};

				template<typename HANDLE, typename DERIVED>
				M_Increment<HANDLE, DERIVED>::M_Increment() :
					BaseType()
				{}

				template<typename HANDLE, typename DERIVED>
				M_Increment<HANDLE, DERIVED>::M_Increment(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED>
				M_Increment<HANDLE, DERIVED>::M_Increment(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED>
				template<typename... ARGS>
				M_Increment<HANDLE, DERIVED>::M_Increment(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED>
				M_Increment<HANDLE, DERIVED>::~M_Increment()
				{}

				template<typename HANDLE, typename DERIVED>
				typename M_Increment<HANDLE, DERIVED>::DerivedType&
				M_Increment<HANDLE, DERIVED>::operator++()
				{
					OnRequestIncrement(GetHandle());
					return *ThisDerived();
				}

				template<typename HANDLE, typename DERIVED>
				typename M_Increment<HANDLE, DERIVED>::DerivedType
				M_Increment<HANDLE, DERIVED>::operator++(int)
				{
					DerivedType copy = DerivedType(*ThisDerived());
					OnRequestIncrement(GetHandle());
					return copy;
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_INCREMENT_H_