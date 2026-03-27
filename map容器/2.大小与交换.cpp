# include <iostream>
# include <map>
using namespace std;

//大小
void test1()
{
	map<int, int> m1;
	m1.insert({ 1, 1 });
	if (m1.empty())
	{
		cout << "m1是空的" << endl;
	}
	else
	{
		cout << "m1不是空的" << endl;
		cout << "m1的大小为" << m1.size() << endl;
	}
 }

//交换
void test2()
{
	map <int, int> m1;
	m1.insert({ 1, 1 });

	map <int, int> m2;
	m2.insert({ 2, 2 });

	m1.swap(m2);
	cout << m1.begin()->first << endl;
	cout << m2.begin()->first << endl;
}

int main()
{
	test1();
	test2();
	return 0;
}