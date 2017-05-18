#ifndef TYPE_ITERATOR_TAG_RANDOMACCESS_H_
#define TYPE_ITERATOR_TAG_RANDOMACCESS_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace tag
			{
				template<typename TYPE, typename HANDLE, typename DERIVED>
				class RandomAccess;
			}
		}
	}
}

#include "type\iterator\Tag.h"
#include "type\iterator\Base.h"
#include "type\iterator\member\M_Arithmetic.h"
#include "type\iterator\member\M_Assignment.h"
#include "type\iterator\member\M_Decrement.h"
#include "type\iterator\member\M_Equality.h"
#include "type\iterator\member\M_Increment.h"
#include "type\iterator\member\M_Inequality.h"
#include "type\iterator\member\M_Offset.h"
#include "type\iterator\member\M_LeftValue.h"
#include <iterator>

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace tag
			{
				template<typename TYPE, typename HANDLE, typename DERIVED>
				class RandomAccess :
					public BrainMuscles::type::iterator::Tag,
					public std::iterator<std::random_access_iterator_tag, TYPE>,
					public BrainMuscles::type::iterator::member::M_Arithmetic<HANDLE, DERIVED>,
					public BrainMuscles::type::iterator::member::M_Assignment<HANDLE, DERIVED>,
					public BrainMuscles::type::iterator::member::M_Decrement<HANDLE, DERIVED>,
					public BrainMuscles::type::iterator::member::M_Increment<HANDLE, DERIVED>,
					public BrainMuscles::type::iterator::member::M_Equality<HANDLE, DERIVED>,
					public BrainMuscles::type::iterator::member::M_Inequality<HANDLE, DERIVED>,
					public BrainMuscles::type::iterator::member::M_LeftValue<TYPE, HANDLE, DERIVED>,
					public BrainMuscles::type::iterator::member::M_Offset<TYPE, HANDLE, DERIVED>
				{
				public:
					typedef BrainMuscles::type::iterator::tag::RandomAccess<TYPE, HANDLE, DERIVED> RandomAccessType;
					typedef DERIVED DerivedType;

					typedef type::iterator::Tag TagType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
					typedef std::iterator<std::random_access_iterator_tag, TYPE> BaseIteratorType;
					typedef BrainMuscles::type::iterator::member::M_Arithmetic<HANDLE, DERIVED> ArithmeticType;
					typedef BrainMuscles::type::iterator::member::M_Assignment<HANDLE, DERIVED> AssignmentType;
					typedef BrainMuscles::type::iterator::member::M_Decrement<HANDLE, DERIVED> DecrementType;
					typedef BrainMuscles::type::iterator::member::M_Increment<HANDLE, DERIVED> IncrementType;
					typedef BrainMuscles::type::iterator::member::M_Equality<HANDLE, DERIVED> EqualityType;
					typedef BrainMuscles::type::iterator::member::M_Inequality<HANDLE, DERIVED> InequalityType;
					typedef BrainMuscles::type::iterator::member::M_LeftValue<TYPE, HANDLE, DERIVED> LeftValueType;
					typedef BrainMuscles::type::iterator::member::M_Offset<TYPE, HANDLE, DERIVED> OffsetType;


					typedef HANDLE HandleType;
					typedef HANDLE * PointerHandle;
					typedef TYPE ValueType;
					typedef DERIVED DerivedType;
				protected:
					virtual DERIVED* ThisDerived() = 0;

					virtual DerivedType& OnRequestAddition(const DifferenceType& n) = 0;
					virtual DerivedType& OnRequestSubtraction(const DifferenceType& n) = 0;
					virtual DifferenceType OnRequestSubtraction(const DerivedType& iterator) = 0;
					virtual void OnRequestDecrement(HandleType& handle) = 0;
					virtual void OnRequestIncrement(HandleType& handle) = 0;
					virtual bool OnRequestEqual(DerivedType& rhs) = 0;
					virtual bool OnRequestLess(DerivedType& rhs) = 0;
					virtual bool OnRequestGreater(DerivedType& rhs) = 0;
					virtual ValueType& OnRequestReference() = 0;
					virtual ValueType* OnRequestPointer() = 0;
					virtual ValueType& OnRequestAt(const size_t& index) = 0;
				public:
					RandomAccess();
					RandomAccess(const HandleType& handle);
					RandomAccess(const BaseIteratorType& iterator);
					RandomAccess(const DerivedType& derived);
				protected:
					template<typename... ARGS>
					RandomAccess(ARGS... args);
				public:
					virtual ~RandomAccess();
				};

				template<typename TYPE, typename HANDLE, typename DERIVED>
				RandomAccess<TYPE, HANDLE, DERIVED>::RandomAccess() :
					TagType(tag::Type::random_access),
					BaseType(),
					ArithmeticType(),
					AssignmentType(),
					DecrementType(),
					IncrementType(),
					EqualityType(),
					InequalityType(),
					LeftValueType(),
					OffsetType()
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				RandomAccess<TYPE, HANDLE, DERIVED>::RandomAccess(const HandleType& handle) :
					TagType(tag::Type::random_access),
					BaseType(handle),
					ArithmeticType(handle),
					AssignmentType(handle),
					DecrementType(handle),
					IncrementType(handle),
					EqualityType(handle),
					InequalityType(handle),
					LeftValueType(handle),
					OffsetType(handle)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				RandomAccess<TYPE, HANDLE, DERIVED>::RandomAccess(const BaseIteratorType& iterator) :
					TagType(tag::Type::random_access),
					BaseType(iterator),
					ArithmeticType(iterator),
					AssignmentType(iterator),
					DecrementType(iterator),
					IncrementType(iterator),
					EqualityType(iterator),
					InequalityType(iterator),
					LeftValueType(iterator),
					OffsetType(iterator)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				RandomAccess<TYPE, HANDLE, DERIVED>::RandomAccess(const DerivedType& derived) :
					TagType(tag::Type::random_access),
					BaseType(derived),
					ArithmeticType(derived),
					AssignmentType(derived),
					DecrementType(derived),
					IncrementType(derived),
					EqualityType(derived),
					InequalityType(derived),
					LeftValueType(derived),
					OffsetType(derived)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				template<typename... ARGS>
				RandomAccess<TYPE, HANDLE, DERIVED>::RandomAccess(ARGS... args) :
					TagType(tag::Type::random_access),
					BaseType(args...),
					ArithmeticType(args...),
					AssignmentType(args...),
					DecrementType(args...),
					IncrementType(args...),
					EqualityType(args...),
					InequalityType(args...),
					LeftValueType(args...),
					OffsetType(args...)
				{
				}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				RandomAccess<TYPE, HANDLE, DERIVED>::~RandomAccess()
				{
					
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_TAG_RANDOMACCESS_H_