#ifndef TYPE_ITERATOR_BASE_H_
#define TYPE_ITERATOR_BASE_H_

#include "type\Cloneable.h"
#include <type_traits>

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			template<typename HANDLE, typename DERIVED, typename = void>
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
			template<typename HANDLE, typename DERIVED, typename VOID>
			class Base
			{
			public:
				typedef DERIVED DerivedType;
				typedef HANDLE HandleType;
				typedef HANDLE * PointerHandle;
				typedef Base<HANDLE, DERIVED, VOID> BaseType;
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
				bool IsNullHandle() const;
				BaseType& operator=(const BaseType& rhs);
			};

			template<typename HANDLE, typename DERIVED>
			class Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>
			{
			public:
				typedef DERIVED DerivedType;
				typedef HANDLE HandleType;
				typedef HANDLE * PointerHandle;
				typedef Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type> BaseType;
			private:
				PointerHandle m_handle;
			protected:
				Base();
				Base(const HandleType& handle);
				Base(const DerivedType& derived);
				template<typename DERIVED_HANDLE, typename... ARGS>
				Base(ARGS... args);
			public:
				virtual ~Base();
			protected:
				virtual DERIVED* ThisDerived() = 0;
				HandleType& GetHandle();
				const HandleType& GetHandle() const;
				bool IsNullHandle() const;
				BaseType& operator=(const BaseType& rhs);
			};

			///////////////////////////////////////////////////////////////////////////
			template<typename HANDLE, typename DERIVED, typename VOID>
			Base<HANDLE, DERIVED, VOID>::Base() :
				m_handle(0)
			{}

			template<typename HANDLE, typename DERIVED, typename VOID>
			Base<HANDLE, DERIVED, VOID>::Base(const HandleType& handle) :
				m_handle(new HandleType(handle))
			{}

			template<typename HANDLE, typename DERIVED, typename VOID>
			Base<HANDLE, DERIVED, VOID>::Base(const DerivedType& derived)
			{
				if (!derived.IsNullHandle())
				{
					m_handle = new HandleType(derived.GetHandle());
				}
				else
				{
					m_handle = 0;
				}
			}

			template<typename HANDLE, typename DERIVED, typename VOID>
			template<typename... ARGS>
			Base<HANDLE, DERIVED, VOID>::Base(ARGS... args) :
				m_handle(new HandleType(args...))
			{
			}

			template<typename HANDLE, typename DERIVED, typename VOID>
			Base<HANDLE, DERIVED, VOID>::~Base()
			{
				if (m_handle)
				{
					delete m_handle;
				}
			}

			template<typename HANDLE, typename DERIVED, typename VOID>
			typename Base<HANDLE, DERIVED, VOID>::HandleType&
			Base<HANDLE, DERIVED, VOID>::GetHandle()
			{
				return *m_handle;
			}

			template<typename HANDLE, typename DERIVED, typename VOID>
			const typename Base<HANDLE, DERIVED, VOID>::HandleType&
			Base<HANDLE, DERIVED, VOID>::GetHandle() const
			{
				return *m_handle;
			}

			template<typename HANDLE, typename DERIVED, typename VOID>
			bool Base<HANDLE, DERIVED, VOID>::IsNullHandle() const
			{
				return m_handle == 0;
			}

			template<typename HANDLE, typename DERIVED, typename VOID>
			Base<HANDLE, DERIVED, VOID>& Base<HANDLE, DERIVED, VOID>::operator=(const BaseType& rhs)
			{
				if (!rhs.IsNullHandle())
				{
					delete m_handle;
				}
				m_handle = new HandleType(rhs.GetHandle());
				return *this;
			}
			///////////////////////////////////////////////////////////////////////////
			template<typename HANDLE, typename DERIVED>
			Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::Base() :
				m_handle(0)
			{}

			template<typename HANDLE, typename DERIVED>
			Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::Base(const HandleType& handle) :
				m_handle(dynamic_cast<HANDLE*>(handle.Clone()))
			{}

			template<typename HANDLE, typename DERIVED>
			Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::Base(const DerivedType& derived)
			{
				if (!derived.IsNullHandle())
				{
					m_handle = dynamic_cast<HANDLE*>(derived.GetHandle().Clone());
				}
				else
				{
					m_handle = 0;
				}
			}

			template<typename HANDLE, typename DERIVED>
			template<typename DERIVED_HANDLE, typename... ARGS>
			Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::Base(ARGS... args) :
				m_handle(HANDLE::Constructor<DERIVED_HANDLE>(args...))
			{
			}

			template<typename HANDLE, typename DERIVED>
			Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::~Base()
			{
				if (m_handle)
				{
					delete m_handle;
				}
			}

			template<typename HANDLE, typename DERIVED>
			typename Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::HandleType&
				Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::GetHandle()
			{
				return *m_handle;
			}

			template<typename HANDLE, typename DERIVED>
			const typename Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::HandleType&
			Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::GetHandle() const
			{
				return *m_handle;
			}

			template<typename HANDLE, typename DERIVED>
			bool Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::IsNullHandle() const
			{
				return m_handle == 0;
			}

			template<typename HANDLE, typename DERIVED>
			Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>& 
			Base<HANDLE, DERIVED, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::operator=(const BaseType& rhs)
			{
				if (!rhs.IsNullHandle())
				{
					delete m_handle;
				}
				m_handle = dynamic_cast<HANDLE*>(rhs.GetHandle().Clone());
				return *this;
			}
			///////////////////////////////////////////////////////////////////////////
		}
	}
}



#endif //!TYPE_ITERATOR_BASE_H_