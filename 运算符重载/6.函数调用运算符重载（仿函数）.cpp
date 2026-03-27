# include <iostream>
using namespace std;

class Person
{
public:
	int age;
	Person(int age)
	{
		this->age = age;
	}

	void operator() ()
	{
		cout << age << endl;
	}
};

int main()
{
	Person p1(18);
	p1();
	return 0;
}