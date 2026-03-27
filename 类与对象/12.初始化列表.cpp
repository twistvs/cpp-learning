#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	//初始化列表的方式初始化成员变量（无参构造函数）
	Person() :m_A(0), m_B(1), m_C(2)
	{

	}

	//初始化列表的方式初始化成员变量（有参构造函数）
	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	{

	}

	//初始化列表的方式初始化成员变量（拷贝构造函数）
	Person(const Person& p) :m_A(p.m_A), m_B(p.m_B), m_C(p.m_C)
	{

	}

	int m_A;
	int m_B;
	int m_C;
};



int main()
{
	Person p;
	Person p2(10, 20, 30);
	Person p3(p2);
	cout << "p3.m_A = " << p3.m_A << endl;
	return 0;
}