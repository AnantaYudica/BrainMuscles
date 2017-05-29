#ifndef TYPE_ITERATOR_MEMBER_M_OFFSET_H_
#define TYPE_ITERATOR_MEMBER_M_OFFSET_H_

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
				class M_Offset :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef DERIVED DerivedType;
					typedef HANDLE HandleType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
					typedef TYPE ValueType;
				protected:
					M_Offset();
					M_Offset(const DerivedType& derived);
					M_Offset(const HandleType& handle);
					template<typename... ARGS>
					M_Offset(ARGS... args);
				public:
					virtual ~M_Offset();
				protected:
					virtual DERIVED* ThisDerived() = 0;

					virtual ValueType& OnRequestAt(const size_t& index) = 0;
				public:
					ValueType& operator[](const size_t& index);
				};

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Offset<TYPE, DERIVED, HANDLE, HANDLE_INFO>::M_Offset() :
					BaseType()
				{}

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Offset<TYPE, DERIVED, HANDLE, HANDLE_INFO>::M_Offset(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Offset<TYPE, DERIVED, HANDLE, HANDLE_INFO>::M_Offset(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Offset<TYPE, DERIVED, HANDLE, HANDLE_INFO>::M_Offset(ARGS... args) :
					BaseType(args...)
				{}

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Offset<TYPE, DERIVED, HANDLE, HANDLE_INFO>::~M_Offset()
				{}

				template<typename TYPE, typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				typename M_Offset<TYPE, DERIVED, HANDLE, HANDLE_INFO>::ValueType&
				M_Offset<TYPE, DERIVED, HANDLE, HANDLE_INFO>::operator[](const size_t& index)
				{
					return OnRequestAt(index);
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_OFFSET_H_