#ifndef TEST_SOURCE_STAGE_H_
#define TEST_SOURCE_STAGE_H_

#ifdef _USING_TEST_SOURCE_

#include "test\source\Environment.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			class Stage
			{
			private:
				char m_value;
			public:
				inline Stage();
			private:
				inline bool IsHasPreTest();
				inline bool IsHasTest();
				inline bool IsHasPostTest();
			public:
				inline bool IsNotTest() const;
				inline bool IsPreTest() const;
				inline bool IsTest() const;
				inline bool IsPostTest() const;
				inline void SetPreTest();
				inline void SetTest();
				inline void SetPostTest();
			};

			inline Stage::Stage() :
				m_value(0)
			{}

			inline bool Stage::IsHasPreTest()
			{
				return m_value & 1;
			}

			inline bool Stage::IsHasTest()
			{
				return m_value & 2;
			}

			inline bool Stage::IsHasPostTest()
			{
				return m_value & 4;
			}

			inline bool Stage::IsNotTest() const
			{
				return m_value == 0;
			}

			inline bool Stage::IsPreTest() const
			{
				return m_value == 1;
			}

			inline bool Stage::IsTest() const
			{
				return m_value >= 2 && m_value < 4;
			}

			inline bool Stage::IsPostTest() const
			{
				return m_value >= 4 && m_value < 8;
			}

			inline void Stage::SetPreTest()
			{
				if (IsNotTest())
				{
					m_value |= 1;
				}
				else
				{
					//todo error
				}
			}

			inline void Stage::SetTest()
			{
				if (IsNotTest() || IsPreTest())
				{
					m_value |= 2;
				}
				else
				{
					//todo error	
				}
			}

			inline void Stage::SetPostTest()
			{
				if (IsTest())
				{
					m_value |= 4;
				}
				else
				{
					//todo error	
				}
			}
		}
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_STAGE_H_