#ifndef TEST_SIMPLE_JSON_EXCEPTION_BADCAST_H_
#define TEST_SIMPLE_JSON_EXCEPTION_BADCAST_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <exception>
#include <string>
#include <typeindex>

#include "test\simple\type\Name.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace exception
				{
					template<typename FROM_TYPE, typename TO_TYPE>
					class BadCast :
						public std::exception
					{
					public:
						BadCast() = default;
						~BadCast() = default;
					public:
						static const std::string& Message();
					private:
						static const std::string InstanceMessage();
					public:
						const char* what() const;
					};

					template<typename FROM_TYPE, typename TO_TYPE>
					const std::string& BadCast<FROM_TYPE, TO_TYPE>::Message()
					{
						static const std::string message = InstanceMessage();
						return message;
					}
			
					template<typename FROM_TYPE, typename TO_TYPE>
					const std::string BadCast<FROM_TYPE, TO_TYPE>::InstanceMessage()
					{
						std::string message = "Cannot cast from ";
						message += BrainMuscles::test::simple::type::Name<FROM_TYPE>::Value();
						message += " to ";
						message += BrainMuscles::test::simple::type::Name<TO_TYPE>::Value();
						return message;
					}

					template<typename FROM_TYPE, typename TO_TYPE>
					const char* BadCast<FROM_TYPE, TO_TYPE>::what() const
					{
						return Message().c_str();
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_EXCEPTION_BADCAST_H_