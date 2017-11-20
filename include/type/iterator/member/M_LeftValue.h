#ifndef TYPE_ITERATOR_MEMBER_M_LEFTVALUE_H_
#define TYPE_ITERATOR_MEMBER_M_LEFTVALUE_H_

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
				class M_LeftValue :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO>
				{
					static_assert(BrainMuscles::type::iterator::derived::info::IsType<DERIVED_INFO>::Value, "[DERIVED_INFO Requires class derived::Info<Definition>");
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef typename DERIVED_INFO::DerivedType DerivedType;
					typedef typename DERIVED_INFO::ReferenceType ReferenceType;
					typedef typename DERIVED_INFO::PointerType PointerType;
					typedef HANDLE HandleType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO> BaseType;
				protected:
					M_LeftValue();
					M_LeftValue(const DerivedType& derived);
					M_LeftValue(const HandleType& handle);
					template<typename... ARGS>
					M_LeftValue(ARGS... args);
				public:
					virtual ~M_LeftValue();
				protected:
					virtual DerivedType* ThisDerived() = 0;

					virtual ReferenceType OnRequestReference() = 0;
					virtual PointerType OnRequestPointer() = 0;
				public:
					ReferenceType operator*();
					PointerType operator->();

				};

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_LeftValue() :
					BaseType()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_LeftValue(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_LeftValue(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				template<typename... ARGS>
				M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_LeftValue(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO>::~M_LeftValue()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO>::ReferenceType
				M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator*()
				{
					return OnRequestReference();
				}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO>::PointerType
				M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator->()
				{
					return OnRequestPointer();
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_LEFTVALUE_H_