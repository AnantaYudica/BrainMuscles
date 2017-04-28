#ifndef TYPE_JOURNAL_H_
#define TYPE_JOURNAL_H_

namespace BrainMuscles
{
	namespace type
	{
		template<typename ELEMENT_TYPE>
		class Journal;
	}
}

#include <vector>

namespace BrainMuscles
{
	namespace type
	{
		template<typename ELEMENT_TYPE>
		class Journal
		{
		private:
			std::vector<ELEMENT_TYPE> m_book;
		public:
			Journal();
			void Register(ELEMENT_TYPE base);
			void Unregister(ELEMENT_TYPE base);
		};

		template<typename ELEMENT_TYPE>
		Journal<ELEMENT_TYPE>::Journal()
		{
		}

		template<typename ELEMENT_TYPE>
		void Journal<ELEMENT_TYPE>::Register(ELEMENT_TYPE base)
		{
		}

		template<typename ELEMENT_TYPE>
		void Journal<ELEMENT_TYPE>::Unregister(ELEMENT_TYPE base)
		{
		}
	}
}

#endif