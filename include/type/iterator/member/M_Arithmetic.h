#ifndef TYPE_ITERATOR_MEMBER_M_ARITHMETIC_H_
#define TYPE_ITERATOR_MEMBER_M_ARITHMETIC_H_

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
				class M_Arithmetic :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef DERIVED DerivedType;
					typedef HANDLE HandleType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
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
					virtual DERIVED* ThisDerived() = 0;

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

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::M_Arithmetic() :
					BaseType(0)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::M_Arithmetic(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::M_Arithmetic(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::M_Arithmetic(ARGS... args) :
					BaseType(args...)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::~M_Arithmetic()
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				typename M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::DerivedType
				M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::operator+(const DifferenceType& n)
				{
					DerivedType copy(*ThisDerived());
					copy += n;
					return copy;
				}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				typename M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::DerivedType
				M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::operator-(const DifferenceType& n)
				{
					DerivedType copy(*ThisDerived());
					copy -= n;
					return copy;
				}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				typename M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::DifferenceType
				M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::operator-(const DerivedType& iterator)
				{
					return OnRequestSubtraction(iterator);
				}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				typename M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::DerivedType&
				M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::operator+=(const DifferenceType& n)
				{
					return OnRequestAddition(n);
				}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				typename M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::DerivedType&
				M_Arithmetic<DERIVED, HANDLE, HANDLE_INFO>::operator-=(const DifferenceType& n)
				{
					return OnRequestSubtraction(n);
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_ARITHMETIC_H_