#ifndef TEST_SOURCE_STAGE_H_
#define TEST_SOURCE_STAGE_H_

#ifdef _USING_TEST_SOURCE_

#include "test/source/Environment.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			class Stage
			{
			private:
				unsigned char m_value;
			public:
				inline Stage();
			private:
				inline bool IsHasNotTest();
				inline bool IsHasPreTest();
				inline bool IsHasTest();
				inline bool IsHasPostTest();
				inline bool IsHasEnd();
			private:
				inline void SetNotTest();
				inline void SetPreTest();
				inline void SetTest();
				inline void SetPostTest();
				inline void SetEnd();
			public:
				inline bool IsBegin() const;
				inline bool IsNotTest() const;
				inline bool IsPreTest() const;
				inline bool IsTest() const;
				inline bool IsPostTest() const;
				inline bool IsEnd() const;
			public:
				inline bool CanBeginStage();
				inline bool CanPreTestStage();
				inline bool CanTestStage();
				inline bool CanPostTestStage();
				inline bool CanEndStage();
			};

			inline Stage::Stage() :
				m_value(0)
			{}

			inline bool Stage::IsHasNotTest()
			{
				return m_value & 1;
			}

			inline bool Stage::IsHasPreTest()
			{
				return m_value & 2;
			}

			inline bool Stage::IsHasTest()
			{
				return m_value & 4;
			}

			inline bool Stage::IsHasPostTest()
			{
				return m_value & 8;
			}

			inline bool Stage::IsHasEnd()
			{
				return m_value & 16;
			}

			inline void Stage::SetNotTest()
			{
				m_value |= 1;
			}

			inline void Stage::SetPreTest()
			{
				m_value |= 2;
			}

			inline void Stage::SetTest()
			{
				m_value |= 4;
			}

			inline void Stage::SetPostTest()
			{
				m_value |= 8;
			}

			inline void Stage::SetEnd()
			{
				m_value |= 16;
			}

			inline bool Stage::IsBegin() const
			{
				return m_value == 0;
			}

			inline bool Stage::IsNotTest() const
			{
				return m_value == 1;
			}

			inline bool Stage::IsPreTest() const
			{
				return m_value >= 2 && m_value < 4;
			}

			inline bool Stage::IsTest() const
			{
				return m_value >= 4 && m_value < 8;
			}

			inline bool Stage::IsPostTest() const
			{
				return m_value >= 8 && m_value < 16;
			}

			inline bool Stage::IsEnd() const
			{
				return m_value >= 16;
			}

			inline bool Stage::CanBeginStage()
			{
				if (IsBegin())
				{
					SetNotTest();
					return true;
				}
				return false;
			}

			inline bool Stage::CanPreTestStage()
			{
				if (IsNotTest())
				{
					SetPreTest();
					return true;
				}
				return false;
			}

			inline bool Stage::CanTestStage()
			{
				if (IsNotTest() || IsPreTest())
				{
					SetTest();
					return true;
				}
				return false;
			}

			inline bool Stage::CanPostTestStage()
			{
				if (IsTest())
				{
					SetPostTest();
					return true;
				}
				return false;
			}

			inline bool Stage::CanEndStage()
			{
				if (!IsEnd())
				{
					SetPostTest();
					return true;
				}
				return false;
			}
		}
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_STAGE_H_