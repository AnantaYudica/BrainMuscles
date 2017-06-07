#ifndef IO_STREAM_MANAGEMENT_H_
#define IO_STREAM_MANAGEMENT_H_

#include "type\Singleton.h"
#include "type\Journal.h"
#include "io\Stream.h"
#include <vector>

namespace BrainMuscles
{
	namespace io
	{
		namespace stream
		{
			class Management :
				public type::Singleton<Management>
				//public type::Journal<Stream*>
			{
			private:
				friend class type::Singleton<Management>;
			private:
				Management();
			public:
				~Management();
			};

			Management::Management()
			{}

			Management::~Management()
			{
			}
		}
	}
}


#endif // !IO_STREAM_MANAGEMENT_H_
