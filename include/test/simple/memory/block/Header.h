#ifndef TEST_SIMPLE_MEMORY_BLOCK_HEADER_H_
#define TEST_SIMPLE_MEMORY_BLOCK_HEADER_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include <typeindex>

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace memory
			{
				namespace block
				{
					class Header
					{
					private:
						std::size_t m_allocation;
						std::size_t m_size;
						std::type_index m_indexType;
					public:
						Header();
						Header(const std::size_t& size, const std::size_t& allocation, const std::type_index& type_index);
						Header(const Header& header);
						Header(Header* ptr_header);
					public:
						~Header();
					public:
						const std::size_t& GetSize();
						const std::size_t& GetAllocation();
						const std::type_index& GetTypeIndex();
					};
					
					Header::Header() :
						m_allocation(0),
						m_size(0),
						m_indexType(typeid(void))
					{}

					Header::Header(const std::size_t& size, const std::size_t& allocation, const std::type_index& type_index) :
						m_size(size),
						m_allocation(allocation),
						m_indexType(type_index)
					{}

					Header::Header(const Header& header) :
						m_size(header.m_size),
						m_allocation(header.m_allocation),
						m_indexType(header.m_indexType)
					{}
					
					Header::Header(Header* ptr_header) :
						m_size(ptr_header->m_size),
						m_allocation(ptr_header->m_allocation),
						m_indexType(ptr_header->m_indexType)
					{}

					Header::~Header()
					{}

					const std::size_t& Header::GetSize()
					{
						return m_size;
					}

					const std::size_t& Header::GetAllocation()
					{
						return m_allocation;
					}

					const std::type_index& Header::GetTypeIndex()
					{
						return m_indexType;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_MEMORY_BLOCK_HEADER_H_