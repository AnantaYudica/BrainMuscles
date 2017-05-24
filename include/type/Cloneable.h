#ifndef TYPE_CLONEABLE_H_
#define TYPE_CLONEABLE_H_

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
			virtual Cloneable& operator=(const Cloneable& rhs) = 0;
		};

		Cloneable::Cloneable()
		{}

		Cloneable::~Cloneable()
		{}
	}
}

#endif //!TYPE_CLONEABLE_H_