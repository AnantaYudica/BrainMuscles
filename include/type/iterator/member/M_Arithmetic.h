#ifndef TYPE_ITERATOR_MEMBER_M_ARITHMETIC_H_
#define TYPE_ITERATOR_MEMBER_M_ARITHMETIC_H_

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
				class M_Arithmetic :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO>
				{
					static_assert(BrainMuscles::type::iterator::derived::info::IsType<DERIVED_INFO>::Value, "[DERIVED_INFO Requires class derived::Info<Definition>");
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "[HANDLE_INFO Requires class handle::Info<Definition>");
				public:
					typedef typename DERIVED_INFO::DerivedType DerivedType;
					typedef HANDLE HandleType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO> BaseType;
					typedef typename HANDLE_INFO::ValueType ValueType;
					typedef typename HANDLE_INFO::DifferenceType DifferenceType;
					typedef typename HANDLE_INFO::Reference ReferenceType;
				protected:
					M_Arithmetic();
					M_Arithmetic(const HandleType& handle);
					M_Arithmetic(const DerivedType& derived);
					template<typename... ARGS>
					M_Arithmetic(ARGS... args);
				public:
					virtual ~M_Arithmetic();
				protected:
					virtual DerivedType* ThisDerived() = 0;

					virtual DerivedType& OnRequestAddition(const DifferenceType& n) = 0;
					virtual DerivedType& OnRequestSubtraction(const DifferenceType& n) = 0;
					virtual DifferenceType OnRequestSubtraction(const DerivedType& iterator) = 0;
				public:
					DerivedType operator+(const DifferenceType& n);

					DerivedType operator-(const DifferenceType& n);
					DifferenceType operator-(const DerivedType& iterator);

					DerivedType& operator+=(const DifferenceType& n);

					DerivedType& operator-=(const DifferenceType& n);
				};

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Arithmetic() :
					BaseType(0)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Arithmetic(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Arithmetic(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Arithmetic(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::~M_Arithmetic()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::DerivedType
				M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator+(const DifferenceType& n)
				{
					DerivedType copy(*ThisDerived());
					copy += n;
					return copy;
				}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::DerivedType
				M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator-(const DifferenceType& n)
				{
					DerivedType copy(*ThisDerived());
					copy -= n;
					return copy;
				}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::DifferenceType
				M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator-(const DerivedType& iterator)
				{
					return OnRequestSubtraction(iterator);
				}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::DerivedType&
				M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator+=(const DifferenceType& n)
				{
					return OnRequestAddition(n);
				}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				typename M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::DerivedType&
				M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator-=(const DifferenceType& n)
				{
					return OnRequestSubtraction(n);
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_ARITHMETIC_H_