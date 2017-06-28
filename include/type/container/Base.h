#ifndef TYPE_CONTAINER_BASE_H_
#define TYPE_CONTAINER_BASE_H_

#include "type\Container.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			template<typename HANDLE_CONTAINER_TYPE>
			class Base
			{
			public:
				typedef HANDLE_CONTAINER_TYPE							ContainerType;
				typedef BrainMuscles::type::Container<ContainerType>	DerivedType;
				typedef Base<HANDLE_CONTAINER_TYPE>						BaseType;
			private:
				ContainerType * m_container;
			protected:
				Base(BaseType* ptr);
				Base(const BaseType& rhs);
				Base(const DerivedType& derive);
				Base(const ContainerType& rhs);
				template<typename... ARGS>
				Base(ARGS... args);
				~Base();
			protected:
				ContainerType& GetContainer();
				const ContainerType& GetContainer() const;
			};

			template<typename DEFINITION_TYPE>
			Base<DEFINITION_TYPE>::Base(BaseType* ptr) :
				m_container(new ContainerType(*ptr->m_container))
			{
			}

			template<typename DEFINITION_TYPE>
			Base<DEFINITION_TYPE>::Base(const BaseType& rhs) :
				m_container(new ContainerType(*rhs.m_container))
			{}

			template<typename DEFINITION_TYPE>
			Base<DEFINITION_TYPE>::Base(const DerivedType& derive) :
				m_container(new ContainerType(*derive.m_container))
			{}

			template<typename DEFINITION_TYPE>
			Base<DEFINITION_TYPE>::Base(const ContainerType& rhs) :
				m_container(new ContainerType(rhs))
			{}

			template<typename DEFINITION_TYPE>
			template<typename... ARGS>
			Base<DEFINITION_TYPE>::Base(ARGS... args) :
				m_container(new ContainerType(args...))
			{}

			template<typename DEFINITION_TYPE>
			Base<DEFINITION_TYPE>::~Base()
			{
				delete m_container;
			}

			template<typename DEFINITION_TYPE>
			typename Base<DEFINITION_TYPE>::ContainerType&
			Base<DEFINITION_TYPE>::GetContainer()
			{
				return *m_container;
			}

			template<typename DEFINITION_TYPE>
			const typename Base<DEFINITION_TYPE>::ContainerType&
			Base<DEFINITION_TYPE>::GetContainer() const
			{
				return *m_container;
			}
		}
	}
}

#endif //!TYPE_CONTAINER_BASE_H_