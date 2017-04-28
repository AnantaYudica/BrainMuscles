#ifndef TYPE_TRAIT_AUTOMATIC_DESTROY_FUNCTION_H_
#define TYPE_TRAIT_AUTOMATIC_DESTROY_FUNCTION_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace automatic
		{
			namespace destroy
			{
				class Function;
			}
		}
	}
}

#include "type\automatic\destroy\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace automatic
		{
			namespace destroy
			{
				class Function :
					public Base
				{
				public:
					typedef Base::FUNCTION_DESTROY_TYPE FUNCTION_DESTROY_TYPE;
				private:
					FUNCTION_DESTROY_TYPE m_functionDestroy;
				public:
					Function(const Function & function);
					Function(const Function * pointer);
					Function(FUNCTION_DESTROY_TYPE function_destroy);
					~Function();
					void Destructor();
				};

				Function::Function(const Function & function) :
					m_functionDestroy(function.m_functionDestroy)
				{

				}

				Function::Function(const Function * pointer) :
					m_functionDestroy(pointer->m_functionDestroy)
				{
				}

				Function::Function(FUNCTION_DESTROY_TYPE function_destroy) :
					m_functionDestroy(function_destroy)
				{
				}

				Function::~Function()
				{
				}

				void Function::Destructor()
				{
					m_functionDestroy();
				}
			}
		}
	}
}

#endif //!TYPE_TRAIT_AUTOMATIC_DESTROY_FUNCTION_H_