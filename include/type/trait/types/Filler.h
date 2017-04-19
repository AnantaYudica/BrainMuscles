#ifndef TYPE_TRAIT_TYPES_FILLER_H_
#define TYPE_TRAIT_TYPES_FILLER_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace types
			{
				template<typename RETURN, typename FUNCTION, typename TYPES, typename... ARGS>
				class Filler;
			}
		}
	}
}

#include "type\trait\Types.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace types
			{
				template<typename RETURN, typename FUNCTION, typename TYPES, typename... ARGS>
				class Filler :
					public Filler<RETURN, FUNCTION, typename TYPES::Next, ARGS..., typename TYPES::Type>
				{
				public:
					typedef RETURN Return;
					typedef Filler<RETURN, FUNCTION, TYPES, ARGS...> Current;
					typedef Filler<RETURN, FUNCTION, typename TYPES::Next, ARGS..., typename TYPES::Type> Next;
					static RETURN Fill(FUNCTION Function, TYPES types, ARGS... args);
				};

				template<typename FUNCTION, typename TYPES, typename... ARGS>
				class Filler<void, FUNCTION, TYPES, ARGS...> :
					public Filler<void, FUNCTION, typename TYPES::Next, ARGS..., typename TYPES::Type>
				{
				public:
					typedef void Return;
					typedef Filler<void, FUNCTION, TYPES, ARGS...> Current;
					typedef Filler<void, FUNCTION, typename TYPES::Next, ARGS..., typename TYPES::Type> Next;
					static void Fill(FUNCTION Function, TYPES types, ARGS... args);
				};

				template<typename FUNCTION, typename... ARGS>
				class Filler<void, FUNCTION, void, ARGS...>
				{
				public:
					typedef void Return;
					typedef Filler<void, FUNCTION, void, ARGS...> Current;
					typedef void Next;
					template<typename TYPES>
					static void Fill(FUNCTION Function, TYPES, ARGS... args);
				};

				template<typename RETURN, typename FUNCTION, typename... ARGS>
				class Filler<RETURN, FUNCTION, void, ARGS...>
				{
				public:
					typedef RETURN Return;
					typedef Filler<RETURN, FUNCTION, void, ARGS...> Current;
					typedef void Next;
					template<typename TYPES>
					static RETURN Fill(FUNCTION Function, TYPES, ARGS... args);
				};


				template<typename RETURN, typename FUNCTION, typename TYPES, typename... ARGS>
				RETURN Filler<RETURN, FUNCTION, TYPES, ARGS...>::Fill(FUNCTION Function, TYPES types, ARGS... args)
				{
					return Next::Fill(Function, types, args..., types.GetValue());
				}

				template<typename FUNCTION, typename TYPES, typename... ARGS>
				void Filler<void, FUNCTION, TYPES, ARGS...>::Fill(FUNCTION Function, TYPES types, ARGS... args)
				{
					Next::Fill(Function, types, args..., types.GetValue());
				}

				template<typename FUNCTION, typename... ARGS>
				template<typename TYPES>
				void Filler<void, FUNCTION, void, ARGS...>::Fill(FUNCTION Function, TYPES, ARGS... args)
				{
					Function(args...);
				}

				template<typename RETURN, typename FUNCTION, typename... ARGS>
				template<typename TYPES>
				RETURN Filler<RETURN, FUNCTION, void, ARGS...>::Fill(FUNCTION Function, TYPES, ARGS... args)
				{
					return Function(args...);
				}
			}
		}
	}
}

#endif // !TYPE_TRAIT_TYPES_FILLER_H_