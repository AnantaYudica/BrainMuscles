#ifndef TYPE_ITERATOR_BASE_H_
#define TYPE_ITERATOR_BASE_H_

#include "type\Cloneable.h"
#include "type\iterator\derived\info\IsType.h"
#include <type_traits>

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			template<typename HANDLE, typename DERIVED_INFO, typename = void>
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
			template<typename HANDLE, typename DERIVED_INFO, typename VOID>
			class Base
			{
				static_assert(BrainMuscles::type::iterator::derived::info::IsType<DERIVED_INFO>::Value, "[DERIVED_INFO Requires class derived::Info<Definition>");
			public:
				typedef typename DERIVED_INFO::DerivedType DerivedType;
				typedef HANDLE HandleType;
				typedef HANDLE * PointerHandle;
				typedef Base<HANDLE, DERIVED_INFO, VOID> BaseType;
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
				virtual DerivedType* ThisDerived() = 0;
				HandleType& GetHandle();
				const HandleType& GetHandle() const;
				bool IsNullHandle() const;
				BaseType& operator=(const BaseType& rhs);
			};

			template<typename HANDLE, typename DERIVED_INFO>
			class Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>
			{
				static_assert(BrainMuscles::type::iterator::derived::info::IsType<DERIVED_INFO>::Value, "[DERIVED_INFO Requires class derived::Info<Definition>");
			public:
				typedef typename DERIVED_INFO::DerivedType DerivedType;
				typedef HANDLE HandleType;
				typedef HANDLE * PointerHandle;
				typedef Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type> BaseType;
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
				virtual DerivedType* ThisDerived() = 0;
				HandleType& GetHandle();
				const HandleType& GetHandle() const;
				bool IsNullHandle() const;
				BaseType& operator=(const BaseType& rhs);
			};

			///////////////////////////////////////////////////////////////////////////
			template<typename HANDLE, typename DERIVED_INFO, typename VOID>
			Base<HANDLE, DERIVED_INFO, VOID>::Base() :
				m_handle(0)
			{}

			template<typename HANDLE, typename DERIVED_INFO, typename VOID>
			Base<HANDLE, DERIVED_INFO, VOID>::Base(const HandleType& handle) :
				m_handle(new HandleType(handle))
			{}

			template<typename HANDLE, typename DERIVED_INFO, typename VOID>
			Base<HANDLE, DERIVED_INFO, VOID>::Base(const DerivedType& derived)
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

			template<typename HANDLE, typename DERIVED_INFO, typename VOID>
			template<typename... ARGS>
			Base<HANDLE, DERIVED_INFO, VOID>::Base(ARGS... args) :
				m_handle(new HandleType(args...))
			{
			}

			template<typename HANDLE, typename DERIVED_INFO, typename VOID>
			Base<HANDLE, DERIVED_INFO, VOID>::~Base()
			{
				if (m_handle)
				{
					delete m_handle;
				}
			}

			template<typename HANDLE, typename DERIVED_INFO, typename VOID>
			typename Base<HANDLE, DERIVED_INFO, VOID>::HandleType&
			Base<HANDLE, DERIVED_INFO, VOID>::GetHandle()
			{
				return *m_handle;
			}

			template<typename HANDLE, typename DERIVED_INFO, typename VOID>
			const typename Base<HANDLE, DERIVED_INFO, VOID>::HandleType&
			Base<HANDLE, DERIVED_INFO, VOID>::GetHandle() const
			{
				return *m_handle;
			}

			template<typename HANDLE, typename DERIVED_INFO, typename VOID>
			bool Base<HANDLE, DERIVED_INFO, VOID>::IsNullHandle() const
			{
				return m_handle == 0;
			}

			template<typename HANDLE, typename DERIVED_INFO, typename VOID>
			Base<HANDLE, DERIVED_INFO, VOID>& Base<HANDLE, DERIVED_INFO, VOID>::operator=(const BaseType& rhs)
			{
				if (!rhs.IsNullHandle())
				{
					delete m_handle;
				}
				m_handle = new HandleType(rhs.GetHandle());
				return *this;
			}
			///////////////////////////////////////////////////////////////////////////
			template<typename HANDLE, typename DERIVED_INFO>
			Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::Base() :
				m_handle(0)
			{}

			template<typename HANDLE, typename DERIVED_INFO>
			Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::Base(const HandleType& handle) :
				m_handle(dynamic_cast<HANDLE*>(handle.Clone()))
			{}

			template<typename HANDLE, typename DERIVED_INFO>
			Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::Base(const DerivedType& derived)
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

			template<typename HANDLE, typename DERIVED_INFO>
			template<typename DERIVED_HANDLE, typename... ARGS>
			Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::Base(ARGS... args) :
				m_handle(HANDLE::Constructor<DERIVED_HANDLE>(args...))
			{
			}

			template<typename HANDLE, typename DERIVED_INFO>
			Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::~Base()
			{
				if (m_handle)
				{
					delete m_handle;
				}
			}

			template<typename HANDLE, typename DERIVED_INFO>
			typename Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::HandleType&
				Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::GetHandle()
			{
				return *m_handle;
			}

			template<typename HANDLE, typename DERIVED_INFO>
			const typename Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::HandleType&
			Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::GetHandle() const
			{
				return *m_handle;
			}

			template<typename HANDLE, typename DERIVED_INFO>
			bool Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::IsNullHandle() const
			{
				return m_handle == 0;
			}

			template<typename HANDLE, typename DERIVED_INFO>
			Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>&
			Base<HANDLE, DERIVED_INFO, typename std::enable_if<std::is_base_of<BrainMuscles::type::Cloneable, HANDLE>::value, void>::type>::operator=(const BaseType& rhs)
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