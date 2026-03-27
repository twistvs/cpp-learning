#include <iostream>
#include <string>
using namespace std;

//构造函数用于初始化，析构函数用于清理善后工作
//构造函数和析构函数没有返回值，也不需要写void
//构造函数的函数名和类名相同，析构函数的函数名是在类名前加一个~
//构造函数可以有参数，可以重载，析构函数没有参数，不能重载
//如果没有定义构造函数与析构函数，编译器会提供一个默认的无参构造函数和析构函数


class Person
{
public:
	Person()
	{ 
		cout << "无参构造函数调用" << endl;
	}

	~Person()
	{
		cout << "析构函数调用" << endl;
	}
};


void test()
{
	//在函数内定义的p，在函数结束后会被释放，所以析构函数会在函数结束后调用
	Person p;
}

int main()
{
	//在全局范围内定义的p，在main结束后才会被释放，所以析构函数会在main结束后调用
	Person p;
	test();

	//利用pause让程序暂停，会发现析构函数并没有立即调用，而是在程序结束后才调用
	system("pause");
	return 0;
}