#ifndef IO_STREAM_H_
#define IO_STREAM_H_



namespace BrainMuscles
{
	namespace io
	{
		class Stream;

	}
}

#include <iostream>
#include "test\Test.h"

namespace BrainMuscles
{
	namespace io
	{
		class Stream
		{
		protected:
			virtual void Initial() = 0;
			virtual void Final() = 0;
			Stream();
		public:
			virtual ~Stream();

		};

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


#endif // !IO_STREAM_H_
