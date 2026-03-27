# include <iostream>
# include <string>
using namespace std;

struct Student
{
	string name;
	int age;
};

//值传递
void printstudentInfo(Student s)
{
	cout << "姓名：" << s.name << " 年龄：" << s.age << endl;
}

//地址传递
void printstudentInfo2(Student* s)
{
	cout << "姓名：" << s->name << " 年龄：" << s->age << endl;
}

void printstudentInfo3(Student& s)
{
	cout << "姓名：" << s.name << " 年龄：" << s.age << endl;
}

int main()
{
	Student s1 = { "张三",20 };
	printstudentInfo(s1); //值传递
	printstudentInfo2(&s1); //地址传递
	printstudentInfo3(s1); //引用传递
	return 0;
}