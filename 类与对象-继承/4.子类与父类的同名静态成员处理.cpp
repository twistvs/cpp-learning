#include <iostream>
#include <string>
using namespace std;

//虽然同名，但是不是同一个静态变量
class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base的func" << endl;
	}
};

int Base::m_A = 10;

class Son : public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son的func" << endl;
	}
};

int Son::m_A = 20;

//同名静态成员变量
void test01()
{
	//1.通过对象访问
	//依旧是不加作用域访问子类同名静态成员变量，加作用域访问父类同名静态成员变量
	Son s;
	cout << s.m_A << endl;        //访问子类的静态成员变量
	cout << s.Base::m_A << endl; //访问父类的静态成员变量

	//2.通过类名访问
	cout << Son::m_A << endl;        //访问子类的静态成员变量
	cout << Son::Base::m_A << endl; //访问父类的静态成员变量
}

//同名静态成员函数
void test02()
{
	//1.通过对象访问
	Son s;
	s.func();        //访问子类的静态成员函数
	s.Base::func(); //访问父类的静态成员函数

	//2.通过类名访问
	Son::func();        //访问子类的静态成员函数
	Son::Base::func(); //访问父类的静态成员函数
}


int main()
{
	test01();
	test02();
	return 0;
}