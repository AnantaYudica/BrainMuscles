#ifndef TEST_FILE_INFO_H_
#define TEST_FILE_INFO_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)
#include <cstdio>
#include "type\Singleton.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace file
		{
			class Info :
				public BrainMuscles::type::Singleton<Info, Info, Info&>
			{
				friend class BrainMuscles::type::Singleton<Info, Info, Info&>;
			private:
				FILE** m_fileInfo;
			private:
				Info(FILE** file_info);
			};

			Info::Info(FILE** file_info) :
				m_fileInfo(file_info)
			{}
		}
	}
}

#endif

#endif //!TEST_FILE_INFO_H_