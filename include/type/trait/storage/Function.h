#ifndef TYPE_TRAIT_STORAGE_FUNCTION_H_
#define TYPE_TRAIT_STORAGE_FUNCTION_H_


namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace storage
			{
				template<typename RETURN, typename STORAGE, typename... ARGS>
				class Function;
			}
		}
	}
}

#include "type\trait\Storage.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace storage
			{
				template<typename RETURN, typename STORAGE, typename... ARGS >
				class Function :
					public Function<RETURN, typename STORAGE::Next, ARGS..., typename STORAGE::Type>
				{
				public:
					typedef Function<RETURN, STORAGE, ARGS...> Current;
					typedef Function<RETURN, typename STORAGE::Next, ARGS..., typename STORAGE::Type> Next;
					typedef typename Next::Type Type;
					typedef RETURN(*TypeParameter)(ARGS..., ...);
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args);
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename STORAGE, typename...ARGS>
				class Function<void, STORAGE, ARGS...> :
					public Function<void, typename STORAGE::Next, ARGS..., typename STORAGE::Type>
				{
				public:
					typedef Function<void, STORAGE, ARGS...> Current;
					typedef Function<void, typename STORAGE::Next, ARGS..., typename STORAGE::Type> Next;
					typedef typename Next::Type Type;
					typedef void(*TypeParameter)(ARGS..., ...);
					template<typename... FUNCTION_PRE_ARGS>
					static void Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args);
					template<typename... FUNCTION_PRE_ARGS>
					static void Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename RETURN, typename... ARGS>
				class Function<RETURN, void, ARGS...>
				{
				public:
					typedef Function<RETURN, void, ARGS...> Current;
					typedef void Next;
					typedef RETURN(*Type)(ARGS... args);
					typedef RETURN(*TypeParameter)(ARGS..., ...);
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args);
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename...ARGS>
				class Function<void, void, ARGS...>
				{
				public:
					typedef Function<void, void, ARGS...> Current;
					typedef void Next;
					typedef void(*Type)(ARGS... args);
					typedef void(*TypeParameter)(ARGS..., ...);
					template<typename... FUNCTION_PRE_ARGS>
					static void Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args);
					template<typename... FUNCTION_PRE_ARGS>
					static void Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args);
				};


				template<typename RETURN, typename STORAGE, typename...ARGS >
				template<typename... FUNCTION_PRE_ARGS>
				RETURN Function<RETURN, STORAGE, ARGS...>::Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return Filler<RETURN, Type, STORAGE>::Fill(function, function_pre_args...);
				}

				template<typename RETURN, typename STORAGE, typename...ARGS >
				template<typename... FUNCTION_PRE_ARGS>
				RETURN Function<RETURN, STORAGE, ARGS...>::Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return Filler<RETURN, TypeParameter, STORAGE>::Fill(function, function_pre_args...);
				}

				template<typename STORAGE, typename... ARGS >
				template<typename... FUNCTION_PRE_ARGS>
				void Function<void, STORAGE, ARGS...>::Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					Filler<void, Type, STORAGE>::Fill(function, function_pre_args...);
				}

				template<typename STORAGE, typename... ARGS >
				template<typename... FUNCTION_PRE_ARGS>
				void Function<void, STORAGE, ARGS...>::Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					Filler<void, TypeParameter, STORAGE>::Fill(function, function_pre_args...);
				}

				template<typename RETURN, typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				RETURN Function<RETURN, void, ARGS...>::Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return (*function)(function_pre_args...);
				}

				template<typename RETURN, typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				RETURN Function<RETURN, void, ARGS...>::Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return (*function)(function_pre_args...);
				}

				template<typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				void Function<void, void, ARGS...>::Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					(*function)(function_pre_args...);
				}

				template<typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				void Function<void, void, ARGS...>::Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					(*function)(function_pre_args...);
				}
			}
		}
	}
}


#endif // !TYPE_TRAIT_STORAGE_FUNCTION_H_