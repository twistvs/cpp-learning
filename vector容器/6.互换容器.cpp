# include <iostream>
# include <vector>
using namespace std;

void printVector(vector<int>& v)
{
	//auto自动推导变量类型，实际上e的类型是vector<int>::iterator
	for (auto e = v.begin(); e != v.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2;
	for (int i = 9; i >= 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	v1.swap(v2);//交换两个容器的元素
	printVector(v1);
	printVector(v2);
}

int main()
{
	test01();
	return  0;
}