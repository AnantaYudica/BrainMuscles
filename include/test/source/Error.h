#ifndef TEST_SOURCE_ERROR_H_
#define TEST_SOURCE_ERROR_H_

#ifdef _USING_TEST_SOURCE_

#include <string>

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			struct Error
			{
				const std::string Cause;
				const std::string Information;
				inline Error(const std::string& cause, const std::string& information);
			};

			inline Error::Error(const std::string& cause, const std::string& information) :
				Cause(cause),
				Information(information)
			{}
		}
	}
}

namespace std
{
	inline std::string to_string(const BrainMuscles::test::source::Error& error)
	{
		std::string out = error.Cause;
		out += ", ";
		out += error.Information;
		return out;
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ERROR_H_