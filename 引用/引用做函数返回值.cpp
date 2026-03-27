#include <iostream>
#include <string>
using namespace std;

int& func()
{
	static int a = 10; //静态变量，函数结束后依然存在。如果不是静态变量的话，a在函数结束后会被销毁，返回引用会报错
	return a; //返回a的引用
}

int main()
{
	int& b = func(); //b是func返回值的引用，也就是a的引用。如果把&去掉，func()会自动转换为a的值，而不是a的引用
	b = 20; //通过b修改a的值
	cout << "a = " << func() << endl; //通过func()访问a的值

	func() = 30; //通过func()修改a的值,返回值为引用的函数可以作为左值
	cout << "a = " << func() << endl;

	return 0;
}