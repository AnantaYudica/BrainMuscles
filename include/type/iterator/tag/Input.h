#ifndef TYPE_ITERATOR_TAG_INPUT_H_
#define TYPE_ITERATOR_TAG_INPUT_H_

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
				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				class Input :
					public BrainMuscles::type::iterator::Tag,
					public std::iterator<std::input_iterator_tag, typename DERIVED_INFO::Type>,

					public BrainMuscles::type::iterator::member::M_Equality<HANDLE, DERIVED_INFO, HANDLE_INFO>,
					public BrainMuscles::type::iterator::member::M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO>,
					public BrainMuscles::type::iterator::member::M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO>
				{
				public:
					typedef BrainMuscles::type::iterator::tag::Input<HANDLE, DERIVED_INFO, HANDLE_INFO> InputType;
					typedef typename DERIVED_INFO::DerivedType DerivedType;
					typedef typename DERIVED_INFO::Type Type;
					typedef typename DERIVED_INFO::ReferenceType ReferenceType;
					typedef typename DERIVED_INFO::PointerType PointerType;

					typedef BrainMuscles::type::iterator::Tag TagType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO> BaseType;
					typedef std::iterator<std::input_iterator_tag, Type> BaseIteratorType;

					typedef BrainMuscles::type::iterator::member::M_Increment<HANDLE, DERIVED_INFO, HANDLE_INFO> IncrementType;
					typedef BrainMuscles::type::iterator::member::M_Equality<HANDLE, DERIVED_INFO, HANDLE_INFO> EqualityType;
					typedef BrainMuscles::type::iterator::member::M_LeftValue<HANDLE, DERIVED_INFO, HANDLE_INFO> LeftValueType;

					typedef HANDLE HandleType;
					typedef HANDLE * PointerHandle;
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
					virtual DerivedType* ThisDerived() = 0;

					virtual void OnRequestIncrement(HandleType& handle) = 0;
					virtual bool OnRequestEqual(DerivedType& rhs) = 0;
					virtual ReferenceType OnRequestReference() = 0;
					virtual PointerType OnRequestPointer() = 0;
				};

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				Input<HANDLE, DERIVED_INFO, HANDLE_INFO>::Input() :
					TagType(BrainMuscles::type::iterator::tag::input),
					BaseType(),
					IncrementType(),
					EqualityType(),
					LeftValueType()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				Input<HANDLE, DERIVED_INFO, HANDLE_INFO>::Input(const HandleType& handle) :
					TagType(BrainMuscles::type::iterator::tag::input),
					BaseType(handle),
					IncrementType(handle),
					EqualityType(handle),
					LeftValueType(handle)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				Input<HANDLE, DERIVED_INFO, HANDLE_INFO>::Input(const BaseIteratorType& iterator) :
					TagType(BrainMuscles::type::iterator::tag::input),
					BaseType(iterator),
					IncrementType(iterator),
					EqualityType(iterator),
					LeftValueType(iterator)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				Input<HANDLE, DERIVED_INFO, HANDLE_INFO>::Input(const DerivedType& derived) :
					TagType(BrainMuscles::type::iterator::tag::input),
					BaseType(derived),
					IncrementType(derived),
					EqualityType(derived),
					LeftValueType(derived)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				template<typename... ARGS>
				Input<HANDLE, DERIVED_INFO, HANDLE_INFO>::Input(ARGS... args) :
					TagType(tag::Type::random_access),
					BaseType(args...),
					IncrementType(args...),
					EqualityType(args...),
					LeftValueType(args...)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				Input<HANDLE, DERIVED_INFO, HANDLE_INFO>::~Input()
				{}
			}
		}
	}
}


#endif //!TYPE_ITERATOR_TAG_INPUT_H_