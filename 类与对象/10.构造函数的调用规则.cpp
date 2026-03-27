#include <iostream>
#include <string>
using namespace std;

//1.默认情况下，编译器会给类添加默认构造函数（无参，函数体为空），默认析构函数（无参，函数体为空），默认拷贝构造函数（对属性进行值拷贝）
//2.如果用户定义有参构造函数，编译器不再提供默认无参构造函数，但仍然提供默认拷贝构造函数
//3.如果用户定义了拷贝构造函数，编译器不再提供其他构造函数

//不自定义任何构造函数，使用编译器提供的默认构造函数
class Person1
{
public:
	int m_Age = 18;
};

class Person2
{
public:
	Person2(int age)
	{
		m_Age = age;
	}
	int m_Age;
};

//如果用户定义了拷贝构造函数，编译器不再提供其他构造函数，此时无法创建对象。
//想要创建对象，必须再自定义其他构造函数
class Person3
{
public:
	int m_Age;
	Person3(const Person3& p)
	{
		m_Age = p.m_Age;
	}
};

int main()
{
	//Person1并没有提供任何构造函数，但是p2仍然拷贝了p1的m_Age属性
	Person1 p1;
	Person1 p2(p1); //调用默认拷贝构造函数
	cout << p2.m_Age << endl;

	//Person2 p3;    //错误，Person2提供了有参构造函数，编译器不再提供默认无参构造函数
	Person2 p3(20);
	Person2 p4(p3); //调用默认拷贝构造函数
	cout << p4.m_Age << endl;

	//Person3 p5;   //错误，Person3提供了拷贝构造函数，编译器不再提供默认无参构造函数
	//Person3 p6(30);  //错误，Person3提供了拷贝构造函数，编译器不再提供默认有参构造函数
	

	return 0;
}