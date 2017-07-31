#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_LENGTH_TYPE_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_LENGTH_TYPE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <type_traits>

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace log
			{
				namespace output
				{
					namespace format
					{
						namespace length
						{
							template<typename TYPE>
							class Type final
							{
								Type() = delete;
							public:
								static constexpr bool IsDefault = 
									std::is_same<TYPE, int>::value ||
									std::is_same<TYPE, unsigned int>::value ||
									std::is_same<TYPE, float>::value ||
									std::is_same<TYPE, double>::value ||
									std::is_same<TYPE, char*>::value ||
									std::is_same<TYPE, void*>::value;
								static constexpr bool IsChar =
									std::is_same<TYPE, char>::value ||
									std::is_same<TYPE, unsigned char>::value;
								static constexpr bool IsShort = 
									std::is_same<TYPE, short>::value ||
									std::is_same<TYPE, unsigned short>::value;
								static constexpr bool IsLong =
									std::is_same<TYPE, long>::value ||
									std::is_same<TYPE, unsigned long>::value;
								static constexpr bool IsLongLong =
									std::is_same<TYPE, long long>::value ||
									std::is_same<TYPE, unsigned long long>::value;
								static constexpr bool IsLongDouble =
									std::is_same<TYPE, long double>::value;
							};
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_FORMAT_LENGTH_TYPE_H_