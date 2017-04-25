#ifndef TYPE_TRAIT_AUTOMATIC_DESTROY_FUNCTION_H_
#define TYPE_TRAIT_AUTOMATIC_DESTROY_FUNCTION_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace automatic
			{
				namespace destroy
				{
					template<typename RETURN, typename... ARGS>
					class Function;
				}
			}
		}
	}
}

#include "type\trait\automatic\destroy\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace automatic
			{
				namespace destroy
				{
					template<typename RETURN, typename... ARGS>
					class Function :
						public Base
					{


					};
				}
			}
		}
	}
}

#endif //!TYPE_TRAIT_AUTOMATIC_DESTROY_FUNCTION_H_