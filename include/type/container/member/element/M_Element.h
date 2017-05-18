#ifndef TYPE_CONTAINER_MEMBER_ELEMENT_M_ELEMENT_H_
#define TYPE_CONTAINER_MEMBER_ELEMENT_M_ELEMENT_H_

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
					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE, typename SIZE_TYPE>
					class M_Element;
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
					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE, typename SIZE_TYPE>
					class M_Element
					{
					protected:
						M_Element();
					public:
						virtual ~M_Element();
						virtual REFERENCE_TYPE At(SIZE_TYPE index) = 0;
						virtual CONST_REFERENCE_TYPE At(SIZE_TYPE index) const = 0;
						REFERENCE_TYPE operator[](SIZE_TYPE index);
						CONST_REFERENCE_TYPE operator[](SIZE_TYPE index) const;
					};

					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE, typename SIZE_TYPE>
					M_Element<REFERENCE_TYPE, CONST_REFERENCE_TYPE, SIZE_TYPE>::M_Element()
					{}

					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE, typename SIZE_TYPE>
					M_Element<REFERENCE_TYPE, CONST_REFERENCE_TYPE, SIZE_TYPE>::~M_Element()
					{}

					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE, typename SIZE_TYPE>
					REFERENCE_TYPE 
					M_Element<REFERENCE_TYPE, CONST_REFERENCE_TYPE, SIZE_TYPE>::operator[](SIZE_TYPE index)
					{
						return At(index);
					}

					template<typename REFERENCE_TYPE, typename CONST_REFERENCE_TYPE, typename SIZE_TYPE>
					CONST_REFERENCE_TYPE
					M_Element<REFERENCE_TYPE, CONST_REFERENCE_TYPE, SIZE_TYPE>::operator[](SIZE_TYPE index) const
					{
						return At(index);
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ELEMENT_M_ELEMENT_H_