#ifndef TYPE_CLONING_H_
#define TYPE_CLONING_H_

namespace BrainMuscles
{
	namespace type
	{
		class Cloning
		{
		protected:
			Cloning();
		public:
			virtual ~Cloning();
			virtual Cloning * Clone() = 0;
			virtual Cloning& operator=(const Cloning& rhs) = 0;
		};

		Cloning::Cloning()
		{}

		Cloning::~Cloning()
		{}
	}
}

#endif //!TYPE_CLONING_H_