#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_RESIZE_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_RESIZE_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace capacity
				{
					template<typename SIZE_TYPE, typename VALUE_TYPE>
					class M_Resize;
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
				namespace capacity
				{
					template<typename SIZE_TYPE, typename VALUE_TYPE>
					class M_Resize
					{
					protected:
						M_Resize();
					public:
						virtual ~M_Resize();
						virtual void Resize(SIZE_TYPE n) = 0;
						virtual void Resize(SIZE_TYPE n, const VALUE_TYPE& val) = 0;
					};

					template<typename SIZE_TYPE, typename VALUE_TYPE>
					M_Resize<SIZE_TYPE, VALUE_TYPE>::M_Resize()
					{}

					template<typename SIZE_TYPE, typename VALUE_TYPE>
					M_Resize<SIZE_TYPE, VALUE_TYPE>::~M_Resize()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_RESIZE_H_