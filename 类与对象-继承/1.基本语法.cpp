#include <iostream>
#include <string>
using namespace std;

//继承的语法：class 子类 : 继承方式 父类

class father
{
public:
	void father_Func()
	{
		cout << "father func" << endl;
	}
};

class son : public father
{
public:
	void func()
	{
		cout << "son func" << endl;
	}
};

void test01()
{
	son s;
	s.father_Func(); //子类对象可以调用父类成员
	s.func();
}

int main()
{
	test01();
	return 0;
}