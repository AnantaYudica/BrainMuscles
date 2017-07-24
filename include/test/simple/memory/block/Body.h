#ifndef TEST_SIMPLE_MEMORY_BLOCK_BODY_H_
#define TEST_SIMPLE_MEMORY_BLOCK_BODY_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <cstddef>
#include <algorithm>

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
					class Body
					{
						static_assert(SIZE > 0, "Required SIZE > 0");
					public:
						typedef TYPE(&ReferenceValueType)[SIZE];
						typedef const TYPE(&ConstReferenceValueType)[SIZE];
						typedef Body<TYPE, SIZE> BodyType;
					private:
						TYPE m_value[SIZE];
					public:
						Body();
						Body(ConstReferenceValueType value);
						Body(const BodyType& body);
						Body(BodyType* ptr_body);
					public:
						ReferenceValueType Value();
					};

					template<class TYPE>
					class Body<TYPE, 1>
					{
					public:
						typedef TYPE& ReferenceValueType;
						typedef const TYPE& ConstReferenceValueType;
						typedef Body<TYPE, 1> BodyType;
					private:
						TYPE m_value;
					public:
						Body();
						Body(ConstReferenceValueType value);
						Body(const BodyType& body);
						Body(BodyType* ptr_body);
					public:
						ReferenceValueType Value();
					};

					template<class TYPE, std::size_t SIZE>
					Body<TYPE, SIZE>::Body()
					{}

					template<class TYPE, std::size_t SIZE>
					Body<TYPE, SIZE>::Body(ConstReferenceValueType value)
					{
						std::copy(value, value + SIZE, m_value);
					}

					template<class TYPE, std::size_t SIZE>
					Body<TYPE, SIZE>::Body(const BodyType& body)
					{
						std::copy(std::begin(body.m_value), std::end(body.m_value), m_value);
					}

					template<class TYPE, std::size_t SIZE>
					Body<TYPE, SIZE>::Body(BodyType* ptr_body) :
						m_value(ptr_body->m_value)
					{
						std::copy(std::begin(ptr_body->m_value), std::end(ptr_body->m_value), m_value);
					}

					template<class TYPE, std::size_t SIZE>
					typename Body<TYPE, SIZE>::ReferenceValueType 
					Body<TYPE, SIZE>::Value()
					{
						return m_value;
					}

					template<class TYPE>
					Body<TYPE, 1>::Body()
					{}

					template<class TYPE>
					Body<TYPE, 1>::Body(ConstReferenceValueType value) :
						m_value(value)
					{}

					template<class TYPE>
					Body<TYPE, 1>::Body(const BodyType& body) :
						m_value(body.m_value)
					{}

					template<class TYPE>
					Body<TYPE, 1>::Body(BodyType* ptr_body) :
						m_value(ptr_body->m_value)
					{}

					template<class TYPE>
					typename Body<TYPE, 1>::ReferenceValueType 
					Body<TYPE, 1>::Value()
					{
						return m_value;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_MEMORY_BLOCK_BODY_H_