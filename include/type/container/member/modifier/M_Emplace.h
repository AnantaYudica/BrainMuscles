#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACE_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACE_H_

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
					class M_Emplace;
				}
			}
		}
	}
}

#include "type\trait\Types.h"

#include <vector>

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
					class M_Emplace
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type			DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type									ElementType;
						typedef typename ElementType::Type								Type;
					public:
						typedef typename DefinitionType::RandomAccessConstIteratorType	RandomAccessConstIteratorType;
						typedef typename DefinitionType::RandomAccessIteratorType		RandomAccessIteratorType;
					protected:
						M_Emplace();
					public:
						virtual ~M_Emplace();
					protected:
						virtual RandomAccessIteratorType DerivedEmplace(RandomAccessConstIteratorType constIterator, Type& constructor) = 0;
					public:
						template<typename... ARGS>
						RandomAccessIteratorType Emplace(RandomAccessConstIteratorType constIterator, ARGS... args);
					};

					template<typename DEFINITION_TYPE>
					M_Emplace<DEFINITION_TYPE>::M_Emplace()
					{}

					template<typename DEFINITION_TYPE>
					M_Emplace<DEFINITION_TYPE>::~M_Emplace()
					{}

					template<typename DEFINITION_TYPE>
					template<typename... ARGS>
					typename M_Emplace<DEFINITION_TYPE>::RandomAccessIteratorType
					M_Emplace<DEFINITION_TYPE>::Emplace(RandomAccessConstIteratorType constIterator, ARGS... args)
					{
						Type constructor(args...);
						return DerivedEmplace(constIterator, constructor);
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACE_H_