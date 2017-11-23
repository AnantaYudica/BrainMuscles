#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_HELPER_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_HELPER_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include <limits>
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
							template<typename RETURN_TYPE, typename BASE_TYPE, typename EXPONENT_TYPE>
							constexpr RETURN_TYPE Power(BASE_TYPE base, EXPONENT_TYPE exponent, RETURN_TYPE result = 1)
							{
								return exponent == 0 ? result : Power(base, exponent - 1, result * base);
							}

							template<typename SIZE_TYPE, typename INPUT_TYPE, typename ARRAY_TYPE>
							SIZE_TYPE CastUnsignedIntegerToArrayOfChar(const INPUT_TYPE& in, ARRAY_TYPE& out)
							{
								static_assert(std::is_unsigned<INPUT_TYPE>::value, "INPUT_TYPE required unsigned");
								constexpr SIZE_TYPE maxInputDigit10 = std::numeric_limits<INPUT_TYPE>::digits10;
								constexpr INPUT_TYPE maxInputPower10 = Power<INPUT_TYPE>(10, maxInputDigit10);
								SIZE_TYPE index = 0;
								{
									INPUT_TYPE value = in;
									INPUT_TYPE power10 = maxInputPower10;
									SIZE_TYPE i = 0;
									while (i <= maxInputDigit10)
									{
										if (index != 0 && value == 0)
										{
											out[index++] = 48;
										}
										else if (value == 0)
										{
											break;
										}
										else
										{
											INPUT_TYPE valueMod10 = value % power10;
											if (valueMod10 != value)
											{
												INPUT_TYPE number = value - valueMod10;
												value -= number;
												number /= power10;
												out[index++] = 48 + (number % 10);
											}
											else if (index != 0)
											{
												out[index++] = 48;
											}
											power10 /= 10;
										}
										++i;
									}
								}
								if (index == 0) out[index++] = 48;
								return index;
							}

							template<typename SIZE_TYPE, typename ARRAY_TYPE, typename FORMAT_STRING>
							void CopyToFormat(ARRAY_TYPE& value, const SIZE_TYPE& size_value, FORMAT_STRING& format_string, SIZE_TYPE& index)
							{
								for (SIZE_TYPE i = 0; i < size_value; ++i)
								{
									format_string[index++] = value[i];
								}
								format_string[index] = 0;
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