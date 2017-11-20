#ifndef TYPE_TRAIT_TYPES_FUNCTION_H_
#define TYPE_TRAIT_TYPES_FUNCTION_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace types
			{
				template<typename RETURN, typename TYPES, typename... ARGS>
				class Function;
			}
		}
	}
}

#include "type/trait/Types.h"
#include "type/trait/types/Filler.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace types
			{
				template<typename RETURN, typename TYPES, typename... ARGS>
				class Function :
					public Function<RETURN, typename TYPES::Next, ARGS..., typename TYPES::Type>
				{
				public:
					typedef RETURN Return;
					typedef Function<RETURN, TYPES, ARGS...> Current;
					typedef Function<RETURN, typename TYPES::Next, ARGS..., typename TYPES::Type> Next;
					typedef typename Next::Type Type;
					typedef RETURN(*TypeParameter)(ARGS..., ...);
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Caller(Type function, TYPES types, FUNCTION_PRE_ARGS... function_pre_args);
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Caller(TypeParameter function, TYPES types, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename... ARGS>
				class Function<void, Types<>, ARGS...>
				{
				public:
					typedef void Return;
					typedef Function<void, Types<>, ARGS...> Current;
					typedef void Next;
					typedef void(*Type)(ARGS...);
					typedef void(*TypeParameter)(ARGS..., ...);
					template<typename... FUNCTION_PRE_ARGS>
					static void Caller(Type function, Types<> types, FUNCTION_PRE_ARGS... function_pre_args);
					template<typename... FUNCTION_PRE_ARGS>
					static void Caller(TypeParameter function, Types<> types, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename TYPES, typename... ARGS>
				class Function<void, TYPES, ARGS...> :
					public Function<void, typename TYPES::Next, ARGS..., typename TYPES::Type>
				{
				public:
					typedef void Return;
					typedef Function<void, TYPES, ARGS...> Current;
					typedef Function<void, typename TYPES::Next, ARGS..., typename TYPES::Type> Next;
					typedef typename Next::Type Type;
					typedef void(*TypeParameter)(ARGS..., ...);
					template<typename... FUNCTION_PRE_ARGS>
					static void Caller(Type function, TYPES types, FUNCTION_PRE_ARGS... function_pre_args);
					template<typename... FUNCTION_PRE_ARGS>
					static void Caller(TypeParameter function, TYPES types, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename... ARGS>
				class Function<void, void, ARGS...>
				{
				public:
					typedef void Return;
					typedef Function<void, void, ARGS...> Current;
					typedef void Next;
					typedef void(*Type)(ARGS...);
					typedef void(*TypeParameter)(ARGS..., ...);
					template<typename... FUNCTION_PRE_ARGS>
					static void Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args);
					template<typename... FUNCTION_PRE_ARGS>
					static void Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename RETURN, typename... ARGS>
				class Function<RETURN, Types<>, ARGS...>
				{
				public:
					typedef RETURN Return;
					typedef Function<RETURN, Types<>, ARGS...> Current;
					typedef void Next;
					typedef RETURN(*Type)(ARGS...);
					typedef RETURN(*TypeParameter)(ARGS..., ...);
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Caller(Type function, Types<> types, FUNCTION_PRE_ARGS... function_pre_args);
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Caller(TypeParameter function, Types<> types, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename RETURN, typename... ARGS>
				class Function<RETURN, void, ARGS...>
				{
				public:
					typedef RETURN Return;
					typedef Function<RETURN, void, ARGS...> Current;
					typedef void Next;
					typedef RETURN(*Type)(ARGS...);
					typedef RETURN(*TypeParameter)(ARGS..., ...);
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args);
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename RETURN, typename TYPES, typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				RETURN Function<RETURN, TYPES, ARGS...>::Caller(Type function, TYPES types, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return Filler<RETURN, Type, TYPES, ARGS...>::Fill(function, types, function_pre_args...);
				}

				template<typename RETURN, typename TYPES, typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				RETURN Function<RETURN, TYPES, ARGS...>::Caller(TypeParameter function, TYPES types, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return Filler<RETURN, TypeParameter, TYPES, ARGS...>::Fill(function, types, function_pre_args...);
				}


				template<typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				void Function<void, Types<>, ARGS...>::Caller(Type function, Types<> types, FUNCTION_PRE_ARGS... function_pre_args)
				{
					Filler<void, Type, void, ARGS...>::Fill(function, types, function_pre_args...);
				}

				template<typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				void Function<void, Types<>, ARGS...>::Caller(TypeParameter function, Types<> types, FUNCTION_PRE_ARGS... function_pre_args)
				{
					Filler<void, TypeParameter, void, ARGS...>::Fill(function, types, function_pre_args...);
				}


				template<typename TYPES, typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				void Function<void, TYPES, ARGS...>::Caller(Type function, TYPES types, FUNCTION_PRE_ARGS... function_pre_args)
				{
					Filler<void, Type, TYPES, ARGS...>::Fill(function, types, function_pre_args...);
				}

				template<typename TYPES, typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				void Function<void, TYPES, ARGS...>::Caller(TypeParameter function, TYPES types, FUNCTION_PRE_ARGS... function_pre_args)
				{
					Filler<void, TypeParameter, TYPES, ARGS...>::Fill(function, types, function_pre_args...);
				}

				template<typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				void Function<void, void, ARGS...>::Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					Filler<void, Type, void, ARGS...>::Fill(function, 0, function_pre_args...);
				}
				
				template<typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				void Function<void, void, ARGS...>::Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					Filler<void, TypeParameter, void, ARGS...>::Fill(function, 0, function_pre_args...);
				}

				template<typename RETURN, typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				RETURN  Function<RETURN, Types<>, ARGS...>::Caller(Type function, Types<> types, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return Filler<RETURN, Type, void, ARGS...>::Fill(function, types, function_pre_args...);
				}

				template<typename RETURN, typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				RETURN Function<RETURN, Types<>, ARGS...>::Caller(TypeParameter function, Types<> types, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return Filler<RETURN, TypeParameter, void, ARGS...>::Fill(function, types, function_pre_args...);
				}

				template<typename RETURN, typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				RETURN Function<RETURN, void, ARGS...>::Caller(Type function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return Filler<RETURN, Type, void,ARGS...>::Fill(function, 0, function_pre_args...);
				}

				template<typename RETURN, typename... ARGS>
				template<typename... FUNCTION_PRE_ARGS>
				RETURN Function<RETURN, void, ARGS...>::Caller(TypeParameter function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return Filler<RETURN, TypeParameter, void, ARGS...>::Fill(function, 0, function_pre_args...);
				}
			}
		}
	}
}

#endif //!TYPE_TRAIT_TYPES_FUNCTION_H_