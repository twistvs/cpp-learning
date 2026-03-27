# include <iostream>
# include <string>
using namespace std;

template <typename nametype, typename agetype>
class Student
{
public:
	Student(nametype name, agetype age): m_name(name), m_age(age){}
	nametype m_name;
	agetype m_age;
};

int main()
{
	Student<string, int> s1("Alice", 20);
	cout << s1.m_age << endl;
	return 0;
}