# include <iostream>
# include <string>
using namespace std;

class Person
{
public:
	//this指针是一个指针常量T* const this，左定值右定向，this的指向是不可修改的
	//this = NULL; //错误，不能修改this指针的指向

	//1.const成员函数不能改变成员的值
	//2.用const声明的常对象只能调用const成员函数，不能调用非const成员函数
	void show() const
	{
		//在成员函数中调用成员变量时，编译器会把成员变量转换为this->成员变量
		//在const修饰的成员函数中，this指针的类型是const Person* const this，既不能变向也不能变值
		//this->m_a = 100; //错误，const修饰成员函数后，成员函数不能修改成员变量的值
		cout << "m_a = " << this->m_a << endl;
	}

	void func()
	{
		m_a = 100; //非const成员函数可以修改成员变量的值
	}
	
	int m_a = 10;
	int m_b = 20;
};



int main()
{
	const Person p; //常对象
	p.show(); //常对象只能调用const成员函数
	//p.func(); //错误，常对象不能调用非const成员函数

	return 0;
}