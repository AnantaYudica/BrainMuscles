#ifndef TYPE_TRAIT_SINGLETON_H
#define TYPE_TRAIT_SINGLETON_H

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template <typename TYPE, typename INSTANCE_TYPE = TYPE *>
			class Singleton;
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template <typename TYPE, typename INSTANCE_TYPE>
			class Singleton
			{
			private:
				Singleton();
			};

			template <typename TYPE>
			class Singleton<TYPE, TYPE&>
			{
			private:
				Singleton();
			};
		}
	}
}

#endif //!TYPE_TRAIT_SINGLETON_H
