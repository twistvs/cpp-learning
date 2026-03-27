# include <iostream>
# include <string>
using namespace std;

struct Student
{
	string name;
	int age;
};

struct Teacher
{
	string name;
	int age;
	Student s;//结构体嵌套结构体
};

int main()
{
	Teacher t;
	t.name = "张老师";
	t.age = 40;
	t.s.name = "小明";
	t.s.age = 20;
	cout << "老师姓名：" << t.name << " 年龄：" << t.age << "学生姓名" << t.s.name<< "学生年龄"<< t.s.age<< endl;
	return 0;
}