#ifndef TEST_SIMPLE_MEMORY_POOL_H_
#define TEST_SIMPLE_MEMORY_POOL_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <cstddef>
#include <cstdlib>

#include "test\simple\memory\pool\Linkers.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace memory
			{
				class Pool final
				{
				private:
					typedef BrainMuscles::test::simple::memory::pool::Linkers LinkersType;
					typedef BrainMuscles::test::simple::memory::pool::linkers::Data DataType;
					typedef BrainMuscles::test::simple::memory::pool::linkers::Links LinksType;
				public:
					typedef typename LinkersType::ConditionFunctionType ConditionFunctionType;
				private:
					std::size_t m_allocation;
					std::size_t m_size;
					LinkersType m_list;
				public:
					Pool();
					~Pool();
				public:
					void* Allocation(const std::size_t& size);
					void Free(void* block);
					void FreeIf(void* block, ConditionFunctionType condition);
				public:
					std::size_t Allocation();
					std::size_t ListAllocation();
					std::size_t Size();
				};

				Pool::Pool() :
					m_allocation(0),
					m_size(0)
				{}

				Pool::~Pool()
				{
					if (m_size != 0)
					{
						m_list.Clear();
					}
				}

				void* Pool::Allocation(const std::size_t& size)
				{
					void* block = std::malloc(size);
					if (block)
					{
						m_list.Push(DataType(size, block));
						++m_size;
						m_allocation += size;
					}
					return block;
				}

				void Pool::FreeIf(void* block, ConditionFunctionType condition)
				{
					DataType data = m_list.PopIf(block, condition);
					if (data.GetSize() != 0)
					{
						--m_size;
						m_allocation -= data.GetSize();
						std::free(data.GetBlock());
					}
				}

				void Pool::Free(void* block)
				{
					FreeIf(block, LinkersType::DefaultFindCondition);
				}

				std::size_t Pool::Allocation()
				{
					return m_allocation;
				}

				std::size_t Pool::ListAllocation()
				{
					return m_size * sizeof(LinksType);
				}

				std::size_t Pool::Size()
				{
					return m_size;
				}
			}
		}
	}
}
#endif

#endif //!TEST_SIMPLE_MEMORY_POOL_H_