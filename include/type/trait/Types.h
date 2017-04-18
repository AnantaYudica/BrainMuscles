#ifndef TYPE_TRAIT_TYPES_H
#define TYPE_TRAIT_TYPES_H

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template<typename CURRENT_TYPE, typename... TYPES>
			class Types;
		}
	}

}

#include "type\trait\types\GetIndex.h"
#include "type\trait\types\GetSize.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template<typename CURRENT_TYPE, typename... TYPES>
			class Types:
				public Types<TYPES...>
			{
			public:
				typedef Types<CURRENT_TYPE, TYPES...> Current;
				typedef CURRENT_TYPE Type;
				typedef Types<TYPES...> Next;
			private:
				Type m_value;
			public:
				constexpr Types(CURRENT_TYPE value, TYPES... values);
				constexpr Type GetValue() const;
				constexpr void SetValue(const Type& value = 0) const;
			};

			template<typename CURRENT_TYPE>
			class Types<CURRENT_TYPE>
			{
			public:
				typedef Types<CURRENT_TYPE> Current;
				typedef CURRENT_TYPE Type;
				typedef void Next;
			private:
				Type m_value;
			public:
				constexpr Types(CURRENT_TYPE value);
				constexpr Type GetValue() const;
				constexpr void SetValue(const Type& value = 0) const;
			};

			template<typename CURRENT_TYPE, typename... TYPES>
			constexpr Types<CURRENT_TYPE, TYPES...>::Types(CURRENT_TYPE value, TYPES... values) :
				Next(values...),
				m_value(value)
			{
			
			}

			template<typename CURRENT_TYPE, typename... TYPES>
			constexpr typename Types<CURRENT_TYPE, TYPES...>::Type Types<CURRENT_TYPE, TYPES...>::GetValue() const
			{
				return m_value;
			}

			template<typename CURRENT_TYPE, typename... TYPES>
			constexpr void Types<CURRENT_TYPE, TYPES...>::SetValue(const Type& value) const
			{
				m_value = value;
			}

			template<typename CURRENT_TYPE>
			constexpr Types<CURRENT_TYPE>::Types(CURRENT_TYPE value) :
				m_value(value)
			{
			
			}

			template<typename CURRENT_TYPE>
			constexpr typename Types<CURRENT_TYPE>::Type Types<CURRENT_TYPE>::GetValue() const
			{
				return m_value;
			}

			template<typename CURRENT_TYPE>
			constexpr void Types<CURRENT_TYPE>::SetValue(const Type& value) const
			{
				m_value = value;
			}
		}
	}
}


#endif //! TYPE_TRAIT_TYPES_H