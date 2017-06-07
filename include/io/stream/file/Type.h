#ifndef IO_STREAM_FILE_TYPE_H_
#define IO_STREAM_FILE_TYPE_H_

#include <fstream>

namespace BrainMuscles
{
	namespace io
	{
		namespace stream
		{
			namespace file
			{
				template <typename TYPE>
				class Type;

				typedef std::ifstream Input;
				typedef std::ofstream Output;
				typedef std::fstream InOutput;
			}

		}
	}
	
}


namespace BrainMuscles
{
	namespace io
	{
		namespace stream
		{
			namespace file
			{
				template <typename TYPE>
				class Type
				{
				private:
					Type() = delete;
				};

				template <>
				class Type<Input>
				{
				private:
					Type() = delete;
				public:
					typedef Input StreamType;
					typedef Input * PointerStreamType;
				};

				template <>
				class Type<Output>
				{
				private:
					Type() = delete;
				public:
					typedef Output StreamType;
					typedef Output * PointerStreamType;
				};

				template <>
				class Type<InOutput>
				{
				private:
					Type() = delete;
				public:
					typedef InOutput StreamType;
					typedef InOutput * PointerStreamType;
				};

			} 
		}
	}
} 

#endif // !IO_STREAM_FILE_TYPE_H_
