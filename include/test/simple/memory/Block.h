#ifndef TEST_SIMPLE_MEMORY_BLOCK_H_
#define TEST_SIMPLE_MEMORY_BLOCK_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\memory\block\Data.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace memory
			{
				class Block
				{
				public:
					typedef BrainMuscles::test::simple::memory::block::Header HeaderDataType;
				private:
					HeaderDataType* m_headerBlock;
					void* m_bodyBlock;
				public:
					Block(void * block);
				public:
					template<typename TYPE, std::size_t SIZE>
					static std::size_t GetAllocationSize();
				public:
					HeaderDataType* GetBlockHeader();
					void* GetBlockBody();
				};

				Block::Block(void * block) :
					m_headerBlock(reinterpret_cast<HeaderDataType*>(block)),
					m_bodyBlock(reinterpret_cast<HeaderDataType*>(block) + 1)
				{}

				template<typename TYPE, std::size_t SIZE>
				std::size_t Block::GetAllocationSize()
				{
					return sizeof(BrainMuscles::test::simple::memory::block::Data<TYPE, SIZE>);
				}

				typename Block::HeaderDataType*
				Block::GetBlockHeader()
				{
					return m_headerBlock;
				}

				void* Block::GetBlockBody()
				{
					return m_bodyBlock;
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_MEMORY_BLOCK_H_