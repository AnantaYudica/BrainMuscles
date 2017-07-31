#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_HELPER_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_HELPER_H_

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
						namespace helper
						{
							template<typename SIZE_TYPE, typename INPUT_TYPE, typename ARRAY_TYPE>
							SIZE_TYPE CastUnsignedIntegerToArrayOfChar(const INPUT_TYPE& in, ARRAY_TYPE& out)
							{
								static_assert(std::is_unsigned<INPUT_TYPE>::value, "INPUT_TYPE required unsigned");
								SIZE_TYPE index = 0;
								for (INPUT_TYPE val = in; val > 0; val /= 10, index++)
								{
									out[index] = 48 + (val % 10);
								}
								return index;
							}

							template<typename SIZE_TYPE, typename ARRAY_TYPE, typename FORMAT_STRING>
							void CopyToFormat(ARRAY_TYPE& value, const SIZE_TYPE& size_value, FORMAT_STRING& format_string, SIZE_TYPE& index)
							{
								for (SIZE_TYPE i = 0; i < size_value; ++i)
								{
									format_string[index++] = value[i];
								}
							}
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_FORMAT_HELPER_H_