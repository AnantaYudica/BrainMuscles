#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_FILL_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_FILL_H_

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
					class M_Fill;
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
					class M_Fill
					{
					protected:
						M_Fill();
					public:
						virtual ~M_Fill();
						virtual void Fill(const VALUE_TYPE& value) = 0;
					};

					template<typename VALUE_TYPE>
					M_Fill<VALUE_TYPE>::M_Fill()
					{}

					template<typename VALUE_TYPE>
					M_Fill<VALUE_TYPE>::~M_Fill()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_FILL_H_