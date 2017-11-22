#ifndef TEST_FILE_H_
#define TEST_FILE_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include <cstdio>
#include "type/Singleton.h"

#include "test/file/Info.h"

namespace BrainMuscles
{
	namespace test
	{
		class File :
			public BrainMuscles::type::Singleton<File, File, File&>
		{
			friend class BrainMuscles::type::Singleton<File, File, File&>;
		private:
			FILE* m_fileInfo;
			FILE* m_fileError;
		public:
			static BrainMuscles::test::file::Info& Info;
		private:
			File();
			~File();
		public:
			template<unsigned int N>
			static void SetInfo(char (&file_info)[N]);
			static void SetInfo(FILE * info);
			template<unsigned int N>
			static void SetError(char (&file_error)[N]);
			static void SetError(FILE * error);

		};

		BrainMuscles::test::file::Info& File::Info = BrainMuscles::test::file::Info::GetInstance();

		File::File() :
			m_fileInfo(stdout),
			m_fileError(stderr)
		{}

		File::~File()
		{}

		template<unsigned int N>
		void File::SetInfo(char(&file_info)[N])
		{}

		void File::SetInfo(FILE * info)
		{}

		template<unsigned int N>
		void File::SetError(char (&file_error)[N])
		{}

		void File::SetError(FILE * error)
		{}

	}
}

#endif

#endif //!TEST_FILE_H_