
#include "commonH.h"
enum class MyEnum : long long
{
	v1,
	v2=10,
	v3
};

enum MyEnum1
{
	v1,
	v2=10,
	v3
};

auto func(int i)-> int
{
	cout<<"this is "<<__FUNCTION__<<endl;
	return i+2;
}

void testEnum()
{
	MyEnum e = (MyEnum)0;
	cout<<sizeof(e)<<endl;
	MyEnum1 e1 = (MyEnum1)0;
	cout<<sizeof(e1)<<endl;

	array<double,3> arr={9,9.99,8};
	cout<<arr.size()<<" "<<arr.at(1)<<endl;
	cout<<"this is "<<__FUNCTION__<<endl; //__FUNCTION__
	cout<<func(10)<<endl;
}