#ifndef TEST_SIMPLE_JSON_EXCEPTION_UNDEFINEDTYPE_H_
#define TEST_SIMPLE_JSON_EXCEPTION_UNDEFINEDTYPE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <exception>

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
					template<typename TYPE>
					class UndefinedType :
						public std::exception
					{
					public:
						static const std::string Message;
					public:
						UndefinedType() = default;
						~UndefinedType() = default;
					public:
						const char* what() const;
					private:
						static const std::string InstanceMessage();
					};

					template<typename TYPE>
					const std::string UndefinedType<TYPE>::Message = InstanceMessage();

					template<typename TYPE>
					const char* UndefinedType<TYPE>::what() const
					{
						return Message.c_str();
					}

					template<typename TYPE>
					const std::string UndefinedType<TYPE>::InstanceMessage()
					{
						std::string message = "Undefined Type with ";
						message += BrainMuscles::test::simple::type::Name<TYPE>::Value();
						return message;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_EXCEPTION_UNDEFINEDTYPE_H_