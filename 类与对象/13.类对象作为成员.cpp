#include <iostream>
#include <string>
using namespace std;

//小的需要写在大的上面
class Phone
{
public:
	Phone(string pname) :m_Pname(pname)
	{
		cout << "调用了phone的构造函数" << endl;
	}
	~Phone()
	{
		cout << "调用了phone的析构函数" << endl;
	}
	string m_Pname;
};

class Person
{
public:
	//m_Phone(pname)相当于Phone m_Phone = pname（有参构造的隐式转换法），也相当于Phone m_Phone(pname)
	Person(string name, string pname) :m_Name(name), m_Phone(pname)
	{
		cout << "调用了person的构造函数" << endl;
	}

	~Person()
	{
		cout << "调用了person的析构函数" << endl;
	}

	//Phone作为Person的成员变量
	Phone m_Phone;
	string m_Name;
};



int main()
{
	//根据输出，构造函数先调用小的，再调用大的；析构函数先调用大的，再调用小的
	Person person("张三", "iPhone");
	return 0;
}