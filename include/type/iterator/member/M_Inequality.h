#ifndef TYPE_ITERATOR_MEMBER_M_INEQUALITY_H_
#define TYPE_ITERATOR_MEMBER_M_INEQUALITY_H_

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
				class M_Inequality :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef HANDLE HandleType;
					typedef DERIVED DerivedType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
				protected:
					M_Inequality();
					M_Inequality(const DerivedType& derived);
					M_Inequality(const HandleType& handle);
					template<typename... ARGS>
					M_Inequality(ARGS... args);
				public:
					virtual ~M_Inequality();
				protected:
					virtual DERIVED* ThisDerived() = 0;

					virtual bool OnRequestEqual(DerivedType& rhs) = 0;
					virtual bool OnRequestLess(DerivedType& rhs) = 0;
					virtual bool OnRequestGreater(DerivedType& rhs) = 0;
				public:
					bool operator<(DerivedType& rhs);
					bool operator>(DerivedType& rhs);

					bool operator<=(DerivedType& rhs);
					bool operator>=(DerivedType& rhs);
				};

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Inequality<DERIVED, HANDLE, HANDLE_INFO>::M_Inequality() :
					BaseType()
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Inequality<DERIVED, HANDLE, HANDLE_INFO>::M_Inequality(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Inequality<DERIVED, HANDLE, HANDLE_INFO>::M_Inequality(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Inequality<DERIVED, HANDLE, HANDLE_INFO>::M_Inequality(ARGS... args) :
					BaseType(args...)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Inequality<DERIVED, HANDLE, HANDLE_INFO>::~M_Inequality()
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				bool M_Inequality<DERIVED, HANDLE, HANDLE_INFO>::operator<(DerivedType& rhs)
				{
					return OnRequestLess(rhs);
				}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				bool M_Inequality<DERIVED, HANDLE, HANDLE_INFO>::operator>(DerivedType& rhs)
				{
					return OnRequestGreater(rhs);
				}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				bool M_Inequality<DERIVED, HANDLE, HANDLE_INFO>::operator<=(DerivedType& rhs)
				{
					return OnRequestEqual(rhs) ? true : OnRequestLess(rhs);
				}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				bool M_Inequality<DERIVED, HANDLE, HANDLE_INFO>::operator>=(DerivedType& rhs)
				{
					return OnRequestEqual(rhs) ? true : OnRequestGreater(rhs);
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_INEQUALITY_H_