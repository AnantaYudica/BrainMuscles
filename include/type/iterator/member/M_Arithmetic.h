#ifndef TYPE_ITERATOR_MEMBER_M_ARITHMETIC_H_
#define TYPE_ITERATOR_MEMBER_M_ARITHMETIC_H_

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
				class M_Arithmetic :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
				public:
					typedef DERIVED DerivedType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
					typedef typename HANDLE::value_type ValueType;
					typedef typename HANDLE::difference_type DifferenceType;
					typedef typename HANDLE::reference ReferenceType;
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

				template<typename HANDLE, typename DERIVED>
				M_Arithmetic<HANDLE, DERIVED>::M_Arithmetic() :
					BaseType(0)
				{}

				template<typename HANDLE, typename DERIVED>
				M_Arithmetic<HANDLE, DERIVED>::M_Arithmetic(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED>
				M_Arithmetic<HANDLE, DERIVED>::M_Arithmetic(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED>
				template<typename... ARGS>
				M_Arithmetic<HANDLE, DERIVED>::M_Arithmetic(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED>
				M_Arithmetic<HANDLE, DERIVED>::~M_Arithmetic()
				{}

				template<typename HANDLE, typename DERIVED>
				typename M_Arithmetic<HANDLE, DERIVED>::DerivedType
				M_Arithmetic<HANDLE, DERIVED>::operator+(const DifferenceType& n)
				{
					DerivedType copy(*ThisDerived());
					copy += n;
					return copy;
				}

				template<typename HANDLE, typename DERIVED>
				typename M_Arithmetic<HANDLE, DERIVED>::DerivedType
				M_Arithmetic<HANDLE, DERIVED>::operator-(const DifferenceType& n)
				{
					DerivedType copy(*ThisDerived());
					copy -= n;
					return copy;
				}

				template<typename HANDLE, typename DERIVED>
				typename M_Arithmetic<HANDLE, DERIVED>::DifferenceType
				M_Arithmetic<HANDLE, DERIVED>::operator-(const DerivedType& iterator)
				{
					return OnRequestSubtraction(iterator);
				}

				template<typename HANDLE, typename DERIVED>
				typename M_Arithmetic<HANDLE, DERIVED>::DerivedType&
				M_Arithmetic<HANDLE, DERIVED>::operator+=(const DifferenceType& n)
				{
					return OnRequestAddition(n);
				}

				template<typename HANDLE, typename DERIVED>
				typename M_Arithmetic<HANDLE, DERIVED>::DerivedType&
				M_Arithmetic<HANDLE, DERIVED>::operator-=(const DifferenceType& n)
				{
					return OnRequestSubtraction(n);
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_ARITHMETIC_H_