#include <iostream>
#include <string>
using namespace std;

//三种传参的方式
//值传递
void func1(int a) 
{
	a = 20; //修改的是a的副本，不会影响实参
}

//地址传递
void func2(int* p)
{
	*p = 30; //通过指针修改实参的值
}

//引用传递
void func3(int& r)
{
	r = 40; //通过引用修改实参的值
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	func1(a); //传递a的值
	func2(&b); //传递b的地址
	func3(c);  //传递c的引用

	cout << "a = " << a << endl; // a = 10，a的值没有被修改
	cout << "b = " << b << endl; // b = 30
	cout << "c = " << c << endl; // c = 40

	return 0;
}