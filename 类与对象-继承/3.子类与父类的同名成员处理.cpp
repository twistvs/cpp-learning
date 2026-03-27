#include <iostream>
#include <string>
using namespace std;

//子类与父类中有同名成员，默认访问子类成员，访问父类成员需要加作用域

class Base
{
public:
	int m_A = 10;

	void func()
	{
		cout << "Base的func" << endl;
	}

	//函数重载
	void func(int a)
	{
		cout << "Base的func(int a)" << endl;
	}
};

class Son : public Base
{
public:
	int m_A = 20;

	void func()
	{
		cout << "Son的func" << endl;
	}
};

void test01()
{
	//默认访问子类同名成员，访问父类同名成员需要加作用域
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;
}

void test02()
{
	//默认访问子类同名成员函数，访问父类同名成员函数需要加作用域
	//只要不加作用域，子类同名成员会隐藏父类所有同名成员函数（不管参数列表是否相同）
	Son s;
	s.func();
	s.Base::func();
	s.Base::func(10);
}

int main()
{
	test01();
	test02();
	return 0;
}