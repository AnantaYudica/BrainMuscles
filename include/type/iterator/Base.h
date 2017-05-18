#ifndef TYPE_ITERATOR_BASE_H_
#define TYPE_ITERATOR_BASE_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			template<typename HANDLE, typename DERIVED>
			class Base;
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			template<typename HANDLE, typename DERIVED>
			class Base
			{
			public:
				typedef DERIVED DerivedType;
				typedef HANDLE HandleType;
				typedef HANDLE * PointerHandle;
				typedef Base<HANDLE, DERIVED> BaseType;
			private:
				PointerHandle m_handle;
			protected:
				Base();
				Base(const HandleType& handle);
				Base(const DerivedType& derived);
				template<typename... ARGS>
				Base(ARGS... args);
			public:
				virtual ~Base();
			protected:
				virtual DERIVED* ThisDerived() = 0;
				HandleType& GetHandle();
				const HandleType& GetHandle() const;
				BaseType& operator=(const BaseType& rhs);
			};

			template<typename HANDLE, typename DERIVED>
			Base<HANDLE, DERIVED>::Base() :
				m_handle(0)
			{}

			template<typename HANDLE, typename DERIVED>
			Base<HANDLE, DERIVED>::Base(const HandleType& handle) :
				m_handle(new HandleType(handle))
			{}

			template<typename HANDLE, typename DERIVED>
			Base<HANDLE, DERIVED>::Base(const DerivedType& derived)
			{
				if (derived.m_handle != 0)
				{
					m_handle = new HandleType(*derived.m_handle);
				}
				else
				{
					m_handle = 0;
				}
			}

			template<typename HANDLE, typename DERIVED>
			template<typename... ARGS>
			Base<HANDLE, DERIVED>::Base(ARGS... args) :
				m_handle(new HandleType(args...))
			{
			}

			template<typename HANDLE, typename DERIVED>
			Base<HANDLE, DERIVED>::~Base()
			{
				if (m_handle)
				{
					delete m_handle;
				}
			}

			template<typename HANDLE, typename DERIVED>
			typename Base<HANDLE, DERIVED>::HandleType&
			Base<HANDLE, DERIVED>::GetHandle()
			{
				return *m_handle;
			}

			template<typename HANDLE, typename DERIVED>
			const typename Base<HANDLE, DERIVED>::HandleType& 
			Base<HANDLE, DERIVED>::GetHandle() const
			{
				return *m_handle;
			}

			template<typename HANDLE, typename DERIVED>
			Base<HANDLE, DERIVED>& Base<HANDLE, DERIVED>::operator=(const BaseType& rhs)
			{
				if (rhs.m_handle != 0)
				{
					delete m_handle;
				}
				m_handle = new HandleType(*rhs.m_handle);
				return *this;
			}
		}
	}
}



#endif //!TYPE_ITERATOR_BASE_H_