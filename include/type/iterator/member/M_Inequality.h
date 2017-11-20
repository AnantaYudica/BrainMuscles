#ifndef TYPE_ITERATOR_MEMBER_M_INEQUALITY_H_
#define TYPE_ITERATOR_MEMBER_M_INEQUALITY_H_

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
				class M_Inequality :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO>
				{
					static_assert(BrainMuscles::type::iterator::derived::info::IsType<DERIVED_INFO>::Value, "[DERIVED_INFO Requires class derived::Info<Definition>");
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef HANDLE HandleType;
					typedef typename DERIVED_INFO::DerivedType DerivedType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO> BaseType;
				protected:
					M_Inequality();
					M_Inequality(const DerivedType& derived);
					M_Inequality(const HandleType& handle);
					template<typename... ARGS>
					M_Inequality(ARGS... args);
				public:
					virtual ~M_Inequality();
				protected:
					virtual DerivedType* ThisDerived() = 0;

					virtual bool OnRequestEqual(DerivedType& rhs) = 0;
					virtual bool OnRequestLess(DerivedType& rhs) = 0;
					virtual bool OnRequestGreater(DerivedType& rhs) = 0;
				public:
					bool operator<(DerivedType& rhs);
					bool operator>(DerivedType& rhs);

					bool operator<=(DerivedType& rhs);
					bool operator>=(DerivedType& rhs);
				};

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Inequality<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Inequality() :
					BaseType()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Inequality<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Inequality(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Inequality<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Inequality(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Inequality<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Inequality(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Inequality<HANDLE, DERIVED_INFO, HANDLE_INFO>::~M_Inequality()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				bool M_Inequality<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator<(DerivedType& rhs)
				{
					return OnRequestLess(rhs);
				}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				bool M_Inequality<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator>(DerivedType& rhs)
				{
					return OnRequestGreater(rhs);
				}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				bool M_Inequality<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator<=(DerivedType& rhs)
				{
					return OnRequestEqual(rhs) ? true : OnRequestLess(rhs);
				}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				bool M_Inequality<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator>=(DerivedType& rhs)
				{
					return OnRequestEqual(rhs) ? true : OnRequestGreater(rhs);
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_INEQUALITY_H_