#ifndef TYPE_ITERATOR_TAG_INPUT_H_
#define TYPE_ITERATOR_TAG_INPUT_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace tag
			{
				template<typename TYPE, typename HANDLE, typename DERIVED>
				class Input;
			}
		}
	}
}

#include <iterator>
#include "type\iterator\Tag.h"
#include "type\iterator\Base.h"

#include "type\iterator\member\M_Equality.h"
#include "type\iterator\member\M_Increment.h"
#include "type\iterator\member\M_LeftValue.h"


namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace tag
			{
				template<typename TYPE, typename HANDLE, typename DERIVED>
				class Input :
					public BrainMuscles::type::iterator::Tag,
					public std::iterator<std::input_iterator_tag, TYPE>,

					public BrainMuscles::type::iterator::member::M_Equality<HANDLE, DERIVED>,
					public BrainMuscles::type::iterator::member::M_Increment<HANDLE, DERIVED>,
					public BrainMuscles::type::iterator::member::M_LeftValue<TYPE, HANDLE, DERIVED>
				{
				public:
					typedef BrainMuscles::type::iterator::tag::Input<TYPE, HANDLE, DERIVED> InputType;
					typedef DERIVED DerivedType;

					typedef type::iterator::Tag TagType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
					typedef std::iterator<std::input_iterator_tag, TYPE> BaseIteratorType;

					typedef BrainMuscles::type::iterator::member::M_Increment<HANDLE, DERIVED> IncrementType;
					typedef BrainMuscles::type::iterator::member::M_Equality<HANDLE, DERIVED> EqualityType;
					typedef BrainMuscles::type::iterator::member::M_LeftValue<TYPE, HANDLE, DERIVED> LeftValueType;

					typedef HANDLE HandleType;
					typedef HANDLE * PointerHandle;
					typedef TYPE ValueType;
					typedef DERIVED DerivedType;
				public:
					Input();
					Input(const HandleType& handle);
					Input(const BaseIteratorType& iterator);
					Input(const DerivedType& derived);
				protected:
					template<typename... ARGS>
					Input(ARGS... args);
				public:
					virtual ~Input();
				protected:
					virtual DERIVED* ThisDerived() = 0;

					virtual void OnRequestIncrement(HandleType& handle) = 0;
					virtual bool OnRequestEqual(DerivedType& rhs) = 0;
					virtual ValueType& OnRequestReference() = 0;
					virtual ValueType* OnRequestPointer() = 0;
				};

				template<typename TYPE, typename HANDLE, typename DERIVED>
				Input<TYPE, HANDLE, DERIVED>::Input() :
					TagType(BrainMuscles::type::iterator::tag::input),
					BaseType(),
					IncrementType(),
					EqualityType(),
					LeftValueType()
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				Input<TYPE, HANDLE, DERIVED>::Input(const HandleType& handle) :
					TagType(BrainMuscles::type::iterator::tag::input),
					BaseType(handle),
					IncrementType(handle),
					EqualityType(handle),
					LeftValueType(handle)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				Input<TYPE, HANDLE, DERIVED>::Input(const BaseIteratorType& iterator) :
					TagType(BrainMuscles::type::iterator::tag::input),
					BaseType(iterator),
					IncrementType(iterator),
					EqualityType(iterator),
					LeftValueType(iterator)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				Input<TYPE, HANDLE, DERIVED>::Input(const DerivedType& derived) :
					TagType(BrainMuscles::type::iterator::tag::input),
					BaseType(derived),
					IncrementType(derived),
					EqualityType(derived),
					LeftValueType(derived)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				template<typename... ARGS>
				Input<TYPE, HANDLE, DERIVED>::Input(ARGS... args) :
					TagType(tag::Type::random_access),
					BaseType(args...),
					IncrementType(args...),
					EqualityType(args...),
					LeftValueType(args...)
				{}

				template<typename TYPE, typename HANDLE, typename DERIVED>
				Input<TYPE, HANDLE, DERIVED>::~Input()
				{}
			}
		}
	}
}


#endif //!TYPE_ITERATOR_TAG_INPUT_H_