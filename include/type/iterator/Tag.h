#ifndef TYPE_ITERATOR_TAG_H_
#define TYPE_ITERATOR_TAG_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			class Tag;

			namespace tag
			{
				enum Type
				{
					input,
					output,
					forward,
					bidirectional,
					random_access
				};
			}
		}

		
	}
}

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			class Tag
			{
			private:
				tag::Type m_type;
			protected:
				Tag(tag::Type type);
			public:
				Tag(Tag* pointer);
				Tag(const Tag& rhs);
			};

			Tag::Tag(tag::Type type) :
				m_type(type)
			{}

			Tag::Tag(Tag* pointer) :
				m_type(pointer->m_type)
			{}

			Tag::Tag(const Tag& rhs) :
				m_type(rhs.m_type)
			{}
		}
	}
}

#endif //!TYPE_ITERATOR_TAG_H_