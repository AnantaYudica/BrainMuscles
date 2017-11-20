#ifndef TEST_SOURCE_INTERFACE_H_
#define TEST_SOURCE_INTERFACE_H_

#ifdef _USING_TEST_SOURCE_

#include "test/source/interface/Flags.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			template<typename SOURCE_TYPE, typename DERIVED_TYPE>
			class Interface;
		}
	}
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
class BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>
{
private:
	typedef BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
		DERIVED_TYPE> InterfaceType;
public:
	typedef BrainMuscles::test::source::interface::FlagsIntegerType 
		FlagsIntegerType;
	typedef BrainMuscles::test::source::interface::Flags FlagsType;
private:
	FlagsIntegerType m_flags;
	static InterfaceType ms_instance;
private:
	Interface();
private:
	void Set(FlagsType flag);
public:
	static constexpr bool HasPostTest();
	static constexpr bool HasPreTest();
	static constexpr bool HasStaticTest();
	static constexpr bool HasTest();
	static constexpr bool Has(FlagsType flag);
public:
	static bool IsCalled(FlagsType flag);
public:
	static void CallPostTest();
	static void CallPreTest();
	static void CallStaticTest();
	static void CallTest();
	static void Call(FlagsType flag);
};

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
typename BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::InterfaceType 
	BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::ms_instance;

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::Interface() :
	m_flags(0)
{}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
void BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::Set(FlagsType flag)
{
	ms_instance.m_flags |= flag;
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
constexpr bool BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::HasPostTest()
{
	return &SOURCE_TYPE<DERIVED_TYPE>::PostTest != &DERIVED_TYPE::PostTest;
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
constexpr bool BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::HasPreTest()
{
	return &SOURCE_TYPE<DERIVED_TYPE>::PreTest != &DERIVED_TYPE::PreTest;
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
constexpr bool BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::HasStaticTest()
{
	return &SOURCE_TYPE<DERIVED_TYPE>::StaticTest != &DERIVED_TYPE::StaticTest;
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
constexpr bool BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::HasTest()
{
	return &SOURCE_TYPE<DERIVED_TYPE>::Test != &DERIVED_TYPE::Test;
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
constexpr bool BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::Has(FlagsType flag)
{
	return flag == FlagsType::post_test ? HasPostTest() : 
		flag == FlagsType::pre_test ? HasPreTest() :
		flag == FlagsType::static_test ? HasStaticTest() :
		flag == FlagsType::test ? HasTest() : false;
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
bool BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::IsCalled(FlagsType flag)
{
	return m_flags & flag;
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
void BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::CallPostTest()
{
	if (HasPostTest())
	{
		DERIVED_TYPE::PostTest();
		ms_instance.Set(FlagsType::post_test);
	}
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
void BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::CallPreTest()
{
	if (HasPreTest())
	{
		DERIVED_TYPE::PreTest();
		ms_instance.Set(FlagsType::pre_test);
	}
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
void BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::CallStaticTest()
{
	if (HasStaticTest())
	{
		DERIVED_TYPE::StaticTest();
		ms_instance.Set(FlagsType::static_test);
	}
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
void BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::CallTest()
{
	if (HasTest())
	{
		DERIVED_TYPE::Test();
		ms_instance.Set(FlagsType::test);
	}
}

template<template<typename> class SOURCE_TYPE, typename DERIVED_TYPE>
void BrainMuscles::test::source::Interface<SOURCE_TYPE<DERIVED_TYPE>,
	DERIVED_TYPE>::Call(FlagsType flag)
{
	flag == FlagsType::post_test ? CallPostTest() :
		flag == FlagsType::pre_test ? CallPreTest() :
		flag == FlagsType::static_test ? CallStaticTest() :
		flag == FlagsType::test ? CallTest() : void(0);
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_INTERFACE_H_