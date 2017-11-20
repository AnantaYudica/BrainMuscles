#ifndef TEST_SIMPLE_MEMORY_BLOCK_DATA_H_
#define TEST_SIMPLE_MEMORY_BLOCK_DATA_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/memory/block/Header.h"
#include "test/simple/memory/block/Body.h"

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
					template<class TYPE, std::size_t SIZE = 1>
					class Data :
						public BrainMuscles::test::simple::memory::block::Header,
						public BrainMuscles::test::simple::memory::block::Body<TYPE, SIZE>
					{
					public:
						typedef BrainMuscles::test::simple::memory::block::Header HeaderDataType;
						typedef BrainMuscles::test::simple::memory::block::Body<TYPE, SIZE> BodyDataType;
					public:
						Data();
						Data(const BodyDataType& body_data);
						Data(BodyDataType* ptr_body_data);
						Data(const Data& data);
						Data(Data* ptr_data);
					public:
						HeaderDataType& GetHeaderData();
						BodyDataType& GetBodyData();
					};

					template<class TYPE, std::size_t SIZE>
					Data<TYPE, SIZE>::Data() :
						HeaderDataType(SIZE, sizeof(TYPE) * SIZE, typeid(TYPE))
					{}

					template<class TYPE, std::size_t SIZE>
					Data<TYPE, SIZE>::Data(const BodyDataType& body_data) :
						HeaderDataType(SIZE, sizeof(TYPE) * SIZE, typeid(TYPE)),
						BodyDataType(body_data)
					{}

					template<class TYPE, std::size_t SIZE>
					Data<TYPE, SIZE>::Data(BodyDataType* ptr_body_data) :
						HeaderDataType(SIZE, sizeof(TYPE) * SIZE, typeid(TYPE)),
						BodyDataType(ptr_body_data)
					{}

					template<class TYPE, std::size_t SIZE>
					Data<TYPE, SIZE>::Data(const Data& data) :
						HeaderDataType(SIZE, sizeof(TYPE) * SIZE, typeid(TYPE)),
						BodyDataType(data)
					{}

					template<class TYPE, std::size_t SIZE>
					Data<TYPE, SIZE>::Data(Data* ptr_data) :
						HeaderDataType(SIZE, sizeof(TYPE) * SIZE, typeid(TYPE)),
						BodyDataType(ptr_data)
					{}

					template<class TYPE, std::size_t SIZE>
					typename Data<TYPE, SIZE>::HeaderDataType& Data<TYPE, SIZE>::GetHeaderData()
					{
						return *this;
					}

					template<class TYPE, std::size_t SIZE>
					typename Data<TYPE, SIZE>::BodyDataType& Data<TYPE, SIZE>::GetBodyData()
					{
						return *this;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_MEMORY_BLOCK_DATA_H_