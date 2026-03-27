#include <iostream>
#include <string>
using namespace std;

//结构体变量s1不是指针，而是一个8字节的内存空间，sizeof(Student) = 8，如果要取s1的地址，需要用&符号。而数组名本身就是地址，不需要用&符号。
struct Student
{
	string name;
	int age;
}s3;

int main()
{
	//1.先定义再初始化
	Student s1;
	s1.name = "张三";
	s1.age = 20;

	//2.结构体可以直接按照变量的顺序进行初始化
	Student s2 = { "张三",20 };
	cout << "姓名：" << s1.name << " 年龄：" << s1.age << endl;

	//3.定义结构体的时候顺便创建一个结构体变量
	s3.name = "李四";
	s3.age = 30;
	return 0;
}