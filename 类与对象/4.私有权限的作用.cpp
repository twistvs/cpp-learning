#include <iostream>
#include <string>
using namespace std;

//把成员属性设置为私有
//1.可以自己控制读写权限
//2.对于写可以检测数据的有效性（比如年龄不能为负数）

class Person
{

public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//读取姓名
	string getName()
	{
		return m_Name;
	}


	//读取年龄
	int getAge()
	{
		return m_Age;
	}


	//设置电话
	void setPhone(string phone)
	{
		m_Phone = phone;
	}

private://私有权限
	string m_Name; //姓名  可读可写

	int m_Age = 18; //年龄  只读不写

	string m_Phone; //电话  只写不读

};

int main()
{
	Person p1;
	//p1.m_name = "张三"; //这样设置可以避免直接对属性进行操作，而是通过提前定义好的行为来对属性进行操作，这样就可以自己来控制对属性的操作。
	//cout << "姓名: " << m_Name << endl; //直接访问会报错，私有权限类外不可以访问

	//姓名的写操作
	p1.setName("张三");
	//姓名的读操作
	cout << "姓名：" << p1.getName() << endl;

	//年龄的读操作
	cout << "年龄：" << p1.getAge() << endl;

	//电话的写操作
	p1.setPhone("123456");

	return 0;
}