#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACEBACK_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACEBACK_H_

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
					template<typename DERIVED>
					class M_EmplaceBack;
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
					template<typename DERIVED>
					class M_EmplaceBack
					{
					protected:
						M_EmplaceBack();
					public:
						virtual ~M_EmplaceBack();
					protected:
						virtual DERIVED* ThisDerived() = 0;
					public:
						template<typename... ARGS>
						void EmplaceBack(ARGS&&... args);
					};

					template<typename DERIVED>
					M_EmplaceBack<DERIVED>::M_EmplaceBack()
					{}

					template<typename DERIVED>
					M_EmplaceBack<DERIVED>::~M_EmplaceBack()
					{}

					template<typename DERIVED>
					template<typename... ARGS>
					void M_EmplaceBack<DERIVED>::EmplaceBack(ARGS&&... args)
					{
						ThisDerived()->OnRequestEmplaceBack(args...);
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACEBACK_H_