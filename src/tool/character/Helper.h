#ifndef TOOL_CHARACTER_HELPER_H_
#define TOOL_CHARACTER_HELPER_H_

namespace tool
{
	namespace character
	{
		namespace helper
		{
			template<typename SIZE_TYPE, typename INDEX_TYPE>
			bool ValidationPointer(const void* pointer,
				const SIZE_TYPE& pointer_type_size, 
				const SIZE_TYPE& pointer_size,
				const INDEX_TYPE& pointer_offset,
				const SIZE_TYPE& pointer_offset_type_size);

			template<typename VALUE_TYPE, typename SIZE_TYPE,
				typename INDEX_TYPE>
			VALUE_TYPE CopyValue(const void* pointer,
				const SIZE_TYPE& pointer_type_size,
				const SIZE_TYPE& pointer_size,
				const INDEX_TYPE& pointer_offset,
				const SIZE_TYPE& pointer_offset_type_size);
		}
	}
}

template<typename SIZE_TYPE, typename INDEX_TYPE>
bool tool::character::helper::ValidationPointer(const void* pointer,
	const SIZE_TYPE& pointer_type_size, const SIZE_TYPE& pointer_size,
	const INDEX_TYPE& pointer_offset,
	const SIZE_TYPE& pointer_offset_type_size)
{
	return pointer != NULL && pointer_type_size != 0 && pointer_size != 0
		&& pointer_offset < pointer_type_size && pointer_offset_type_size > 0
		&& (pointer_offset + pointer_offset_type_size) <= pointer_size;
}

template<typename VALUE_TYPE, typename SIZE_TYPE,
	typename INDEX_TYPE>
VALUE_TYPE tool::character::helper::CopyValue(const void* pointer,
	const SIZE_TYPE& pointer_type_size, const SIZE_TYPE& pointer_size,
	const INDEX_TYPE& pointer_offset,
	const SIZE_TYPE& pointer_offset_type_size)
{
	VALUE_TYPE value = 0;
	const char* byte_pointer = (const char*)pointer + pointer_offset;
	char* byte_value = (char*)&value;
	std::size_t index = 0;
	for (std::size_t i = 0; i < pointer_size; ++i)
	{
		for (std::size_t j = 0; j < (pointer_type_size - pointer_offset);
			++j, ++index)
		{
			if (index >= sizeof(VALUE_TYPE))
			{
				goto EndCopyValue;
			}
			*(byte_value + index) = *(byte_pointer 
				+ ((pointer_type_size * i) + j));
		}
	}
EndCopyValue:;
	return value;
}

#endif //!TOOL_CHARACTER_HELPER_H_