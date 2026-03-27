#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	//1.所有的对象共享同一份数据
	//2.编译阶段分配内存，程序结束后释放
	//3.类内定义，类外初始化
	static int m_Age;

private:
	//静态成员变量也可以是私有的
	static int m_Height;
};

//Person::限定了作用域，指定了m_Age是Person类的静态成员变量
int Person::m_Age = 10; //类外初始化，必须放在类定义的后面
int Person::m_Height = 170;

void test01()
{
	//调用静态成员变量的两种方式
	//1.通过对象调用
	Person p;
	cout << "p.m_Age = " << p.m_Age << endl;

	//2.通过类名调用
	cout << "Person::m_Age = " << Person::m_Age << endl;
}

void test02()
{
	//修改静态成员变量的值，所有对象都受影响
	Person::m_Age = 100;
	Person p;
	cout << "p.m_Age = " << p.m_Age << endl;
}

int main()
{
	test01();
	test02();
	return 0;
}