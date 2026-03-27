# include <iostream>
# include <string>
using namespace std;

//结构体变量不是指针，而是一块内存空间，需要用&符号取地址。
struct Student
{
	string name;
	int age;
};

int main()
{
	Student s1 = { "张三",20 };
	Student* p = &s1; //取结构体变量的地址，赋值给结构体指针
	cout << "姓名：" << p->name << " 年龄：" << p->age << endl; //通过指针访问成员
	return 0;
}