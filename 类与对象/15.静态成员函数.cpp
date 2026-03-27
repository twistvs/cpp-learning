#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	static void func()
	{
		cout << "func调用" << endl;
	}

	static void func2()
	{
		//静态成员函数只能访问静态成员变量
		//cout << "m_Age = " << m_Age << endl;
		cout << "m_Height = " << m_Height << endl;
	}

	int m_Age = 18;
	static int m_Height;

private:
	//静态成员函数也可以是私有的
	static void func3()
	{
		cout << "func3调用" << endl;
	}
};

int Person::m_Height = 170; //类外初始化，必须放在类定义的后面

void test01()
{
	//静态成员函数的两种调用方式
	//1.通过类名调用
	Person::func();
	//2.通过对象调用
	Person p;
	p.func();
}

void test02()
{
	Person::func2();
}

int main()
{
	test01();
	test02();
	return 0;
}