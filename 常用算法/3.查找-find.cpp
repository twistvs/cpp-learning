#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

//查找内置数据类型（如int）
void test1()
{
	std::vector<int> a;
	for (int i = 1; i < 6; i++)
	{
		a.push_back(i);
	}
	std::vector<int>::iterator it = std::find(a.begin(), a.end(), 7);
	if (it == a.end())
	{
		std::cout << "没找到" << std::endl;
	}
	else
	{
		std::cout << "找到了" << std::endl;
	}
}

class Person
{
public:
	bool operator== (const Person& p)
	{
		if (this->age == p.age && this->name == p.name)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	Person(int age, std::string name)
	{
		this->age = age;
		this->name = name;
	}

	int age;
	std::string name;
};

void test2()
{
	Person p1(18, "aaa");
	Person p2(20, "bbb");
	Person p3(18, "ccc");
	std::vector<Person> a;
	a.push_back(p1);
	a.push_back(p2);
	a.push_back(p3);
	//要在vector中找p2
	std::vector<Person>::iterator it = std::find(a.begin(), a.end(), p2);
	if (it == a.end())
	{
		std::cout << "没找到" << std::endl;
	}
	else
	{
		std::cout << "找到了 " << "age为" << it->age << "name为" << it->name << std::endl;
	}
}

int main()
{
	test2();

	return 0;
}