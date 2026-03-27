# include <iostream>
using namespace std;

class MyAdd
{
public:
	int count;
	MyAdd() :count(0){}

	int operator()(int a, int b)
	{
		count++;
		return a + b;
	}
};

int doAdd(MyAdd& my_add, int a, int b)
{
	int add = my_add(a, b);
	return add;
}

int main()
{
	MyAdd my_add;
	cout << my_add(1, 5) << endl;
	my_add(2, 4);
	my_add(3, 2);
	cout << doAdd(my_add, 10, 20) << endl;
	cout << "my_add一共执行了" << my_add.count << "次" << endl;

	return 0;
}