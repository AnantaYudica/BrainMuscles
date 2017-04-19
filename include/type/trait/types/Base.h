#ifndef TYPE_TRAIT_TYPES_BASE_H_
#define TYPE_TRAIT_TYPES_BASE_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace types
			{
				template<typename CURRENT_TYPE, typename... TYPES>
				class Base;
			}
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace types
			{
				template<typename CURRENT_TYPE, typename... TYPES>
				class Base :
					public Base<TYPES...>
				{
				public:
					typedef Base<CURRENT_TYPE, TYPES...> Current;
					typedef CURRENT_TYPE Type;
					typedef Base<TYPES...> Next;
				private:
					Type m_value;
				public:
					constexpr Base(CURRENT_TYPE value, TYPES... values);
					constexpr Type GetValue() const;
					constexpr void SetValue(const Type& value = 0) const;
				};

				template<typename CURRENT_TYPE>
				class Base<CURRENT_TYPE>
				{
				public:
					typedef Base<CURRENT_TYPE> Current;
					typedef CURRENT_TYPE Type;
					typedef void Next;
				private:
					Type m_value;
				public:
					constexpr Base(CURRENT_TYPE value);
					constexpr Type GetValue() const;
					constexpr void SetValue(const Type& value = 0) const;
				};

				template<typename CURRENT_TYPE, typename... TYPES>
				constexpr Base<CURRENT_TYPE, TYPES...>::Base(CURRENT_TYPE value, TYPES... values) :
					Next(values...),
					m_value(value)
				{

				}

				template<typename CURRENT_TYPE, typename... TYPES>
				constexpr typename Base<CURRENT_TYPE, TYPES...>::Type Base<CURRENT_TYPE, TYPES...>::GetValue() const
				{
					return m_value;
				}

				template<typename CURRENT_TYPE, typename... TYPES>
				constexpr void Base<CURRENT_TYPE, TYPES...>::SetValue(const Type& value) const
				{
					m_value = value;
				}


				template<typename CURRENT_TYPE>
				constexpr Base<CURRENT_TYPE>::Base(CURRENT_TYPE value) :
					m_value(value)
				{

				}

				template<typename CURRENT_TYPE>
				constexpr typename Base<CURRENT_TYPE>::Type Base<CURRENT_TYPE>::GetValue() const
				{
					return m_value;
				}

				template<typename CURRENT_TYPE>
				constexpr void Base<CURRENT_TYPE>::SetValue(const Type& value) const
				{
					m_value = value;
				}
			}
		}
	}
}

#endif //!TYPE_TRAIT_TYPES_BASE_H_