#ifndef TYPE_CONTAINER_MEMBER_ELEMENT_M_FIRST_H_
#define TYPE_CONTAINER_MEMBER_ELEMENT_M_FIRST_H_

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
					class M_First;
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
					class M_First
					{
					protected:
						M_First();
					public:
						virtual ~M_First();
						virtual REFERENCE_TYPE Front() = 0;
						virtual CONST_REFERENCE_TYPE Front() const = 0;
					};

					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE>
					M_First<REFERENCE_TYPE, CONST_REFERENCE_TYPE>::M_First()
					{}

					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE>
					M_First<REFERENCE_TYPE, CONST_REFERENCE_TYPE>::~M_First()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ELEMENT_M_FIRST_H_