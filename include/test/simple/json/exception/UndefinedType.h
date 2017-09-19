#ifndef TEST_SIMPLE_JSON_EXCEPTION_UNDEFINEDTYPE_H_
#define TEST_SIMPLE_JSON_EXCEPTION_UNDEFINEDTYPE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <exception>
#include <string>

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
					template<typename TYPE, typename VALUE_TYPE = void>
					class UndefinedType :
						public std::exception
					{
					public:
						const VALUE_TYPE Value;
						const std::string Message;
					public:
						UndefinedType(VALUE_TYPE value);
						~UndefinedType() = default;
					public:
						const char* what() const;
					private:
						static const std::string InstanceMessage(const VALUE_TYPE& value);
					};

					template<typename TYPE>
					class UndefinedType<TYPE, void> :
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

					template<typename TYPE, typename VALUE_TYPE>
					UndefinedType<TYPE, VALUE_TYPE>::UndefinedType(VALUE_TYPE value) :
						Value(value),
						Message(InstanceMessage(value))
					{}

					template<typename TYPE, typename VALUE_TYPE>
					const char* UndefinedType<TYPE, VALUE_TYPE>::what() const
					{
						return Message.c_str();
					}

					template<typename TYPE, typename VALUE_TYPE>
					const std::string UndefinedType<TYPE, VALUE_TYPE>::InstanceMessage(const VALUE_TYPE& value)
					{
						std::string message = "Undefined Type with ";
						message += BrainMuscles::test::simple::type::Name<TYPE>::Value(value);
						return message;
					}

					template<typename TYPE>
					const std::string UndefinedType<TYPE, void>::Message = InstanceMessage();

					template<typename TYPE>
					const char* UndefinedType<TYPE, void>::what() const
					{
						return Message.c_str();
					}

					template<typename TYPE>
					const std::string UndefinedType<TYPE, void>::InstanceMessage()
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