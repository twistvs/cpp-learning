# include <iostream>
# include <vector>
using namespace std;
//vector是动态的数组，不限定大小，可以存储任意类型的数据
//vector在扩充大小时，不是在原有内存上扩充，而是重新申请一块更大的内存，把原有数据拷贝过去，然后释放原有内存

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
	//无参构造
	vector<int>v1;
	
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printVector(v1);

	//区间构造
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);

	//n个elem构造
	vector<int>v3(10, 100);
	printVector(v3);

	//拷贝构造
	vector<int>v4(v3);
	printVector(v4);
}

int main()
{
	test01();

	return 0;
}