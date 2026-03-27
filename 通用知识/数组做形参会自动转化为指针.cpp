# include <iostream>
using namespace std;

void test(char a[])  //当a作为函数参数时，自动转化为指针类型
{
	cout << sizeof(a) << endl; //a是指针，sizeof(a)是8（64位系统）
	a[1] = 'c'; //由于a是指针，所以可以修改main函数中数组的值
}

int main()
{
	char a[2] = { 'a','b' };
	cout << sizeof(a) << endl; //a是数组，sizeof(a)是2
	test(a);
	cout << a << endl; //输出ac
	return 0;
}