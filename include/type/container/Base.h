#ifndef TYPE_CONTAINER_BASE_H_
#define TYPE_CONTAINER_BASE_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			template<typename CONTAINER_TYPE, typename DERIVED>
			class Base
			{
			public:
				typedef CONTAINER_TYPE ContainerType;
				typedef DERIVED DerivedType;
				typedef Base<CONTAINER_TYPE, DERIVED> BaseType;
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

			template<typename CONTAINER_TYPE, typename DERIVED>
			Base<CONTAINER_TYPE, DERIVED>::Base(BaseType* ptr) :
				m_container(new ContainerType(*ptr->m_container))
			{
			}

			template<typename CONTAINER_TYPE, typename DERIVED>
			Base<CONTAINER_TYPE, DERIVED>::Base(const BaseType& rhs) :
				m_container(new ContainerType(*rhs.m_container))
			{}

			template<typename CONTAINER_TYPE, typename DERIVED>
			Base<CONTAINER_TYPE, DERIVED>::Base(const DerivedType& derive) :
				m_container(new ContainerType(*derive.m_container))
			{}

			template<typename CONTAINER_TYPE, typename DERIVED>
			Base<CONTAINER_TYPE, DERIVED>::Base(const ContainerType& rhs) :
				m_container(new ContainerType(rhs))
			{}

			template<typename CONTAINER_TYPE, typename DERIVED>
			template<typename... ARGS>
			Base<CONTAINER_TYPE, DERIVED>::Base(ARGS... args) :
				m_container(new ContainerType(args...))
			{}

			template<typename CONTAINER_TYPE, typename DERIVED>
			Base<CONTAINER_TYPE, DERIVED>::~Base()
			{
				delete m_container;
			}

			template<typename CONTAINER_TYPE, typename DERIVED>
			typename Base<CONTAINER_TYPE, DERIVED>::ContainerType&
			Base<CONTAINER_TYPE, DERIVED>::GetContainer()
			{
				return *m_container;
			}

			template<typename CONTAINER_TYPE, typename DERIVED>
			const typename Base<CONTAINER_TYPE, DERIVED>::ContainerType& 
			Base<CONTAINER_TYPE, DERIVED>::GetContainer() const
			{
				return *m_container;
			}
		}
	}
}

#endif //!TYPE_CONTAINER_BASE_H_