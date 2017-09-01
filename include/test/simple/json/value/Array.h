#ifndef TEST_SIMPLE_JSON_VALUE_ARRAY_H_
#define TEST_SIMPLE_JSON_VALUE_ARRAY_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Constant.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace value
				{
					class Array :
						public BrainMuscles::test::simple::json::Constant::ValueType,
						public BrainMuscles::test::simple::json::Constant::ContainerArrayType
					{
					public:
						typedef BrainMuscles::test::simple::json::Constant				ConstantType;
						typedef typename ConstantType::ValueType						ValueType;
						typedef typename ValueType::SharedPointerType					SharedPointerType;
						typedef typename ConstantType::PointerValueType					PointerValueType;
						typedef typename ConstantType::ContainerArrayType				ContainerType;
					public:
						Array();
						Array(const Array& copy);
						Array(Array&& move);
					public:
						~Array();
					public:
						SharedPointerType MakeShared() const;
					};

					Array::Array()
					{}

					Array::Array(const Array& copy) :
						ContainerType(copy)
					{}

					Array::Array(Array&& move) :
						ContainerType(move)
					{}

					Array::~Array()
					{}

					typename Array::SharedPointerType Array::MakeShared() const
					{
						return SharedPointerType(new Array(*this));
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_ARRAY_H_