#include <iostream>
#include <string>
using namespace std;

//利用常量引用来修饰形参，可以防止误操作，同时也可以提高效率
void test(const int& t)
{
	//t = 20;      //误操作的一种，如果不定义为常量引用，那么就是错误的把t的值修改了
	cout << "t = " << t << endl;
}


int main()
{
	int a = 10;
	int& c = a; //正常情况下，引用必须初始化，需要一个变量来初始化引用


	
	//下面并非正常用法，正常的用法是将常量引用用在形参上
	//如果采用如下的方式将引用使用常量进行初始化，实际上在编译器中是这样的：const int temp = 10; const int& b= temp; 
	const int& b = 10; //引用可以用常量进行初始化，但是这个常量必须是一个右值，不能是一个变量
	//b = 20; //错误，不能通过引用来修改常量的值
	//也可以用一个变量来初始化常量引用，但是d是常量，不能修改
	const int& d = a;
	
	//传参的时候既可以是变量也可以是常量
	test(a);
	test(100);

	return 0;
}