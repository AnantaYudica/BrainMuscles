#ifndef TEST_TEST_INFO_H_
#define TEST_TEST_INFO_H_

namespace BrainMuscles
{
	namespace test
	{
		namespace test
		{
			template<size_t SIZE, size_t BEGIN_RELATIVE, size_t BEGIN_FILENAME, size_t BEGIN_EXT>
			class Info;
		}
	}
}

#include "type\constant\String.h"
#include "test\test\info\Base.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace test
		{
			template<size_t SIZE, size_t BEGIN_RELATIVE, size_t BEGIN_FILENAME, size_t BEGIN_EXTENSION>
			class Info :
				public info::Base
			{
			private:

				static constexpr size_t ms_sizeFilename = SIZE - BEGIN_FILENAME;
				static constexpr size_t ms_sizeAbsolutePath = SIZE - ms_sizeFilename;
				static constexpr size_t ms_sizeRelativePath = ms_sizeAbsolutePath - BEGIN_RELATIVE;
				static constexpr size_t ms_sizeExtension = SIZE - BEGIN_EXTENSION;
				static constexpr size_t ms_sizeName = ms_sizeFilename - ms_sizeExtension;

				char m_absolutePath[ms_sizeAbsolutePath + 1];
				char m_relativePath[ms_sizeRelativePath + 1];
				char m_filename[ms_sizeFilename + 1];
				char m_name[ms_sizeName + 1];
				char m_extension[ms_sizeExtension + 1];
				const size_t m_line;
			public:
				template<size_t N>
				Info(const char(&str_file)[N], const size_t line);
				const char * AbsolutePath() const;
				const char * RelativePath() const;
				const char * Filename() const;
				const char * Name() const;
				const char * Extension() const;
				const size_t Line() const;
			};

			template<size_t SIZE, size_t BEGIN_RELATIVE, size_t BEGIN_FILENAME, size_t BEGIN_EXT>
			template<size_t N>
			Info<SIZE, BEGIN_RELATIVE, BEGIN_FILENAME, BEGIN_EXT>::Info(const char(&str_file)[N], const size_t line) :
				info::Base(),
				m_line(line)
			{
				memcpy(m_absolutePath, str_file, ms_sizeAbsolutePath);
				m_absolutePath[ms_sizeAbsolutePath] = 0;
				memcpy(m_relativePath, str_file + BEGIN_RELATIVE, ms_sizeRelativePath);
				m_relativePath[ms_sizeRelativePath] = 0;
				memcpy(m_filename, str_file + BEGIN_FILENAME, ms_sizeFilename);
				m_filename[ms_sizeFilename] = 0;
				memcpy(m_name, str_file + BEGIN_FILENAME, ms_sizeName);
				m_name[ms_sizeName] = 0;
				memcpy(m_extension, str_file + BEGIN_EXT, ms_sizeExtension);
				m_extension[ms_sizeExtension] = 0;
			}

			template<size_t SIZE, size_t BEGIN_RELATIVE, size_t BEGIN_FILENAME, size_t BEGIN_EXTENSION>
			const char * Info<SIZE, BEGIN_RELATIVE, BEGIN_FILENAME, BEGIN_EXTENSION>::AbsolutePath() const
			{
				return m_absolutePath;
			}

			template<size_t SIZE, size_t BEGIN_RELATIVE, size_t BEGIN_FILENAME, size_t BEGIN_EXTENSION>
			const char * Info<SIZE, BEGIN_RELATIVE, BEGIN_FILENAME, BEGIN_EXTENSION>::RelativePath() const
			{
				return m_relativePath;
			}

			template<size_t SIZE, size_t BEGIN_RELATIVE, size_t BEGIN_FILENAME, size_t BEGIN_EXTENSION>
			const char * Info<SIZE, BEGIN_RELATIVE, BEGIN_FILENAME, BEGIN_EXTENSION>::Filename() const
			{
				return m_filename;
			}

			template<size_t SIZE, size_t BEGIN_RELATIVE, size_t BEGIN_FILENAME, size_t BEGIN_EXTENSION>
			const char * Info<SIZE, BEGIN_RELATIVE, BEGIN_FILENAME, BEGIN_EXTENSION>::Name() const
			{
				return m_name;
			}

			template<size_t SIZE, size_t BEGIN_RELATIVE, size_t BEGIN_FILENAME, size_t BEGIN_EXTENSION>
			const char * Info<SIZE, BEGIN_RELATIVE, BEGIN_FILENAME, BEGIN_EXTENSION>::Extension() const
			{
				return m_extension;
			}

			template<size_t SIZE, size_t BEGIN_RELATIVE, size_t BEGIN_FILENAME, size_t BEGIN_EXTENSION>
			const size_t Info<SIZE, BEGIN_RELATIVE, BEGIN_FILENAME, BEGIN_EXTENSION>::Line() const
			{
				return m_line;
			}
		}
	}
}


#endif // TEST_TEST_INFO_H_
