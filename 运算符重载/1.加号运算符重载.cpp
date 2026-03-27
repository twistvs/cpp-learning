# include <iostream>
# include <array>
using namespace std;

class Person
{
public:
	Person() {}
	Person(int a, int b) :a(a), b(b) {}

	//类内的加号重载
	Person operator+ (const Person& p)
	{
		Person temp;
		temp.a = p.a + this->a;
		temp.b = p.b + this->b;
		return temp;
	}

	int a;
	int b;
};

void test1()
{
	Person p1(10, 10);
	Person p2(20, 20);
	//由p1调用operator+函数，将p2作为参数传递进去
	Person p3 = p1 + p2;
	cout << "p3.a = " << p3.a << endl;
	cout << "p3.b = " << p3.b << endl;
}

//类外的乘号重载
array<int, 5> operator* (const array<int, 5>& arr, int factor)
{
	array<int, 5> temp = arr;
	for (int i = 0; i < temp.size(); i++)
	{
		temp[i] *= factor;
	}
	return temp;
}

void test2()
{
	array<int, 5> arr1 = { 1, 2, 3, 4, 5 };
	//arr1和10只有满足指定的类型，才能调用operator*函数
	arr1 = arr1 * 10;
	for (int i = 0; i < arr1.size(); i++)
	{
		cout << arr1[i] << endl;
	}
}

int main()
{
	test1();
	test2();
	return 0;
}