#include <iostream>
#include <string>
using namespace std;

//拷贝构造函数的三个调用时机
//1.用一个已经创建好的对象来初始化一个新对象
//2.值传递的方式给函数参数传值
//3.以值的方式返回局部对象 （在C++11中，编译器优化了这部分内容，不一定会调用拷贝构造函数）

class Person
{
public:

	Person()
	{
		m_Age = 18;
		cout << "调用了无参构造函数" << endl;
	}

	//拷贝构造函数必须用常量引用来修饰形参
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "调用了拷贝构造函数" << endl;
	}

private:
	int m_Age;
};

//用一个已经创建好的对象来初始化一个新对象
void test1()
{
	Person p1;
	//通过拷贝构造函数初始化对象的时候，不会调用默认构造函数
	Person p2(p1);
}

//值传递的方式给函数参数传值，会调用拷贝构造函数创建一个拷贝，而不是直接使用实参。值传递会形成拷贝，这个思路和传递基本数据类型是一样的
//拷贝构造函数的创建必须用常量引用来修饰形参，就是因为用值传递的方式给函数参数传值时，会调用拷贝构造函数来初始化形参，导致死循环
void test2(Person p)
{
	
}

Person test3()
{
	Person p;
	return p; //以值的方式返回局部对象
}

int main()
{
	Person p;
	test1();
	test2(p);
	Person p2 = test3(); //调用拷贝构造函数  (在C++11中，编译器优化了这部分内容，不一定会调用拷贝构造函数)
	return 0;
}