#ifndef TEST_SIMPLE_TYPE_NAME_H_
#define TEST_SIMPLE_TYPE_NAME_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <string>
#include <typeindex>

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace type
			{
				template<typename TYPE>
				class Name
				{
				protected:
					static std::string NameInstance(std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
				};

				template<typename TYPE>
				class Name<const TYPE> :
					public Name<TYPE>
				{
				protected:
					static std::string NameInstance(std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
				};

				template<typename TYPE>
				class Name<volatile TYPE> :
					public Name<TYPE>
				{
				protected:
					static std::string NameInstance(std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
				};

				template<typename TYPE>
				class Name<const volatile TYPE> :
					public Name<TYPE>
				{
				protected:
					static std::string NameInstance(std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
				};

				template<typename TYPE>
				class Name<TYPE*> :
					public Name<TYPE>
				{
				protected:
					static std::string NameInstance(std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
				};

				template<typename TYPE>
				class Name<TYPE* const> :
					public Name<TYPE>
				{
				protected:
					static std::string NameInstance(std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
				};

				template<typename TYPE>
				class Name<TYPE* volatile> :
					public Name<TYPE>
				{
				protected:
					static std::string NameInstance(std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
				};

				template<typename TYPE>
				class Name<TYPE* const volatile> :
					public Name<TYPE>
				{
				protected:
					static std::string NameInstance(std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
				};

				template<typename TYPE>
				class Name<TYPE&> :
					public Name<TYPE>
				{
				protected:
					static std::string NameInstance(std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
				};

				template<typename TYPE>
				class Name<TYPE&&> :
					public Name<TYPE>
				{
				protected:
					static std::string NameInstance(std::string pre_name = "", std::string post_name = "");
				public:
					static std::string Value();
				};

				template<typename TYPE>
				std::string Name<TYPE>::NameInstance(std::string pre_name, std::string post_name)
				{
					std::string name = pre_name;
					name += "TYPE";
					name += post_name;
					name += " [TYPE = ";
					name += typeid(TYPE).name();
					name += "]";
					return name;
				}

				template<typename TYPE>
				std::string Name<TYPE>::Value()
				{
					return NameInstance();
				}

				template<typename TYPE>
				std::string Name<const TYPE>::NameInstance(std::string pre_name, std::string post_name)
				{
					return Name<TYPE>::NameInstance("const ", post_name);
				}

				template<typename TYPE>
				std::string Name<const TYPE>::Value()
				{
					return NameInstance();
				}

				template<typename TYPE>
				std::string Name<volatile TYPE>::NameInstance(std::string pre_name, std::string post_name)
				{
					return Name<TYPE>::NameInstance("volatile ", post_name);
				}

				template<typename TYPE>
				std::string Name<volatile TYPE>::Value()
				{
					return NameInstance();
				}

				template<typename TYPE>
				std::string Name<const volatile TYPE>::NameInstance(std::string pre_name, std::string post_name)
				{
					return Name<TYPE>::NameInstance("const volatile ", post_name);
				}

				template<typename TYPE>
				std::string Name<const volatile TYPE>::Value()
				{
					return NameInstance();
				}

				template<typename TYPE>
				std::string Name<TYPE*>::NameInstance(std::string pre_name, std::string post_name)
				{
					return Name<TYPE>::NameInstance(pre_name, std::string("*") + post_name);
				}

				template<typename TYPE>
				std::string Name<TYPE*>::Value()
				{
					return NameInstance();
				}

				template<typename TYPE>
				std::string Name<TYPE* const>::NameInstance(std::string pre_name, std::string post_name)
				{
					return Name<TYPE>::NameInstance(pre_name, "* const");
				}

				template<typename TYPE>
				std::string Name<TYPE* const>::Value()
				{
					return NameInstance();
				}

				template<typename TYPE>
				std::string Name<TYPE* volatile>::NameInstance(std::string pre_name, std::string post_name)
				{
					return Name<TYPE>::NameInstance(pre_name, "* volatile");
				}

				template<typename TYPE>
				std::string Name<TYPE* volatile>::Value()
				{
					return NameInstance();
				}

				template<typename TYPE>
				std::string Name<TYPE* const volatile>::NameInstance(std::string pre_name, std::string post_name)
				{
					return Name<TYPE>::NameInstance(pre_name, "* const volatile");
				}

				template<typename TYPE>
				std::string Name<TYPE* const volatile>::Value()
				{
					return NameInstance();
				}

				template<typename TYPE>
				std::string Name<TYPE&>::NameInstance(std::string pre_name, std::string post_name)
				{
					return Name<TYPE>::NameInstance(pre_name, "&");
				}

				template<typename TYPE>
				std::string Name<TYPE&>::Value()
				{
					return NameInstance();
				}

				template<typename TYPE>
				std::string Name<TYPE&&>::NameInstance(std::string pre_name, std::string post_name)
				{
					return Name<TYPE>::NameInstance(pre_name, "&&");
				}

				template<typename TYPE>
				std::string Name<TYPE&&>::Value()
				{
					return NameInstance();
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_TYPE_NAME_H_