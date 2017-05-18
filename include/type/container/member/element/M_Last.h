#ifndef TYPE_CONTAINER_MEMBER_ELEMENT_M_LAST_H_
#define TYPE_CONTAINER_MEMBER_ELEMENT_M_LAST_H_

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
					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE>
					class M_Last;
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
					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE>
					class M_Last
					{
					protected:
						M_Last();
					public:
						virtual ~M_Last();
						virtual REFERENCE_TYPE Back() = 0;
						virtual CONST_REFERENCE_TYPE Back() const = 0;
					};

					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE>
					M_Last<REFERENCE_TYPE, CONST_REFERENCE_TYPE>::M_Last()
					{}

					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE>
					M_Last<REFERENCE_TYPE, CONST_REFERENCE_TYPE>::~M_Last()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ELEMENT_M_LAST_H_