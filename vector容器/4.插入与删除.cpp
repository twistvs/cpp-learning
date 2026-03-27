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
		v1.push_back(i);//尾部插数
	}
	printVector(v1);

	v1.pop_back();//尾部删数
	printVector(v1);

	v1.insert(v1.begin(), 100);//在迭代器位置前插入元素
	printVector(v1);

	v1.insert(v1.begin(), 2, 200);//在迭代器位置前插入n个elem元素
	printVector(v1);

	v1.erase(v1.begin());//删除迭代器位置的元素
	printVector(v1);

	v1.clear();//清空容器
}

int main()
{
	test01();
	return 0;
}