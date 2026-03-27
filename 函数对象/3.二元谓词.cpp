# include <iostream>
# include <algorithm>
# include <vector>

//输出vector的函数
void print_vec(std::vector<int>& a)
{
	for (auto i = a.begin(); i != a.end(); i++)
	{
		std::cout << *i << std::endl;         
	}
}

class MyCompare
{
public:
	bool operator()(int val1, int val2)
	{
		if (val1 > val2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	std::vector<int> a;
	for (int i = 5; i >= 1; i--)
	{
		a.push_back(i * 10);
	}
	print_vec(a);   //50, 40, 30, 20, 10

	std::sort(a.begin(), a.end());    
	print_vec(a);     //在sort后，变成了从小到大排列；10,20,30,40,50

	std::sort(a.begin(), a.end(), MyCompare());    //匿名函数对象，不需要单独创建一个对象
	print_vec(a);     //在自定排序规则后，变成了从大到小排列：50,40,30,20,10

	return 0;
}