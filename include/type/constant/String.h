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
				template<size_t N>
				constexpr size_t Find(const char(&str)[N], const size_t start, const size_t start_str, size_t result, size_t index_str) const;
				template<size_t N>
				constexpr size_t ReverseFind(const char(&str)[N], const size_t start, const size_t start_str, size_t result, size_t index_str) const;
				template<size_t N, size_t M>
				static constexpr size_t FindCString(const char(&str)[N], const char(&str_find)[M], const size_t start, const size_t start_str, size_t result, size_t index_str);
				template<size_t N, size_t M>
				static constexpr size_t ReverseFindCString(const char(&str)[N], const char(&str_find)[M], const size_t start, const size_t start_str, size_t result, size_t index_str);
			public:
				constexpr String();
				template<size_t N>
				constexpr String(const char(&str)[N]);
				constexpr String(const String & str);

				constexpr const char * Value(const size_t index = 0) const;
				constexpr const size_t Size(const size_t start = 0) const;
				constexpr const size_t CSize(const size_t start = 0) const;
				template<size_t N>
				static constexpr const size_t CSize(const char(&str)[N], const size_t start = 0);
				constexpr size_t Find(FunctionConditionType cond, const size_t start = 0) const;
				constexpr size_t Find(const char find, const size_t start = 0) const;
				template<size_t N>
				constexpr size_t Find(const char(&str)[N], const size_t start = 0, const size_t start_str = 0) const;

				constexpr size_t ReverseFind(FunctionConditionType cond, const size_t start) const;
				constexpr size_t ReverseFind(FunctionConditionType cond) const;
				constexpr size_t ReverseFind(const char find, const size_t start) const;
				constexpr size_t ReverseFind(const char find) const;

				template<size_t N>
				constexpr size_t ReverseFind(const char(&str)[N], const size_t start, const size_t start_str) const;
				template<size_t N>
				constexpr size_t ReverseFind(const char(&str)[N], const size_t start) const;
				template<size_t N>
				constexpr size_t ReverseFind(const char(&str)[N]) const;

				constexpr bool IsEnd(const size_t index) const;

				constexpr char operator[] (size_t index) const;

				template<size_t N>
				static void CopyToCString(const char(&str)[N], char * copy, const size_t start, const size_t size);

				template<size_t N>
				static void CopyToCString(const char(&str)[N], char * copy, const size_t start = 0);

				template<size_t N>
				static constexpr size_t FindChar(const char(&str)[N], const char find, const size_t start = 0);

				template<size_t N>
				static constexpr size_t FindCharWithCondition(const char(&str)[N], FunctionConditionType cond, const size_t start = 0);

				template<size_t N>
				static constexpr size_t ReverseFindCharWithCondition(const char(&str)[N], FunctionConditionType cond, const size_t start = N - 2);
				
				template<size_t N>
				static constexpr size_t ReverseFindChar(const char(&str)[N], const char find, const size_t start = N - 1);

				template<size_t N>
				static constexpr bool IsEndOfString(const char(&str)[N], const size_t index);
			
				template<size_t N, size_t M>
				static constexpr size_t FindCString(const char(&str)[N], const char(&str_find)[M], const size_t start = 0, const size_t start_str_find = 0);

				template<size_t N, size_t M>
				static constexpr size_t ReverseFindCString(const char(&str)[N], const char(&str_find)[M], const size_t start = N - 2, const size_t start_str_find = M - 2);
			};

			constexpr size_t String::Find(const char ch, const size_t start, size_t result) const
			{
				return start == m_size ? m_size : (m_string[start] == ch ? result : Find(ch, start + 1, result + 1));
			}

			constexpr size_t String::ReverseFind(const char find, const size_t start, size_t result) const
			{
				return m_string[start] == find ? result : (start == 0 ? m_size : ReverseFind(find, start - 1, result - 1));
			}

			template<size_t N>
			constexpr size_t String::Find(const char(&str)[N], const size_t start, const size_t start_str, size_t result, size_t index_str) const
			{
				return m_string[start] == str[index_str] ? (index_str == N - 2 ? result : (start == m_size - 1 ? m_size : Find(str, start + 1, start_str, result, index_str + 1))) : (start == m_size - 1 ? m_size : Find(str, start + 1, start_str, start + 1, start_str));
			}

			template<size_t N>
			constexpr size_t String::ReverseFind(const char(&str)[N], const size_t start, const size_t start_str, size_t result, size_t index_str) const
			{
				return m_string[start] == str[index_str] ? (index_str == 0 ? result : (start == 0 ? m_size : ReverseFind(str, start -1, start_str, result, index_str - 1))) : (start == 0 ? m_size : ReverseFind(str, start - 1, start_str, start - 1, start_str));
			}

			template<size_t N, size_t M>
			static constexpr size_t String::FindCString(const char(&str)[N], const char(&str_find)[M], const size_t start, const size_t start_str, size_t result, size_t index_str)
			{
				return str[start] == str_find[index_str] ? (index_str == M - 2 ? result : (start == N - 2 ? N - 1 : FindCString(str, str_find, start + 1, start_str, result, index_str + 1))) : (start == N - 2 ? N - 1 : FindCString(str, str_find, start + 1, start_str, start + 1, start_str));
			}

			template<size_t N, size_t M>
			static constexpr size_t String::ReverseFindCString(const char(&str)[N], const char(&str_find)[M], const size_t start_str, const size_t start_str_find, size_t result, size_t index_str_find)
			{
				return str[start_str] == str_find[index_str_find] ? (index_str_find == 0 ? result : (start_str == 0 ? N - 1 : ReverseFindCString(str, str_find, start_str - 1, start_str_find, result, index_str_find - 1))) : (start_str == 0 ? N - 1 : ReverseFindCString(str, str_find, start_str - 1, start_str_find, start_str - 1, start_str_find));
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

			template<size_t N>
			constexpr const size_t String::CSize(const char(&str)[N], const size_t start)
			{
				return N - start;
			}

			constexpr size_t String::Find(FunctionConditionType cond, const size_t start) const
			{
				return start == m_size ? m_size : (cond(m_string[start]) ? start : Find(cond, start + 1));
			}

			constexpr size_t String::Find(const char find, const size_t start) const
			{
				return Find(find, start, start);
			}

			template<size_t N>
			constexpr size_t String::Find(const char(&str)[N], const size_t start, const size_t start_str) const
			{
				return Find(str, start, start_str, start, start_str);
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

			template<size_t N>
			constexpr size_t String::ReverseFind(const char(&str)[N], const size_t start, const size_t start_str) const
			{
				return ReverseFind(str, start, start_str, start, start_str);
			}

			template<size_t N>
			constexpr size_t String::ReverseFind(const char(&str)[N], const size_t start) const
			{
				return ReverseFind(str, start, N - 2, start, N - 2);
			}

			template<size_t N>
			constexpr size_t String::ReverseFind(const char(&str)[N]) const
			{
				return String::ReverseFind(str, m_size - 1);
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
			constexpr size_t String::FindChar(const char(&str)[N], const char find, const size_t start)
			{
				return start == (N - 1) ? (N - 1) : (str[start] == find ? start : FindChar(str, find, start + 1));
			}

			template<size_t N>
			constexpr size_t String::FindCharWithCondition(const char(&str)[N], FunctionConditionType cond, const size_t start)
			{
				return start == (N - 1) ? (N - 1) : (cond(str[start]) ? start : FindCharWithCondition(str, cond, start + 1));
			}

			template<size_t N>
			constexpr size_t String::ReverseFindCharWithCondition(const char(&str)[N], FunctionConditionType cond, const size_t start)
			{
				return cond(str[start]) ? start : (start == 0 ? N - 1 : ReverseFindCharWithCondition(str, cond, start - 1));
			}

			template<size_t N>
			constexpr size_t String::ReverseFindChar(const char(&str)[N], const char find, const size_t start)
			{
				return str[start] == find ? start : (start == 0 ? N - 1 : ReverseFindChar(str, find, start - 1));
			}

			template<size_t N>
			constexpr bool String::IsEndOfString(const char(&str)[N], const size_t index)
			{
				return (N - 1) == index;
			}

			template<size_t N, size_t M>
			constexpr size_t String::FindCString(const char(&str)[N], const char(&str_find)[M], const size_t start, const size_t start_str_find)
			{
				return FindCString(str, str_find, start, start_str_find, start, start_str_find);
			}

			template<size_t N, size_t M>
			constexpr size_t String::ReverseFindCString(const char(&str)[N], const char(&str_find)[M], const size_t start, const size_t start_str_find)
			{
				return ReverseFindCString(str, str_find, start, start_str_find, start, start_str_find);
			}

		}
	}
}

#endif // !TYPE_CONST_STRING_H_