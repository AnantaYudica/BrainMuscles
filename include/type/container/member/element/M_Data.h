#ifndef TYPE_CONTAINER_MEMBER_ELEMENT_M_DATA_H_
#define TYPE_CONTAINER_MEMBER_ELEMENT_M_DATA_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace element
				{
					template<typename VALUE_TYPE>
					class M_Data;
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
				namespace element
				{
					template<typename VALUE_TYPE>
					class M_Data
					{
					protected:
						M_Data();
					public:
						virtual ~M_Data();
						virtual VALUE_TYPE* Data() = 0;
						virtual const VALUE_TYPE* Data() const = 0;
					};

					template<typename VALUE_TYPE>
					M_Data<VALUE_TYPE>::M_Data()
					{}

					template<typename VALUE_TYPE>
					M_Data<VALUE_TYPE>::~M_Data()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ELEMENT_M_DATA_H_