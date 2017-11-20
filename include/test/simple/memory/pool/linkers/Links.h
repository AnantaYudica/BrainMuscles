#ifndef TEST_SIMPLE_MEMORY_POOL_LINKERS_LINKS_H_
#define TEST_SIMPLE_MEMORY_POOL_LINKERS_LINKS_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/memory/pool/linkers/Data.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace memory
			{
				namespace pool
				{
					namespace linkers
					{
						class Links :
							public BrainMuscles::test::simple::memory::pool::linkers::Data
						{
						public:
							typedef BrainMuscles::test::simple::memory::pool::linkers::Data DataType;
						private:
							Links* m_next;
							Links* m_prev;
						public:
							Links(const DataType& data);
							Links(DataType* data);
							Links(const Links& links);
							Links(Links* ptr_links);
						public:
							Links* GetNext();
							void SetNext(Links* link);
							Links* GetPrev();
							void SetPrev(Links* link);
						public:
							bool operator==(void* block);
						};

						Links::Links(const DataType& data) :
							DataType(data),
							m_next(0),
							m_prev(0)
						{}

						Links::Links(DataType* data) :
							DataType(data),
							m_next(0),
							m_prev(0)
						{}

						Links::Links(const Links& links) :
							DataType(links),
							m_next(links.m_next),
							m_prev(links.m_prev)
						{}

						Links::Links(Links* ptr_links) :
							DataType(ptr_links),
							m_next(ptr_links->m_next),
							m_prev(ptr_links->m_prev)
						{}

						Links* Links::GetNext()
						{
							return m_next;
						}

						void Links::SetNext(Links* link)
						{
							m_next = link;
						}

						Links* Links::GetPrev()
						{
							return m_prev;
						}

						void Links::SetPrev(Links* link)
						{
							m_prev = link;
						}

						bool Links::operator==(void* block)
						{
							return DataType::operator==(block);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_MEMORY_POOL_LINKERS_LINKS_H_