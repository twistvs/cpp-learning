#include <iostream>
#include <string>
using namespace std;

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : public Base1
{
public:
	void func()
	{
		m_A = 10; //公有继承方式：父类的公有成员在子类中仍然是公共权限
		m_B = 10; //公有继承方式：父类的保护成员在子类中是保护权限
		//m_C = 10; //公有继承方式：父类的私有权限成员在子类中不可访问
	}
};

class Son2 : protected Base1
{
public:
	void func()
	{
		m_A = 10; //保护继承方式：父类的公有成员在子类中变成了保护权限
		m_B = 10; //保护继承方式：父类的保护成员在子类中是保护权限
		//m_C = 10; //保护继承方式：父类的私有权限成员在子类中不可访问
	}
};

class Son3 : private Base1
{
	void func()
	{
		m_A = 10; //私有继承方式：父类的公有成员在子类中变成了私有权限
		m_B = 10; //私有继承方式：父类的保护成员在子类中变成了私有权限
		//m_C = 10; //私有继承方式：父类的私有权限成员在子类中不可访问
	}
};


void test01()
{
	Son1 s1;
	s1.m_A = 100; //公有继承方式：父类的公有成员在子类中仍然是公共权限
	//s1.m_B = 100; //公有继承方式：父类的保护成员在子类中是保护权限，类外不可访问
	//s1.m_C = 100; //公有继承方式：父类的私有权限成员在子类中不可访问
}

void test02()
{
	Son2 s2;
	//s2.m_A = 100; //保护继承方式：父类的公有成员在子类中变成了保护权限，类外不可访问
	//s2.m_B = 100; //保护继承方式：父类的保护成员在子类中是保护权限，类外不可访问
	//s2.m_C = 100; //保护继承方式：父类的私有权限成员在子类中不可访问
}

int main()
{
	return 0;
}