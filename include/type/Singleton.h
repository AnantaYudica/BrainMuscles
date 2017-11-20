#ifndef TYPE_SINGLETON_H_
#define TYPE_SINGLETON_H_

namespace BrainMuscles
{
	namespace type
	{
		template <typename TYPE, typename INSTANCE_TYPE = TYPE *, typename INSTANCE_RETURN_TYPE = INSTANCE_TYPE>
		class Singleton;
	}
}

#include "type/automatic/Destroy.h"
#include <cassert>

namespace BrainMuscles
{
	namespace type
	{
		template <typename TYPE, typename INSTANCE_TYPE, typename INSTANCE_RETURN_TYPE>
		class Singleton
		{
		private:
			Singleton() = delete;
		};

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		class Singleton<TYPE, TYPE*, INSTANCE_RETURN_TYPE> :
			private automatic::Destroy<>
		{
		private:
			typedef Singleton<TYPE, TYPE*, TYPE*> SingletonType;
			friend typename TYPE;
			static TYPE* ms_instance;
			Singleton();
			void Destructor();
		public:
			virtual ~Singleton();
			template<typename ... ARGS>
			static INSTANCE_RETURN_TYPE CreateInstance(ARGS... args);
			static void DestroyInstance();
			static INSTANCE_RETURN_TYPE GetInstance();
			static bool HasInstance();
		};

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		class Singleton<TYPE, TYPE, INSTANCE_RETURN_TYPE>
		{
		private:
			friend typename TYPE;
			static TYPE ms_instance;
			bool m_hasInstance;
			Singleton();
		public:
			virtual ~Singleton();
			template<typename ... ARGS>
			static INSTANCE_RETURN_TYPE CreateInstance(ARGS... args);
			static void DestroyInstance();
			static INSTANCE_RETURN_TYPE GetInstance();
			static bool HasInstance();
		};

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		TYPE* Singleton<TYPE, TYPE*, INSTANCE_RETURN_TYPE>::ms_instance = 0;

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		TYPE Singleton<TYPE, TYPE, INSTANCE_RETURN_TYPE>::ms_instance;

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		Singleton<TYPE, TYPE*, INSTANCE_RETURN_TYPE>::Singleton()
		{
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		Singleton<TYPE, TYPE, INSTANCE_RETURN_TYPE>::Singleton() :
			m_hasInstance(false)
		{
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		void Singleton<TYPE, TYPE*, INSTANCE_RETURN_TYPE>::Destructor()
		{
			DestroyInstance();
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		Singleton<TYPE, TYPE*, INSTANCE_RETURN_TYPE>::~Singleton()
		{
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		Singleton<TYPE, TYPE, INSTANCE_RETURN_TYPE>::~Singleton()
		{
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		template<typename ... ARGS>
		INSTANCE_RETURN_TYPE Singleton<TYPE, TYPE*, INSTANCE_RETURN_TYPE>::CreateInstance(ARGS... args)
		{
			if (!ms_instance)
			{
				ms_instance = new TYPE(args...);
			}
			return ms_instance;
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		template<typename ... ARGS>
		INSTANCE_RETURN_TYPE Singleton<TYPE, TYPE, INSTANCE_RETURN_TYPE>::CreateInstance(ARGS... args)
		{
			if (!ms_instance.m_hasInstance)
			{
				ms_instance = TYPE(args...);
				m_hasInstance = true;
			}
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		void Singleton<TYPE, TYPE*, INSTANCE_RETURN_TYPE>::DestroyInstance()
		{
			if (ms_instance)
			{
				delete ms_instance;
				ms_instance = 0;
			}
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		void Singleton<TYPE, TYPE, INSTANCE_RETURN_TYPE>::DestroyInstance()
		{
			m_hasInstance = false;
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		INSTANCE_RETURN_TYPE Singleton<TYPE, TYPE*, INSTANCE_RETURN_TYPE>::GetInstance()
		{
			assert(ms_instance != 0);
			return ms_instance;
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		INSTANCE_RETURN_TYPE Singleton<TYPE, TYPE, INSTANCE_RETURN_TYPE>::GetInstance()
		{
				
			assert(!ms_instance.m_hasInstance);
			return ms_instance;
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		bool Singleton<TYPE, TYPE*, INSTANCE_RETURN_TYPE>::HasInstance()
		{
			return ms_instance != 0;
		}

		template <typename TYPE, typename INSTANCE_RETURN_TYPE>
		bool Singleton<TYPE, TYPE, INSTANCE_RETURN_TYPE>::HasInstance()
		{
			return ms_instance.m_hasInstance;
		}
	}
}

#endif //!TYPE_SINGLETON_H_
