#ifndef TEST_SIMPLE_MEMORY_POOL_LINKERS_H_
#define TEST_SIMPLE_MEMORY_POOL_LINKERS_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/memory/pool/linkers/Links.h"

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
					class Linkers
					{
					public:
						typedef BrainMuscles::test::simple::memory::pool::linkers::Data DataType;
						typedef BrainMuscles::test::simple::memory::pool::linkers::Links LinksType;
						typedef bool(&ConditionFunctionType)(void* input, void* compare);
					private:
						LinksType* m_head;
						LinksType* m_tail;
					public:
						Linkers();
						~Linkers();
					public:
						static bool DefaultFindCondition(void* input, void* compare);
					private:
						bool IsHeadNull();
						bool IsHeadAndTail();
						LinksType* FindIf(void* block, ConditionFunctionType condition = DefaultFindCondition);
						void PushHead(const DataType& data);
						void PushTail(const DataType& data);
						void PopHead();
						void PopTail();
						void PopBody(LinksType* curr);
					public:
						void Push(const DataType& data);
						DataType PopIf(void* block, ConditionFunctionType condition);
						DataType Pop(void* block);
						void Clear();
					};

					Linkers::Linkers() :
						m_head(0),
						m_tail(0)
					{}

					Linkers::~Linkers()
					{}

					bool Linkers::DefaultFindCondition(void* input, void* compare)
					{
						return input == compare;
					}

					bool Linkers::IsHeadNull()
					{
						return m_head == 0;
					}

					bool Linkers::IsHeadAndTail()
					{
						return m_head == m_tail;
					}

					typename Linkers::LinksType*
					Linkers::FindIf(void* block, ConditionFunctionType condition)
					{
						if (IsHeadNull())
						{
							return 0;
						}
						LinksType* curr = m_head;
						while (curr != 0)
						{
							if (condition(block, curr->GetBlock()))
							{
								return curr;
							}
							curr = curr->GetNext();
						}
						return 0;
					}

					void Linkers::PushHead(const DataType& data)
					{
						m_head = m_tail = new LinksType(data);
					}

					void Linkers::PushTail(const DataType& data)
					{
						m_tail->SetNext(new LinksType(data));
						m_tail->GetNext()->SetPrev(m_tail);
						m_tail = m_tail->GetNext();
					}

					void Linkers::PopHead()
					{
						if (IsHeadNull())
						{
							return;
						}
						if (IsHeadAndTail())
						{
							delete m_head;
							m_head = m_tail = 0;
						}
						else
						{
							LinksType* curr = m_head;
							m_head = m_head->GetNext();
							m_head->SetPrev(0);
							delete curr;
						}
					}

					void Linkers::PopTail()
					{
						if (IsHeadNull())
						{
							return;
						}
						if (IsHeadAndTail())
						{
							PopHead();
						}
						else
						{
							LinksType* curr = m_tail;
							m_tail = m_tail->GetPrev();
							m_tail->SetNext(0);
							delete curr;
						}
					}

					void Linkers::PopBody(LinksType* curr)
					{
						if (curr == 0)
						{
							return;
						}
						else if (curr == m_head)
						{
							PopHead();
						}
						else if (curr == m_tail)
						{
							PopTail();
						}
						else
						{
							curr->GetPrev()->SetNext(curr->GetNext());
							curr->GetNext()->SetPrev(curr->GetPrev());
							delete curr;
						}
					}

					void Linkers::Push(const DataType& data)
					{
						if(IsHeadNull())
						{
							PushHead(data);
						}
						else
						{
							PushTail(data);
						}
					}

					typename Linkers::DataType
					Linkers::PopIf(void* block, ConditionFunctionType condition)
					{
						LinksType* curr = FindIf(block, condition);
						if (curr == 0)
						{
							return DataType(0, 0);
						}
						DataType data(curr);
						PopBody(curr);
						return data;
					}

					typename Linkers::DataType 
					Linkers::Pop(void* block)
					{
						return PopIf(block, Linkers::DefaultFindCondition);
					}

					void Linkers::Clear()
					{
						while (!IsHeadNull())
						{
							PopTail();
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_MEMORY_POOL_LINKERS_H_