#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_ERASE_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_ERASE_H_

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
					class M_Erase;
				}
			}
		}
	}
}

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
					class M_Erase
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type			DefinitionType;
						typedef typename DefinitionType::RandomAccessIteratorType		RandomAccessIteratorType;
						typedef typename DefinitionType::RandomAccessConstIteratorType	RandomAccessConstIteratorType;
					protected:
						M_Erase();
					public:
						virtual ~M_Erase();
					public:
						virtual RandomAccessIteratorType Erase(RandomAccessConstIteratorType position) = 0;
						virtual RandomAccessIteratorType Erase(RandomAccessConstIteratorType first, RandomAccessConstIteratorType last) = 0;
					};

					template<typename DEFINITION_TYPE>
					M_Erase<DEFINITION_TYPE>::M_Erase()
					{}

					template<typename DEFINITION_TYPE>
					M_Erase<DEFINITION_TYPE>::~M_Erase()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_ERASE_H_