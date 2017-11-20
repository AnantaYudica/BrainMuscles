#ifndef TEST_SIMPLE_MEMORY_POOL_LINKERS_DATA_H_
#define TEST_SIMPLE_MEMORY_POOL_LINKERS_DATA_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include <cstddef>

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
						class Data
						{
						private:
							std::size_t m_size;
							void* m_block;
						public:
							Data(const std::size_t& size, void* block);
							Data(const Data& data);
							Data(Data* ptr_data);
						public:
							const std::size_t& GetSize();
							void* GetBlock();
						public:
							bool operator==(void* block);
						};

						Data::Data(const std::size_t& size, void* block) :
							m_size(size),
							m_block(block)
						{}

						Data::Data(const Data& data) :
							m_size(data.m_size),
							m_block(data.m_block)
						{}

						Data::Data(Data* ptr_data) :
							m_size(ptr_data->m_size),
							m_block(ptr_data->m_block)
						{}

						const std::size_t& Data::GetSize()
						{
							return m_size;
						}

						void* Data::GetBlock()
						{
							return m_block;
						}

						bool Data::operator==(void* block)
						{
							return m_block == block;
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_MEMORY_POOL_LINKERS_DATA_H_