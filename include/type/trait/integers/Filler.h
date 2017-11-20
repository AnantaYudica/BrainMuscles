#ifndef TYPE_TRAIT_INTEGERS_FILLER_H_
#define TYPE_TRAIT_INTEGERS_FILLER_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace integers
			{
				template<typename RETURN, typename FUNCTION, typename INTEGERS, typename TYPE = INTEGERS::Type, TYPE...VALUES>
				class Filler;
			}
		}
	}
}

#include "type/trait/Integers.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace integers
			{
				template<typename RETURN, typename FUNCTION, typename INTEGERS, typename TYPE, TYPE... VALUES>
				class Filler :
					public Filler<RETURN, FUNCTION, typename INTEGERS::Next, TYPE, VALUES..., INTEGERS::Value>
				{
				protected:
					typedef Filler<RETURN, FUNCTION, INTEGERS, TYPE, VALUES...> Current;
					typedef Filler<RETURN, FUNCTION, typename INTEGERS::Next, TYPE, VALUES..., INTEGERS::Value> Next;
					typedef typename Next::Parent Parent;
				public:
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Fill(FUNCTION function, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename FUNCTION, typename INTEGERS, typename TYPE, TYPE... VALUES>
				class Filler<void, FUNCTION, INTEGERS, TYPE, VALUES...> :
					public Filler<void, FUNCTION, typename INTEGERS::Next, TYPE, VALUES..., INTEGERS::Value>
				{
				protected:
					typedef Filler<void, FUNCTION, INTEGERS, TYPE, VALUES...> Current;
					typedef Filler<void, FUNCTION, typename INTEGERS::Next, TYPE, VALUES..., INTEGERS::Value> Next;
					typedef typename Next::Parent Parent;
				public:
					template<typename... FUNCTION_PRE_ARGS>
					static void Fill(FUNCTION function, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename RETURN, typename FUNCTION, typename TYPE, TYPE... VALUES>
				class Filler<RETURN, FUNCTION, void, TYPE, VALUES...>
				{
				protected:
					typedef Filler<RETURN, FUNCTION, void, TYPE, VALUES...> Current;
					typedef void Next;
					typedef Filler<RETURN, FUNCTION, void, TYPE, VALUES...> Parent;
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN FillToFunction(FUNCTION function, FUNCTION_PRE_ARGS... function_pre_args);
				public:
					template<typename... FUNCTION_PRE_ARGS>
					static RETURN Fill(FUNCTION function, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename FUNCTION, typename TYPE, TYPE... VALUES>
				class Filler<void, FUNCTION, void, TYPE, VALUES...>
				{
				protected:
					typedef Filler<void, FUNCTION, void, TYPE, VALUES...> Current;
					typedef void Next;
					typedef Filler<void, FUNCTION, void, TYPE, VALUES...> Parent;
					template<typename... FUNCTION_PRE_ARGS>
					static void FillToFunction(FUNCTION function, FUNCTION_PRE_ARGS... function_pre_args);
				public:
					template<typename... FUNCTION_PRE_ARGS>
					static void Fill(FUNCTION function, FUNCTION_PRE_ARGS... function_pre_args);
				};

				template<typename RETURN, typename FUNCTION, typename INTEGERS, typename TYPE, TYPE... VALUES>
				template<typename...FUNCTION_PRE_ARGS>
				RETURN Filler<RETURN, FUNCTION, INTEGERS, TYPE, VALUES...>::Fill(FUNCTION function, FUNCTION_PRE_ARGS...function_pre_args)
				{
					return Parent::FillToFunction(function, function_pre_args...);
				}

				template<typename FUNCTION, typename INTEGERS, typename TYPE, TYPE... VALUES>
				template<typename... FUNCTION_PRE_ARGS>
				void Filler<void, FUNCTION, INTEGERS, TYPE, VALUES...>::Fill(FUNCTION function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return Parent::FillToFunction(function, function_pre_args...);
				}

				template<typename RETURN, typename FUNCTION, typename TYPE, TYPE... VALUES>
				template<typename... FUNCTION_PRE_ARGS>
				RETURN Filler<RETURN, FUNCTION, void, TYPE, VALUES...>::FillToFunction(FUNCTION function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return (*function)(function_pre_args..., VALUES...);
				}

				template<typename RETURN, typename FUNCTION, typename TYPE, TYPE... VALUES>
				template<typename... FUNCTION_PRE_ARGS>
				RETURN Filler<RETURN, FUNCTION, void, TYPE, VALUES...>::Fill(FUNCTION function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return Parent::FillToFunction(function, function_pre_args...);
				}

				template<typename FUNCTION, typename TYPE, TYPE... VALUES>
				template<typename... FUNCTION_PRE_ARGS>
				static void Filler<void, FUNCTION, void, TYPE, VALUES...>::FillToFunction(FUNCTION function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return (*function)(function_pre_args..., VALUES...);
				}

				template<typename FUNCTION, typename TYPE, TYPE... VALUES>
				template<typename... FUNCTION_PRE_ARGS>
				static void Filler<void, FUNCTION, void, TYPE, VALUES...>::Fill(FUNCTION function, FUNCTION_PRE_ARGS... function_pre_args)
				{
					return Parent::FillToFunction(function, function_pre_args...);
				}
			}
		}
	}
}

#endif // !TYPE_TRAIT_INTEGERS_FILLER_H_