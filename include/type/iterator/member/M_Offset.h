#ifndef TYPE_ITERATOR_MEMBER_M_OFFSET_H_
#define TYPE_ITERATOR_MEMBER_M_OFFSET_H_

#include "type\iterator\Base.h"
#include "type\iterator\handle\info\IsType.h"
#include "type\iterator\derived\info\IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace member
			{
				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				class M_Offset :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO>
				{
					static_assert(BrainMuscles::type::iterator::derived::info::IsType<DERIVED_INFO>::Value, "[DERIVED_INFO Requires class derived::Info<Definition>");
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef typename DERIVED_INFO::DerivedType DerivedType;
					typedef typename DERIVED_INFO::ReferenceType ReferenceType;
					typedef HANDLE HandleType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO> BaseType;
				protected:
					M_Offset();
					M_Offset(const DerivedType& derived);
					M_Offset(const HandleType& handle);
					template<typename... ARGS>
					M_Offset(ARGS... args);
				public:
					virtual ~M_Offset();
				protected:
					virtual DerivedType* ThisDerived() = 0;

					virtual ReferenceType OnRequestAt(const size_t& index) = 0;
				public:
					ReferenceType operator[](const size_t& index);
				};

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Offset<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Offset() :
					BaseType()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Offset<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Offset(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Offset<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Offset(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Offset<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Offset(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Offset<HANDLE, DERIVED_INFO, HANDLE_INFO>::~M_Offset()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_Offset<HANDLE, DERIVED_INFO, HANDLE_INFO>::ReferenceType
				M_Offset<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator[](const size_t& index)
				{
					return OnRequestAt(index);
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_OFFSET_H_