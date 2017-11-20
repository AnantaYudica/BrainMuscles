#ifndef TYPE_ITERATOR_MEMBER_M_DECREMENT_H_
#define TYPE_ITERATOR_MEMBER_M_DECREMENT_H_

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
				class M_Decrement :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO>
				{
					static_assert(BrainMuscles::type::iterator::derived::info::IsType<DERIVED_INFO>::Value, "[DERIVED_INFO Requires class derived::Info<Definition>");
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef typename DERIVED_INFO::DerivedType DerivedType;
					typedef HANDLE HandleType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO> BaseType;
					typedef M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO> DecrementType;
				protected:
					M_Decrement();
					M_Decrement(const DerivedType& derived);
					M_Decrement(const HandleType& handle);
					template<typename... ARGS>
					M_Decrement(ARGS... args);
				public:
					virtual ~M_Decrement();
				protected:
					virtual DerivedType* ThisDerived() = 0;

					virtual void OnRequestDecrement(HandleType& handle) = 0;
				public:
					DerivedType& operator--();
					DerivedType operator--(int);
				};

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Decrement() :
					BaseType()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Decrement(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Decrement(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Decrement(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO>::~M_Decrement()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO>::DerivedType&
				M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator--()
				{
					OnRequestDecrement(GetHandle());
					return *ThisDerived();
				}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO>::DerivedType
				M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator--(int)
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