# include <iostream>
# include <string>
using namespace std;

struct Student
{
	string name;
	int age;
};

int main()
{
	//结构体数组是一个以结构体为元素类型的数组
	Student s1[] = {
		{"张三",20},
		{"李四",30},
		{"王五",40}
	};
	cout << "姓名：" << s1[0].name << " 年龄：" << s1[0].age << endl;

	return 0;
}