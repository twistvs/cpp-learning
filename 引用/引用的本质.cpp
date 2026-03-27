#include <iostream>
#include <string>
using namespace std;

//引用的本质是一个指针常量，但是在使用的时候，编译器会在前面自动加上*，起到指针的效果
int main()
{
	int a = 10;
	//引用在定义时会自动取地址，a的前面相当于有一个隐含的&
	int& b = a; //b是a的引用，引用必须初始化，而且初始化后不能再改变

	//引用在调用时，编译器会自动在前面加上*，所以通过引用b修改的实际上是a的值
	b = 20; //通过引用b修改a的值
	cout << "a = " << a << endl;

	int c = 30;
	b = c; //不是改变引用b的指向，而是把c的值赋给了a
	cout << "a = " << a << endl;

	return 0;
}