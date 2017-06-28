#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_INSERT_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_INSERT_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace modifier
				{
					template<typename DEFINITION_TYPE>
					class M_Insert;
				}
			}
		}
	}
}

#include <initializer_list>
#include "type\container\element\IsType.h"
#include "type\container\definition\IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace modifier
				{
					template<typename DEFINITION_TYPE>
					class M_Insert
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type			DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type									ElementType;
						typedef typename DefinitionType::RandomAccessIteratorType		RandomAccessIteratorType;
						typedef typename DefinitionType::RandomAccessConstIteratorType	RandomAccessConstIteratorType;
						typedef typename DefinitionType::InputIteratorType				InputIteratorType;
						typedef typename ElementType::Type								Type;
						typedef typename ElementType::RightValueReferenceType			RightValueReferenceType;
						typedef typename ElementType::ConstLeftValueReferenceType		ConstLeftValueReferenceType;
						typedef typename ElementType::SizeType							SizeType;
					protected:
						M_Insert();
					public:
						virtual ~M_Insert();
						virtual RandomAccessIteratorType Insert(RandomAccessConstIteratorType position, ConstLeftValueReferenceType val) = 0;
						virtual RandomAccessIteratorType Insert(RandomAccessConstIteratorType position, SizeType n, ConstLeftValueReferenceType val) = 0;
						virtual RandomAccessIteratorType Insert(RandomAccessConstIteratorType position, InputIteratorType first, InputIteratorType last) = 0;
						virtual RandomAccessIteratorType Insert(RandomAccessConstIteratorType position, RightValueReferenceType val) = 0;
						virtual RandomAccessIteratorType Insert(RandomAccessConstIteratorType position, std::initializer_list<Type> il) = 0;
					};

					template<typename DEFINITION_TYPE>
					M_Insert<DEFINITION_TYPE>::M_Insert()
					{}

					template<typename DEFINITION_TYPE>
					M_Insert<DEFINITION_TYPE>::~M_Insert()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_INSERT_H_