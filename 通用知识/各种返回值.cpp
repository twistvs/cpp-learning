# include <iostream>
# include <string>
using namespace std;

void f1()
{
	cout << "void没有返回值" << endl;
}

//用值的方式返回整型
int f2()
{
	return 100;
}

//用引用的方式返回整型，返回的变量必须要是静态变量或者全局变量，否则函数结束后变量会被销毁，返回引用会报错
//这里用引用的形式传形参，所以a是全局变量
int& f3(int& a)
{
	return a;
}

int* f4(int& a)
{
	//虽然a是引用，但是返回地址时，引用会自动转换为变量本身，所以返回的是变量的地址
	return &a;
}

int main()
{
	int a = f2(); //f2()返回整型值


	//用变量来接收引用，引用会自动转换为值，变成一个赋值操作
	int b = f3(a);
	b = 200;
	cout << a << endl; //a的值没有变，仍然是100
	//用引用来接收引用，可以正常的让c变成a的引用
	int& c = f3(a); 
	c = 300;
	cout << a << endl; //a的值变成300
	//也就是说返回引用是灵活的，根据接受的方式不同，既可以变成值，也可以变成引用
	
	int* p = f4(a); //f4()返回a的地址
	cout << *p << endl; //通过指针访问a的值，输出300
	return 0;
}