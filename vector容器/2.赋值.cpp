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

int main()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//用operator=进行赋值
	vector<int>v2;
	v2 = v1;
	printVector(v2);

	//用assign进行赋值
	//区间赋值
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//n个elem赋值
	vector<int>v4;
	v4.assign(10, 100);
	printVector(v4);

	return 0;
}