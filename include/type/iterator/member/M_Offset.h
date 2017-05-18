#ifndef TYPE_ITERATOR_MEMBER_M_OFFSET_H_
#define TYPE_ITERATOR_MEMBER_M_OFFSET_H_

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
				class M_Offset :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
				public:
					typedef DERIVED DerivedType;
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

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_Offset<TYPE, HANDLE, DERIVED>::M_Offset() :
					BaseType()
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_Offset<TYPE, HANDLE, DERIVED>::M_Offset(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_Offset<TYPE, HANDLE, DERIVED>::M_Offset(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				template<typename... ARGS>
				M_Offset<TYPE, HANDLE, DERIVED>::M_Offset(ARGS... args) :
					BaseType(args...)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				M_Offset<TYPE, HANDLE, DERIVED>::~M_Offset()
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				typename M_Offset<TYPE, HANDLE, DERIVED>::ValueType&
				M_Offset<TYPE, HANDLE, DERIVED>::operator[](const size_t& index)
				{
					return OnRequestAt(index);
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_OFFSET_H_