#ifndef TOOL_PREBUILD_FLAG_H_
#define TOOL_PREBUILD_FLAG_H_

namespace tool
{
	namespace prebuild
	{
		class Flag;
	}
}

class tool::prebuild::Flag
{
private:
	typedef unsigned char ValueType;
private:
	static constexpr ValueType BitListFile = 1;
	static constexpr ValueType BitSourceColumn = 2;
private:
	ValueType m_value;
public:
	Flag();
public:
	void EnableFile();
	void EnableListFile();
	bool IsFileEnable();
	bool IsListFileEnable();
	void EnableSourceColumn();
	void DisableSourceColumn();
	bool IsSourceColumn();
};

#endif //!TOOL_PREBUILD_FLAG_H_