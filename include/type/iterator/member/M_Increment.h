#ifndef TYPE_ITERATOR_MEMBER_M_INCREMENT_H_
#define TYPE_ITERATOR_MEMBER_M_INCREMENT_H_

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
				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				class M_Increment :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
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

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Increment<DERIVED, HANDLE, HANDLE_INFO>::M_Increment() :
					BaseType()
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Increment<DERIVED, HANDLE, HANDLE_INFO>::M_Increment(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Increment<DERIVED, HANDLE, HANDLE_INFO>::M_Increment(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Increment<DERIVED, HANDLE, HANDLE_INFO>::M_Increment(ARGS... args) :
					BaseType(args...)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Increment<DERIVED, HANDLE, HANDLE_INFO>::~M_Increment()
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				typename M_Increment<DERIVED, HANDLE, HANDLE_INFO>::DerivedType&
				M_Increment<DERIVED, HANDLE, HANDLE_INFO>::operator++()
				{
					OnRequestIncrement(GetHandle());
					return *ThisDerived();
				}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				typename M_Increment<DERIVED, HANDLE, HANDLE_INFO>::DerivedType
				M_Increment<DERIVED, HANDLE, HANDLE_INFO>::operator++(int)
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