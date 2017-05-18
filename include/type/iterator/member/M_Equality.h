#ifndef TYPE_ITERATOR_MEMBER_M_EQUALITY_H_
#define TYPE_ITERATOR_MEMBER_M_EQUALITY_H_

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
				class M_Equality :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
				public:
					typedef DERIVED DerivedType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
					typedef DERIVED DerivedType;
				protected:
					M_Equality();
					M_Equality(const DerivedType& derived);
					M_Equality(const HandleType& handle);
					template<typename... ARGS>
					M_Equality(ARGS... args);
				public:
					virtual ~M_Equality();
				protected:
					virtual DERIVED* ThisDerived() = 0;

					virtual bool OnRequestEqual(DerivedType& rhs) = 0;
				public:
					bool operator==(DerivedType& rhs);
					bool operator!=(DerivedType& rhs);

				};

				template<typename HANDLE, typename DERIVED>
				M_Equality<HANDLE, DERIVED>::M_Equality() :
					BaseType()
				{}

				template<typename HANDLE, typename DERIVED>
				M_Equality<HANDLE, DERIVED>::M_Equality(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED>
				M_Equality<HANDLE, DERIVED>::M_Equality(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED>
				template<typename... ARGS>
				M_Equality<HANDLE, DERIVED>::M_Equality(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED>
				M_Equality<HANDLE, DERIVED>::~M_Equality()
				{}

				template<typename HANDLE, typename DERIVED>
				bool M_Equality<HANDLE, DERIVED>::operator==(DerivedType& rhs)
				{
					return OnRequestEqual(rhs);
				}

				template<typename HANDLE, typename DERIVED>
				bool M_Equality<HANDLE, DERIVED>::operator!=(DerivedType& rhs)
				{
					return !OnRequestEqual(rhs);
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_EQUALITY_H_