#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_PUSHBACK_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_PUSHBACK_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace modifier
				{
					template<typename VALUE_TYPE>
					class M_PushBack;
				}
			}
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace modifier
				{
					template<typename VALUE_TYPE>
					class M_PopBack
					{
					protected:
						M_PushBack();
					public:
						virtual ~M_PushBack();
					public:
						virtual void push_back(const VALUE_TYPE& val) = 0;
						virtual void push_back(VALUE_TYPE&& val) = 0;
					};

					template<typename VALUE_TYPE>
					M_PopBack<VALUE_TYPE>::M_PushBack()
					{}

					template<typename VALUE_TYPE>
					M_PopBack<VALUE_TYPE>::~M_PushBack()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_PUSHBACK_H_