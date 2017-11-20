#ifndef TYPE_ITERATOR_MEMBER_M_INCREMENT_H_
#define TYPE_ITERATOR_MEMBER_M_INCREMENT_H_

#include "type/iterator/Base.h"
#include "type/iterator/handle/info/IsType.h"
#include "type/iterator/derived/info/IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace member
			{
				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				class M_Increment :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO>
				{
					static_assert(BrainMuscles::type::iterator::derived::info::IsType<DERIVED_INFO>::Value, "[DERIVED_INFO Requires class derived::Info<Definition>");
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef typename DERIVED_INFO::DerivedType DerivedType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO> BaseType;
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
					virtual DerivedType* ThisDerived() = 0;

					virtual void OnRequestIncrement(HandleType& handle) = 0;
				public:
					DerivedType& operator++();
					DerivedType operator++(int);
				};

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Increment() :
					BaseType()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Increment(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Increment(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Increment(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO>::~M_Increment()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO>::DerivedType&
				M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator++()
				{
					OnRequestIncrement(GetHandle());
					return *ThisDerived();
				}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO>::DerivedType
				M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator++(int)
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