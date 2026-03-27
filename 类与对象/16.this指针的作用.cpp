#include <iostream>
#include <string>
using namespace std;

//this指针的作用：
//1.区分成员变量和形参同名
//2.返回对象本身用*this,实现链式编程

class Person
{
public:
	Person(int age)
	{
		//age = age;   //形参age覆盖了成员变量age
		this->age = age; //this指针指向调用该成员函数的对象本身
	}

	//由于返回的是对象本身而不是对象的副本，所以返回值类型是Person&
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		return *this; //返回对象本身
	}

	//平时通过m_Age的命名方式避免了变量名冲突，但是如果不用，就需要用this指针来区分
	int age;
};

int main()
{
	Person p1(10);
	Person p2(20);
	//由于使用*this返回对象本身，所以p1.PersonAddAge(p2)返回的还是p1对象，可以继续调用PersonAddAge成员函数
	p1.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2); //链式编程
	cout << "p1.age = " << p1.age << endl; //p1.age = 70
	return 0;
}