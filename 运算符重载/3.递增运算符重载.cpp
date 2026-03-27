# include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<< (ostream& out, const Person& p);
private:
	int age = 18;

public:
	//++(++p)，如果返回值是值而不是引用，++p就无法再将原本的p中的age加一，所以需要返回引用
	Person& operator++()
	{
		//左递增是先加再返回
		age++;
		return *this;
	}

	Person operator++(int)
	{
		//右递增是先返回再加
		Person temp = *this;
		age++;
		return temp;
	}
};

ostream& operator<< (ostream& out, const Person& p)
{
	out << "age = " << p.age;
	return out;
}

int main()
{
	Person p;
	cout << ++p << endl;
	cout << ++(++p) << endl;

	Person p2;
	cout << p2++ << endl;
	cout << p2 << endl;

	return 0;
}