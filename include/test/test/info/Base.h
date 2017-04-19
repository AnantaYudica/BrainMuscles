#ifndef TEST_TEST_INFO_BASE_H_
#define TEST_TEST_INFO_BASE_H_

namespace BrainMuscles
{
	namespace test
	{
		namespace test
		{
			namespace info
			{
				class Base;
			}
		}
	}
}


namespace BrainMuscles
{
	namespace test
	{
		namespace test
		{
			namespace info
			{
				class Base
				{
				protected:
					Base();
				public:
					virtual ~Base() ;
					virtual const char * AbsolutePath() const = 0;
					virtual const char * RelativePath() const = 0;
					virtual const char * Filename() const  = 0;
					virtual const char * Name() const = 0 ;
					virtual const char * Extension() const  = 0;
					virtual const size_t Line() const = 0;
				};

				Base::Base()
				{}

				Base::~Base()
				{}
			}
		}
	}
}
#endif // ! TEST_TEST_INFO_BASE_H_