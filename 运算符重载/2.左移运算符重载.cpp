# include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<< (ostream& out, const Person& p);
private:
	int age = 18;
};

ostream& operator<< (ostream& out, const Person& p)
{
	out << "age = " << p.age ;
	return out;
}

int main()
{
	Person p;
	cout << p << "666" << endl;
	return 0;
}