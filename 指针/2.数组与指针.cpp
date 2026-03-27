# include <iostream>
using namespace std;

//int arr[] 在函数参数中会被编译器自动转换为 int* arr
void test(int arr[])
{
	cout << sizeof(arr) << endl; //8，函数参数中的数组会被编译器自动转换为指针
	//所以sizeof(arr)是指针的大小，而不是数组的大小
}

void test2(int* arr)
{
	cout << sizeof(arr) << endl; //8，指针的大小
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	int* p = a;
	cout << p[2] << endl; //3
	cout << sizeof(a) << endl; //20，数组名代表整个数组
	//a作为变量名时，代表了整个数组，sizeof(a)是整个数组的大小，而不是指针的大小
	//a参与表达式时，会自动转换为指向数组第一个元素的指针，所以int* p = a;是合法的

	test(a); //传递数组名，实际上传递的是数组的地址
	test2(a); //传递数组名，实际上传递的是数组的地址
	return 0;
}