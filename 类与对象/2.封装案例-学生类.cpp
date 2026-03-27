#include <iostream>;
#include <string>;
using namespace std;


class Student
{
public://公共权限

	//属性与行为统称为成员
	//属性（成员变量/成员属性）
	string m_Name; //姓名
	int m_ID; //学号

	//行为（成员函数/成员方法）
	void showStudent()
	{
		cout << "姓名：" << m_Name << " 学号：" << m_ID << endl;
	}

	//通过行为来给属性赋值
	void setName(string name)
	{
		m_Name = name;
	}
};


int main()
{
	//创建学生对象
	Student s1;
	//直接给属性赋值
	s1.m_Name = "张三";
	s1.m_ID = 101;
	//调用显示学生信息函数
	s1.showStudent();

	Student s2;
	//通过行为来给属性赋值
	s2.setName("李四");
	s2.m_ID = 102;
	s2.showStudent();

	return 0;
}