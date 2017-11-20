#ifndef TYPE_JOURNAL_TRAIT_H_
#define TYPE_JOURNAL_TRAIT_H_

#include "type/trait/conditional/Index.h"
#include <type_traits>

namespace BrainMuscles
{
	namespace type
	{
		namespace journal
		{
			template<
				typename BOOK_TYPE, 
				typename ELEMENT_REGISTER_TYPE, 
				int ELEMENT_TYPE_INDEX = 
					type::trait::conditional::Index<1, 0, 
						std::is_pointer<ELEMENT_REGISTER_TYPE>::value,
						std::is_reference<ELEMENT_REGISTER_TYPE>::value,
						std::is_object<ELEMENT_REGISTER_TYPE>::value>::value>
			class Trait;

			constexpr int POINTER_ELEMENT_TYPE = 1;
			constexpr int OBJECT_ELEMET_TYPE = 2;
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		namespace journal
		{
			template<typename BOOK_TYPE, typename ELEMENT_REGISTER_TYPE, int ELEMENT_TYPE_INDEX>
			class Trait
			{

			};

			template<typename BOOK_TYPE, typename ELEMENT_REGISTER_TYPE>
			class Trait<BOOK_TYPE, ELEMENT_REGISTER_TYPE, ::POINTER_ELEMENT_TYPE>
			{
			private:
				BOOK_TYPE m_book;
			protected:
				Trait();
			public:
				~Trait();
				void Register(ELEMENT_REGISTER_TYPE element);
				void Unregister(ELEMENT_REGISTER_TYPE element);
				bool IsRegistered(ELEMENT_REGISTER_TYPE element);
			protected:
				virtual void OnRegister(ELEMENT_REGISTER_TYPE element);
				virtual void OnUnregister(ELEMENT_REGISTER_TYPE element);
				virtual void OnInitial(Trait<BOOK_TYPE, ELEMENT_REGISTER_TYPE, ::POINTER_ELEMENT_TYPE>& object);
				virtual void OnFinal(Trait<BOOK_TYPE, ELEMENT_REGISTER_TYPE, ::POINTER_ELEMENT_TYPE>& object);
				virtual void OnUpdate(Trait<BOOK_TYPE, ELEMENT_REGISTER_TYPE, ::POINTER_ELEMENT_TYPE>& object, double delta);
			};

			template<typename BOOK_TYPE, typename ELEMENT_REGISTER_TYPE>
			class Trait<BOOK_TYPE, ELEMENT_REGISTER_TYPE, ::OBJECT_ELEMET_TYPE>
			{

			};
		}
	}
}

#endif //!TYPE_JOURNAL_TRAIT_H_