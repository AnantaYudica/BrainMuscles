#ifndef TOOL_ENVIRONMENT_FLAG_H_
#define TOOL_ENVIRONMENT_FLAG_H_

namespace tool
{
	namespace environment
	{
		class Flag;
	}
}

class tool::environment::Flag
{
private:
	typedef unsigned char ValueType;
private:
	ValueType m_value;
	static constexpr ValueType BitDebug = 1;
public:
	Flag();
public:
	void EnableDebug();
	void DisableDebug();
	bool IsDebug();
};

#endif //!TOOL_ENVIRONMENT_FLAG_H_