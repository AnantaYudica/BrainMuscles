#ifndef IO_STREAM_FILE_H_
#define IO_STREAM_FILE_H_


#include "io/stream/file/Type.h"

namespace BrainMuscles
{
	namespace io
	{
		namespace stream
		{
			template<typename TYPE>
			class File;

			typedef File<file::Type<file::Input>> InputFileStream;

			typedef File<file::Type<file::Output>> OutputFileStream;

			typedef File<file::Type<file::InOutput>> InOutputFileStream;
		}
	}
	
}

#include "io/Stream.h"

namespace BrainMuscles
{
	namespace core
	{
		namespace io
		{
			namespace stream
			{
				template<typename TYPE>
				class File :
					public BrainMuscles::io::Stream
				{
				private:
					typename TYPE::PointerStreamType m_stream;
					void Initial();
					void Final();
				public:
					File();
					File(File<TYPE> * pointer);
					File(const File<TYPE> & object);
					virtual ~File();
					virtual void Open(const char * file);
					virtual void Close();
					const typename TRAIT::Type & GetStream();
				};

				template<typename TYPE>
				void
				File<TYPE>::Initial()
				{
					if (!m_stream)
					{
						m_stream = new typename TYPE::StreamType();
					}
					else
					{
						Final();
						Initial();
					}
					
				}

				template<typename TYPE>
				void
				File<TYPE>::Final()
				{
					if (m_stream)
					{
						if (m_stream->is_open())
						{
							m_stream->close();
						}
						delete m_stream;
						m_stream = 0;
					}
				}

				template<typename TYPE>
				File<TYPE>::File() :
					Stream(),
					m_stream(0)
				{
				}

				template<typename TYPE>
				File<TYPE>::File(File<TYPE> * pointer) :
					Stream(),
					m_stream(pointer->m_stream)
				{
				}
				
				template<typename TYPE>
				File<TYPE>::File(const File<TYPE> & object) :
					Stream(),
					m_stream(object.m_stream)
				{
				}

				template<typename TYPE>
				File<TYPE>::~File()
				{
				}

				template<typename TYPE>
				void
				File<TYPE>::Open(const char * file)
				{
					if (m_stream)
					{
						Final();
					}
					Initial();
					m_stream->open(file);
				}

				template<typename TYPE>
				void 
				File<TYPE>::Close()
				{
					if (m_stream)
					{
						Final();
					}
				}

				template<typename TYPE>
				const typename TRAIT::Type & 
				File<TYPE>::GetStream()
				{
					if (m_stream)
					{
						return *m_stream;
					}
					return TRAIT::Type(0);
				}
			}
		}
	}
}

#endif // !IO_STREAM_FILE_H_
