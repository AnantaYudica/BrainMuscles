#include "io\Stream.h"
#include "Test.h"

namespace BrainMuscles
{
	namespace io
	{
		Stream::Stream()
		{
			Debug("Stream Constructor");
		}

		Stream::~Stream()
		{
			Debug("Stream Destructor");
		}
	}
}