#include <iostream>
#include <string>
using namespace std;

//三种权限
//公共权限 public :成员类内和类外都可以访问
//保护权限 protected :成员类内可以访问，类外不可以访问，子类可以访问
//私有权限 private :成员类内可以访问，类外不可以访问，子类也不可以访问


class Person
{
public://公共权限
	string m_Name; //姓名

protected://保护权限
	string m_Car; //车

private://私有权限
	int m_Password; //银行卡密码

	void func()
	{
		//类内可以访问三种权限
		m_Name = "张三";
		m_Car = "宝马";
		m_Password = 123456;
	}
};

class C1
{
	int a = 10;
};

struct C2
{
	int b = 20;
};

int main()
{
	Person p1;
	p1.m_Name = "张三"; //公共权限，类外可以访问
	//p1.m_Car = "宝马"; //保护权限，类外不可以访问，如果强行在类外访问会报错
	//p1.m_Password = 123456; //私有权限，类外不可以访问，子类也不可以访问，如果强行在类外访问会报错

	C1 c1;
	//c1.a = 100; //类默认权限是私有权限，类外不可以访问

	C2 c2;
	c2.b = 200; //结构体默认权限是公共权限，类外可以访问

	return 0;
}