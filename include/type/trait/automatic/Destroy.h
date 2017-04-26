#ifndef TYPE_TRAIT_AUTOMATIC_DESTROY_H_
#define TYPE_TRAIT_AUTOMATIC_DESTROY_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace automatic
			{
				template<typename BASE = destroy::Base>
				class Destroy;
			}
		}
	}
}


#include "type\trait\automatic\destroy\Base.h"
#include "type\trait\automatic\destroy\Function.h"
#include "type\trait\automatic\destroy\Management.h"
#include <vector>

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace automatic
			{
				template<typename BASE>
				class Destroy
				{


				};
				
				template<>
				class Destroy<destroy::Base> :
					protected destroy::Base
				{
				protected:
					virtual void Destructor() = 0;
					Destroy();
				public:
					virtual ~Destroy();
				};

				template<>
				class Destroy<destroy::Function>
				{
					destroy::Base* m_base;
				public:
					Destroy(const Destroy<destroy::Function>& destroyFunction);
					Destroy(Destroy<destroy::Function>* destroyFunction);
					Destroy(destroy::Function::FUNCTION_DESTROY_TYPE destroyFunction);
					~Destroy();
				};

				Destroy<destroy::Base>::Destroy()
				{
					destroy::Management::Register(this);
				}

				Destroy<destroy::Function>::Destroy(const Destroy<destroy::Function>& destroyFunction) :
					m_base(new destroy::Function(dynamic_cast<destroy::Function*>(destroyFunction.m_base)))
				{
					destroy::Management::Register(m_base);
				}

				Destroy<destroy::Function>::Destroy(Destroy<destroy::Function>* destroyFunction) :
					m_base(new destroy::Function(dynamic_cast<destroy::Function*>(destroyFunction->m_base)))
				{
					destroy::Management::Unregister(m_base);
					delete m_base;
				}

				Destroy<destroy::Function>::Destroy(destroy::Function::FUNCTION_DESTROY_TYPE destroyFunction) :
					m_base(new destroy::Function(destroyFunction))
				{
					destroy::Management::Register(m_base);
				}

				Destroy<destroy::Base>::~Destroy()
				{
					destroy::Management::Unregister(this);
				}

				Destroy<destroy::Function>::~Destroy()
				{
					destroy::Management::Unregister(m_base);
					delete m_base;
				}

			}
		}
	}
}

#endif //!TYPE_TRAIT_AUTOMATIC_DESTROY_H_