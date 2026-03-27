# include<iostream>
using namespace std;

class Person
{
public:
	int age;
	Person(int age)
	{
		this->age = age;
	}

	bool operator== (Person& p)
	{
		if (this->age == p.age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

void test1(Person& p1, Person& p2)
{
	if (p1 == p2)
	{
		cout << "两者是相等的" << endl;
	}
	else
	{
		cout << "两者是不等的" << endl;
	}
}

int main()
{
	Person p1(18);
	Person p2(20);
	test1(p1, p2);

	return 0;
}