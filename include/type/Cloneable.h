#ifndef TYPE_CLONEABLE_H_
#define TYPE_CLONEABLE_H_

#include <type_traits>

namespace BrainMuscles
{
	namespace type
	{
		class Cloneable
		{
		protected:
			Cloneable();
		public:
			virtual ~Cloneable();
			virtual Cloneable * Clone() = 0;
			virtual Cloneable& operator=(Cloneable& rhs) = 0;
		public:
			template<typename DERIVE, typename... ARGS>
			Cloneable * Constructor(ARGS... args);
		};

		Cloneable::Cloneable()
		{}

		Cloneable::~Cloneable()
		{}

		template<typename DERIVE, typename... ARGS>
		Cloneable * Cloneable::Constructor(ARGS... args)
		{
			return new DERIVE(args...);
		}
	}
}

#endif //!TYPE_CLONEABLE_H_