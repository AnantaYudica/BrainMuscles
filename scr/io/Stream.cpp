#include "io\Stream.h"
#include "test\Test.h"

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