#ifndef TEST_TEST_MESSAGE_H_
#define TEST_TEST_MESSAGE_H_

namespace BrainMuscles
{
	namespace test
	{
		namespace test
		{
			template<typename... ARGS>
			class Message;
		}
	}
}

#include "type\trait\Types.h"
#include "test\test\message\Base.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace test
		{
			template<typename... ARGS>
			class Message : 
				public message::Base
			{
			private:
				typedef type::trait::Types<ARGS...> ValuesType;
				typedef type::trait::types::Function<int, ValuesType, FILE*, const char *> Function_fprintf;
				const char * m_message;
				ValuesType m_values;
			public:
				Message(const char * message, ARGS... values);
				void Call_fprintf(FILE * out) const;
			};

			template<>
			class Message<> :
				public message::Base
			{
			private:
				typedef type::trait::types::Function<int, type::trait::Types<>, FILE*, const char *> Function_fprintf;
				const char * m_message;
				type::trait::Types<> m_values;
			public:
				Message(const char * message);
				void Call_fprintf(FILE * out) const;
			};

			template<typename... ARGS>
			Message<ARGS...>::Message(const char * message, ARGS... values) :
				message::Base(),
				m_values(values...),
				m_message(message)
			{
			
			}

			template<typename... ARGS>
			void Message<ARGS...>::Call_fprintf(FILE * out) const
			{
				Function_fprintf::Caller(fprintf, m_values, out, m_message);
			}

			Message<>::Message(const char * message) :
				message::Base(),
				m_message(message)
			{
				m_values = type::trait::Types<>();
			}

			void Message<>::Call_fprintf(FILE * out) const
			{
				Function_fprintf::Caller(fprintf, m_values, out, m_message);
			}
		}
	}
}

#endif // ! TEST_TEST_MESSAGE_H_