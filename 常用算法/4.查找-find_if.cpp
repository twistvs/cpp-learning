#include <iostream>
#include <algorithm>
#include <vector>

class Greater5
{
public:
	bool operator() (int a)
	{
		if (a > 5)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

class Person
{
public:
	Person(int a, int h):age(a), height(h) {}
	
	int age;
	int height;
};

class BigPerson
{
public:
	bool operator() (const Person& p)
	{
		if (p.age > 18 && p.height > 180)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

//查找内置数据类型
void test1()
{
	std::vector<int> a;
	for (int i = 0; i < 11; i++)
	{
		a.push_back(i);
	}

	std::vector<int>::iterator it = std::find_if(a.begin(), a.end(), Greater5());
	if (it == a.end())
	{
		std::cout << "没找到" << std::endl;
	}
	else
	{
		std::cout << "找到了" << std::endl;
	}
}

//查找自定义数据类型
void test2()
{
	std::vector<Person> a;
	Person p1(15, 155);
	Person p2(20, 190);
	Person p3(19, 188);
	a.push_back(p1);
	a.push_back(p2);
	a.push_back(p3);

	std::vector<Person>::iterator it = std::find_if(a.begin(), a.end(), BigPerson());
	if (it == a.end())
	{
		std::cout << "没找到" << std::endl;
	}
	else
	{
		std::cout << "age为" << it->age << ",height为" << it->height << std::endl;
	}
}

int main()
{
	test2();
	return 0;
}