#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_CONSTANT_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_CONSTANT_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include <limits>
#include <cstdint>

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
						class Constant final
						{
						public:
							Constant() = delete;
						public:
							typedef unsigned short	SizeType;
							typedef std::uint16_t	InputType;
							typedef InputType		PrecisionInputType;
							typedef InputType		WidthInputType;
							
							static constexpr char BeginCharacter = '%';
							static constexpr char BeginPrecisionCharacter = '.';

							static constexpr SizeType SizeBeginCharacter = 1;
							static constexpr SizeType SizeBeginPercisionCharacter = 1;
							static constexpr SizeType SizeMaxFlag = 1;
							static constexpr SizeType SizeMaxLength = 2;
							static constexpr SizeType SizeMaxSpecifier = 1;
							static constexpr SizeType SizeMaxWidth = std::numeric_limits<WidthInputType>::digits10 + 1;
							static constexpr SizeType SizeMaxPrecision = std::numeric_limits<PrecisionInputType>::digits10 + 1;
							static constexpr SizeType SizeMaxFormat = SizeBeginCharacter + 
																		SizeMaxFlag + 
																		SizeMaxWidth + 
																		SizeBeginPercisionCharacter + 
																		SizeMaxPrecision + 
																		SizeMaxLength + 
																		SizeMaxSpecifier;
							static constexpr SizeType SizeMaxFormatString = SizeMaxFormat + 1;

							typedef char FlagArrayType[SizeMaxFlag];
							typedef char LengthArrayType[SizeMaxLength];
							typedef char PrecisionArrayType[SizeMaxPrecision];
							typedef char SpecifierArrayType[SizeMaxSpecifier];
							typedef char WidthArrayType[SizeMaxWidth];
							typedef char FormatStringType[SizeMaxFormatString];
						};
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_FORMAT_CONSTANT_H_