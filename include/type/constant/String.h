#ifndef TYPE_CONSTANT_STRING_H_
#define TYPE_CONSTANT_STRING_H_

#include <string.h>

namespace BrainMuscles
{
	namespace type
	{
		namespace constant
		{
			class String;
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		namespace constant
		{
			class String
			{
			public:
				typedef bool(*FunctionConditionType)(const char ch);
			private:
				const size_t m_size;
				const char * m_string;
				constexpr size_t Find(const char ch, const size_t start, size_t result) const;
				constexpr size_t ReverseFind(const char find, const size_t  start, size_t result) const;
			public:
				constexpr String();
				template<size_t N>
				constexpr String(const char(&str)[N]);
				constexpr String(const String & str);

				constexpr const char * Value(const size_t index = 0) const;
				constexpr const size_t Size(const size_t start = 0) const;
				constexpr const size_t CSize(const size_t start = 0) const;
				constexpr size_t Find(FunctionConditionType cond, const size_t start = 0) const;
				constexpr size_t Find(const char find, const size_t start = 0) const;
				constexpr size_t ReverseFind(FunctionConditionType cond, const size_t start) const;
				constexpr size_t ReverseFind(FunctionConditionType cond) const;
				constexpr size_t ReverseFind(const char find, const size_t start) const;
				constexpr size_t ReverseFind(const char find) const;
				constexpr bool IsEnd(const size_t index) const;

				constexpr char operator[] (size_t index) const;

				template<size_t N>
				static void CopyToCString(const char(&str)[N], char * copy, const size_t start, const size_t size);

				template<size_t N>
				static void CopyToCString(const char(&str)[N], char * copy, const size_t start = 0);

				template<size_t N>
				static constexpr const size_t Find(const char(&str)[N], const char find, const size_t start = 0);
			};

			constexpr size_t String::Find(const char ch, const size_t start, size_t result) const
			{
				return start == m_size ? m_size : (m_string[start] == ch ? result : Find(ch, start + 1, result + 1));
			}

			constexpr size_t String::ReverseFind(const char find, const size_t start, size_t result) const
			{
				return m_string[start] == find ? result : (start == 0 ? m_size : ReverseFind(find, start - 1, result - 1));
			}


			constexpr String::String() :
				m_string(""),
				m_size(0)
			{
			}

			template<size_t N>
			constexpr String::String(const char(&str)[N]) :
				m_string(str),
				m_size(N - 1)
			{
			}

			constexpr String::String(const String & str) :
				m_string(str.m_string),
				m_size(str.m_size)
			{
			}

			constexpr const char * String::Value(const size_t index) const
			{
				return m_string + index;
			}

			constexpr const size_t String::Size(const size_t start) const
			{
				return m_size - start;
			}

			constexpr const size_t String::CSize(const size_t start) const
			{
				return Size(start) + 1;
			}

			constexpr size_t String::Find(FunctionConditionType cond, const size_t start) const
			{
				return start == m_size ? m_size : (cond(m_string[start]) ? start : Find(cond, start + 1));
			}

			constexpr size_t String::Find(const char find, const size_t start) const
			{
				return Find(find, start, start);
			}

			constexpr size_t String::ReverseFind(FunctionConditionType cond, const size_t start) const
			{
				return start == m_size ? m_size : (cond(m_string[start]) ? start : ReverseFind(cond, start - 1));
			}

			constexpr size_t String::ReverseFind(FunctionConditionType cond) const
			{
				return ReverseFind(cond, m_size - 1);
			}

			constexpr size_t String::ReverseFind(const char find, const size_t start) const
			{
				return ReverseFind(find, start, start);
			}

			constexpr size_t String::ReverseFind(const char find) const
			{
				return ReverseFind(find, m_size - 1);
			}

			constexpr bool String::IsEnd(const size_t index) const
			{
				return m_size == index;
			}

			constexpr char String::operator[] (size_t index) const
			{
				return m_string[index];
			}
			
			template<size_t N>
			void String::CopyToCString(const char(&str)[N], char * copy, const size_t start, const size_t size)
			{
				if (copy)
				{
					memcpy(copy, str + start, size);
					copy[size - 1] = 0;
				}
			}

			template<size_t N>
			void String::CopyToCString(const char(&str)[N], char * copy, const size_t start )
			{
				CopyToCString(str, copy, start, N - start);
			}

			template<size_t N>
			constexpr const size_t String::Find(const char(&str)[N], const char find, const size_t start)
			{
				return start == N ? N : (str[start] == find ? start : Find(str, find, start + 1));
			}

		}
	}
}

#endif // !TYPE_CONST_STRING_H_