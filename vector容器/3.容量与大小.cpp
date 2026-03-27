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

	cout << v1.empty() << endl;//为空输出1，不为空输出0
	cout << v1.capacity() << endl;//容量，永远比size大
	cout << v1.size() << endl;//大小，即元素个数

	v1.resize(15, 100);//重新指定大小为15，新增元素值为100。如果不写100，则默认补0
	printVector(v1);
	cout << v1.capacity() << endl;

	v1.resize(5);//重新指定大小为5，超出部分被删除
	printVector(v1);
	cout << v1.capacity() << endl;
}

int main()
{
	test01();

	return  0;
}