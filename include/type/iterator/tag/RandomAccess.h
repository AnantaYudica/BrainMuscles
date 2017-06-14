#ifndef TYPE_ITERATOR_TAG_RANDOMACCESS_H_
#define TYPE_ITERATOR_TAG_RANDOMACCESS_H_

#include "type\iterator\handle\Info.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace tag
			{
				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO = BrainMuscles::type::iterator::handle::Info<HANDLE>>
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
				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				class RandomAccess :
					public BrainMuscles::type::iterator::Tag,
					public std::iterator<std::random_access_iterator_tag, typename DERIVED_INFO::Type>,
					public BrainMuscles::type::iterator::member::M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO>,
					public BrainMuscles::type::iterator::member::M_Assignment<HANDLE, DERIVED_INFO, HANDLE_INFO>,
					public BrainMuscles::type::iterator::member::M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO>,
					public BrainMuscles::type::iterator::member::M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO>,
					public BrainMuscles::type::iterator::member::M_Equality<HANDLE, DERIVED_INFO, HANDLE_INFO>,
					public BrainMuscles::type::iterator::member::M_Inequality<HANDLE, DERIVED_INFO, HANDLE_INFO>,
					public BrainMuscles::type::iterator::member::M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO>,
					public BrainMuscles::type::iterator::member::M_Offset<HANDLE, DERIVED_INFO, HANDLE_INFO>
				{
				public:
					typedef BrainMuscles::type::iterator::tag::RandomAccess<HANDLE, DERIVED_INFO, HANDLE_INFO> RandomAccessType;
					typedef typename DERIVED_INFO::DerivedType DerivedType;
					typedef typename DERIVED_INFO::Type Type;
					typedef typename DERIVED_INFO::ReferenceType ReferenceType;
					typedef typename DERIVED_INFO::PointerType PointerType;

					typedef BrainMuscles::type::iterator::Tag TagType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO> BaseType;
					typedef std::iterator<std::random_access_iterator_tag, Type> BaseIteratorType;
					typedef BrainMuscles::type::iterator::member::M_Arithmetic<HANDLE, DERIVED_INFO, HANDLE_INFO> ArithmeticType;
					typedef BrainMuscles::type::iterator::member::M_Assignment<HANDLE, DERIVED_INFO, HANDLE_INFO> AssignmentType;
					typedef BrainMuscles::type::iterator::member::M_Decrement<HANDLE, DERIVED_INFO, HANDLE_INFO> DecrementType;
					typedef BrainMuscles::type::iterator::member::M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO> IncrementType;
					typedef BrainMuscles::type::iterator::member::M_Equality<HANDLE, DERIVED_INFO, HANDLE_INFO> EqualityType;
					typedef BrainMuscles::type::iterator::member::M_Inequality<HANDLE, DERIVED_INFO, HANDLE_INFO> InequalityType;
					typedef BrainMuscles::type::iterator::member::M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO> LeftValueType;
					typedef BrainMuscles::type::iterator::member::M_Offset<HANDLE, DERIVED_INFO, HANDLE_INFO> OffsetType;


					typedef HANDLE HandleType;
					typedef HANDLE * PointerHandle;
				protected:
					virtual DerivedType* ThisDerived() = 0;

					virtual DerivedType& OnRequestAddition(const DifferenceType& n) = 0;
					virtual DerivedType& OnRequestSubtraction(const DifferenceType& n) = 0;
					virtual DifferenceType OnRequestSubtraction(const DerivedType& iterator) = 0;
					virtual void OnRequestDecrement(HandleType& handle) = 0;
					virtual void OnRequestIncrement(HandleType& handle) = 0;
					virtual bool OnRequestEqual(DerivedType& rhs) = 0;
					virtual bool OnRequestLess(DerivedType& rhs) = 0;
					virtual bool OnRequestGreater(DerivedType& rhs) = 0;
					virtual ReferenceType OnRequestReference() = 0;
					virtual PointerType OnRequestPointer() = 0;
					virtual ReferenceType OnRequestAt(const size_t& index) = 0;
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

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				RandomAccess<HANDLE, DERIVED_INFO, HANDLE_INFO>::RandomAccess() :
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

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				RandomAccess<HANDLE, DERIVED_INFO, HANDLE_INFO>::RandomAccess(const HandleType& handle) :
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

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				RandomAccess<HANDLE, DERIVED_INFO, HANDLE_INFO>::RandomAccess(const BaseIteratorType& iterator) :
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

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				RandomAccess<HANDLE, DERIVED_INFO, HANDLE_INFO>::RandomAccess(const DerivedType& derived) :
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

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				template<typename... ARGS>
				RandomAccess<HANDLE, DERIVED_INFO, HANDLE_INFO>::RandomAccess(ARGS... args) :
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

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				RandomAccess<HANDLE, DERIVED_INFO, HANDLE_INFO>::~RandomAccess()
				{
					
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_TAG_RANDOMACCESS_H_