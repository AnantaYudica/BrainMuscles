#ifndef TEST_SIMPLE_TYPE_NAME_H_
#define TEST_SIMPLE_TYPE_NAME_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <string>
#include <type_traits>
#include <typeindex>

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace type
			{
				namespace name
				{
					char DefaultAliasName[] = "TYPE";
					char DefaultBeginAliasName[] = "[";
					char DefaultEndAliasName[] = "]";
				}

				template<typename TYPE, const char* ALIAS_NAME = BrainMuscles::test::simple::type::name::DefaultAliasName>
				class Name
				{
				protected:
					typedef void(*FunctionTypeNameInstanceType)(std::string&, std::string, std::string);
				private:
					static void AliasNameInstance(std::string& out);
					template<typename VALUE_TYPE>
					static typename std::enable_if<std::is_same<std::string, typename std::remove_cv<typename std::remove_reference<VALUE_TYPE>::type>::type>::value
						|| (std::is_pointer<VALUE_TYPE>::value && std::is_same<typename std::remove_cv<typename std::remove_pointer<VALUE_TYPE>::type>::type, char>::value)>::type
						ValueOfTypeInstance(std::string& out, VALUE_TYPE value);
					template<typename VALUE_TYPE>
					static typename std::enable_if<!std::is_same<std::string, VALUE_TYPE>::value && !(std::is_pointer<VALUE_TYPE>::value && std::is_same<typename std::remove_cv<typename std::remove_pointer<VALUE_TYPE>::type>::type, char>::value)>::type
						ValueOfTypeInstance(std::string& out, VALUE_TYPE value);
				protected:
					static void TypeNameInstance(std::string& out, std::string pre_name = "", std::string post_name = "");
					static void ValueInstance(FunctionTypeNameInstanceType typenameinstance ,std::string& out);
					template<typename VALUE_TYPE>
					static void ValueInstance(FunctionTypeNameInstanceType typenameinstance, std::string& out, VALUE_TYPE value);
				public:
					static std::string Value();
					template<typename VALUE_TYPE>
					static std::string Value(VALUE_TYPE value);
				};

				template<typename TYPE, const char* ALIAS_NAME>
				class Name<const TYPE, ALIAS_NAME> :
					public Name<TYPE, ALIAS_NAME>
				{
				protected:
					static void TypeNameInstance(std::string& out, std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
					template<typename VALUE_TYPE>
					static std::string Value(VALUE_TYPE value);
				};

				template<typename TYPE, const char* ALIAS_NAME>
				class Name<volatile TYPE, ALIAS_NAME> :
					public Name<TYPE, ALIAS_NAME>
				{
				protected:
					static void TypeNameInstance(std::string& out, std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
					template<typename VALUE_TYPE>
					static std::string Value(VALUE_TYPE value);
				};

				template<typename TYPE, const char* ALIAS_NAME>
				class Name<const volatile TYPE, ALIAS_NAME> :
					public Name<TYPE, ALIAS_NAME>
				{
				protected:
					static void TypeNameInstance(std::string& out, std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
					template<typename VALUE_TYPE>
					static std::string Value(VALUE_TYPE value);
				};

				template<typename TYPE, const char* ALIAS_NAME>
				class Name<TYPE*, ALIAS_NAME> :
					public Name<TYPE, ALIAS_NAME>
				{
				protected:
					static void TypeNameInstance(std::string& out, std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
					template<typename VALUE_TYPE>
					static std::string Value(VALUE_TYPE value);
				};

				template<typename TYPE, const char* ALIAS_NAME>
				class Name<TYPE* const, ALIAS_NAME> :
					public Name<TYPE, ALIAS_NAME>
				{
				protected:
					static void TypeNameInstance(std::string& out, std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
					template<typename VALUE_TYPE>
					static std::string Value(VALUE_TYPE value);
				};

				template<typename TYPE, const char* ALIAS_NAME>
				class Name<TYPE* volatile, ALIAS_NAME> :
					public Name<TYPE, ALIAS_NAME>
				{
				protected:
					static void TypeNameInstance(std::string& out, std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
					template<typename VALUE_TYPE>
					static std::string Value(VALUE_TYPE value);
				};

				template<typename TYPE, const char* ALIAS_NAME>
				class Name<TYPE* const volatile, ALIAS_NAME> :
					public Name<TYPE, ALIAS_NAME>
				{
				protected:
					static void TypeNameInstance(std::string& out, std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
					template<typename VALUE_TYPE>
					static std::string Value(VALUE_TYPE value);
				};

				template<typename TYPE, const char* ALIAS_NAME>
				class Name<TYPE&, ALIAS_NAME> :
					public Name<TYPE, ALIAS_NAME>
				{
				protected:
					static void TypeNameInstance(std::string& out, std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
					template<typename VALUE_TYPE>
					static std::string Value(VALUE_TYPE value);
				};

				template<typename TYPE, const char* ALIAS_NAME>
				class Name<TYPE&&, ALIAS_NAME> :
					public Name<TYPE, ALIAS_NAME>
				{
				protected:
					static void TypeNameInstance(std::string& out, std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
					template<typename VALUE_TYPE>
					static std::string Value(VALUE_TYPE value);
				};

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				static typename std::enable_if<std::is_same<std::string, typename std::remove_cv<typename std::remove_reference<VALUE_TYPE>::type>::type>::value
					|| (std::is_pointer<VALUE_TYPE>::value && std::is_same<typename std::remove_cv<typename std::remove_pointer<VALUE_TYPE>::type>::type, char>::value)>::type
					Name<TYPE, ALIAS_NAME>::ValueOfTypeInstance(std::string& out, VALUE_TYPE value)
				{
					out += " = ";
					out += value;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				static typename std::enable_if<!std::is_same<std::string, VALUE_TYPE>::value && !(std::is_pointer<VALUE_TYPE>::value && std::is_same<typename std::remove_cv<typename std::remove_pointer<VALUE_TYPE>::type>::type, char>::value)>::type
					Name<TYPE, ALIAS_NAME>::ValueOfTypeInstance(std::string& out, VALUE_TYPE value)
				{
					out += " = ";
					out += std::to_string(value);
				}

				template<typename TYPE, const char* ALIAS_NAME>
				void Name<TYPE, ALIAS_NAME>::AliasNameInstance(std::string& out)
				{
					out += " ";
					out += BrainMuscles::test::simple::type::name::DefaultBeginAliasName;
					out += ALIAS_NAME;
					out += " = ";
					out += typeid(TYPE).name();
					out += BrainMuscles::test::simple::type::name::DefaultEndAliasName;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				void Name<TYPE, ALIAS_NAME>::TypeNameInstance(std::string& out, std::string pre_name, std::string post_name)
				{
					out += pre_name;
					out += ALIAS_NAME;
					out += post_name;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				void Name<TYPE, ALIAS_NAME>::ValueInstance(FunctionTypeNameInstanceType typenameinstance, std::string& out)
				{
					typenameinstance(out, "", "");
					AliasNameInstance(out);
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				void Name<TYPE, ALIAS_NAME>::ValueInstance(FunctionTypeNameInstanceType typenameinstance, std::string& out, VALUE_TYPE value)
				{
					typenameinstance(out, "", "");
					ValueOfTypeInstance(out, value);
					AliasNameInstance(out);
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				std::string Name<TYPE, ALIAS_NAME>::Value(VALUE_TYPE value)
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out, value);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				std::string Name<TYPE, ALIAS_NAME>::Value()
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				void Name<const TYPE, ALIAS_NAME>::TypeNameInstance(std::string& out, std::string pre_name, std::string post_name)
				{
					return Name<TYPE, ALIAS_NAME>::TypeNameInstance(out, "const ", post_name);
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				std::string Name<const TYPE, ALIAS_NAME>::Value(VALUE_TYPE value)
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out, value);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				std::string Name<const TYPE, ALIAS_NAME>::Value()
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				void Name<volatile TYPE, ALIAS_NAME>::TypeNameInstance(std::string& out, std::string pre_name, std::string post_name)
				{
					return Name<TYPE, ALIAS_NAME>::TypeNameInstance(out, "volatile ", post_name);
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				std::string Name<volatile TYPE, ALIAS_NAME>::Value(VALUE_TYPE value)
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out, value);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				std::string Name<volatile TYPE, ALIAS_NAME>::Value()
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				void Name<const volatile TYPE, ALIAS_NAME>::TypeNameInstance(std::string& out, std::string pre_name, std::string post_name)
				{
					return Name<TYPE, ALIAS_NAME>::TypeNameInstance(out, "const volatile ", post_name);
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				std::string Name<const volatile TYPE, ALIAS_NAME>::Value(VALUE_TYPE value)
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out, value);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				std::string Name<const volatile TYPE, ALIAS_NAME>::Value()
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				void Name<TYPE*, ALIAS_NAME>::TypeNameInstance(std::string& out, std::string pre_name, std::string post_name)
				{
					return Name<TYPE, ALIAS_NAME>::TypeNameInstance(out, pre_name, std::string("*") + post_name);
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				std::string Name<TYPE*, ALIAS_NAME>::Value(VALUE_TYPE value)
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out, value);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				std::string Name<TYPE*, ALIAS_NAME>::Value()
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				void Name<TYPE* const, ALIAS_NAME>::TypeNameInstance(std::string& out, std::string pre_name, std::string post_name)
				{
					return Name<TYPE, ALIAS_NAME>::TypeNameInstance(out, pre_name, "* const");
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				std::string Name<TYPE* const, ALIAS_NAME>::Value(VALUE_TYPE value)
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out, value);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				std::string Name<TYPE* const, ALIAS_NAME>::Value()
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				void Name<TYPE* volatile, ALIAS_NAME>::TypeNameInstance(std::string& out, std::string pre_name, std::string post_name)
				{
					return Name<TYPE, ALIAS_NAME>::TypeNameInstance(out, pre_name, "* volatile");
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				std::string Name<TYPE* volatile, ALIAS_NAME>::Value(VALUE_TYPE value)
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out, value);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				std::string Name<TYPE* volatile, ALIAS_NAME>::Value()
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				void Name<TYPE* const volatile, ALIAS_NAME>::TypeNameInstance(std::string& out, std::string pre_name, std::string post_name)
				{
					return Name<TYPE, ALIAS_NAME>::TypeNameInstance(out, pre_name, "* const volatile");
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				std::string Name<TYPE* const volatile, ALIAS_NAME>::Value(VALUE_TYPE value)
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out, value);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				std::string Name<TYPE* const volatile, ALIAS_NAME>::Value()
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out);
					return out;
				}

				template<typename TYPE, const char* NAME>
				void Name<TYPE&, NAME>::TypeNameInstance(std::string& out, std::string pre_name, std::string post_name)
				{
					return Name<TYPE, NAME>::TypeNameInstance(out, pre_name, "&");
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				std::string Name<TYPE&, ALIAS_NAME>::Value(VALUE_TYPE value)
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out, value);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				std::string Name<TYPE&, ALIAS_NAME>::Value()
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				void Name<TYPE&&, ALIAS_NAME>::TypeNameInstance(std::string& out, std::string pre_name, std::string post_name)
				{
					return Name<TYPE, ALIAS_NAME>::TypeNameInstance(out, pre_name, "&&");
				}

				template<typename TYPE, const char* ALIAS_NAME>
				template<typename VALUE_TYPE>
				std::string Name<TYPE&&, ALIAS_NAME>::Value(VALUE_TYPE value)
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out, value);
					return out;
				}

				template<typename TYPE, const char* ALIAS_NAME>
				std::string Name<TYPE&&, ALIAS_NAME>::Value()
				{
					std::string out;
					ValueInstance(&TypeNameInstance, out);
					return out;
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_TYPE_NAME_H_