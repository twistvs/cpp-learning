#include <iostream>
#include <string>
using namespace std;

//多继承中如果多个父类中有同名成员，子类对象访问该成员时会产生二义性，必须加以区分
//多继承是不推荐使用的

class Base1
{
public:
	int m_A = 10;
};

class Base2
{
public:
	int m_A = 20;
};

class Son : public Base1, public Base2
{

};

void test01()
{
	Son s;
	//cout << s.m_A << endl; //二义性，无法访问
	cout << s.Base1::m_A << endl; //通过作用域区分
	cout << s.Base2::m_A << endl;
}

int main()
{
	test01();
	return 0;
}