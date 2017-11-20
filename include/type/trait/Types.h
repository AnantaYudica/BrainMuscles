#ifndef TYPE_TRAIT_TYPES_H
#define TYPE_TRAIT_TYPES_H

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template<typename... TYPES>
			class Types;
		}
	}

}

#include "type/trait/types/Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template<typename... TYPES>
			class Types :
				public types::Base<TYPES...>
			{
			public:
				typedef types::Base<TYPES...> Base;
			public:
				Types(TYPES... values);
			};

			template<>
			class Types<>
			{
			public:
				typedef void Base;
			private:
			public:
				Types();
			};

			template<typename... TYPES>
			Types<TYPES...>::Types(TYPES... values) :
				types::Base<TYPES...>(values...)
			{}

			Types<>::Types()
			{}

		}
	}
}


#endif //! TYPE_TRAIT_TYPES_H