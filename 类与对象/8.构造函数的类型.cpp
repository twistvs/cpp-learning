#include <iostream>
#include <string>
using namespace std;

//由于构造函数是可重载的，所以一个类可以有多个不同类型的构造函数
//构造函数根据分类方法不同，可以分为无参构造函数、有参构造函数、拷贝构造函数


class Person {
public:
	Person()
	{
		cout << "无参构造函数调用" << endl;
	}

	Person(int a)
	{
		cout << "有参构造函数调用" << endl;
		m_a = a;
	}

	//这里必须使用常量引用来修饰形参，因为如果不使用引用的话，形参p在调用拷贝构造函数时会调用拷贝构造函数来初始化，而调用拷贝构造函数又需要传递一个Person类型的参数，这样就会形成死循环
	Person(const Person& p)
	{
		cout << "拷贝构造函数调用" << endl;
		m_a = p.m_a;
	}

	int m_a;
};
int main()
{

	//不同构造函数的调用
	Person p1;      //无参构造函数调用
	Person p2(10);  //有参构造函数调用
	Person p3(p2); //拷贝构造函数调用
	cout << "p2.m_a = " << p2.m_a << endl;
	cout << "p3.m_a = " << p3.m_a << endl;
	
	return 0;
}