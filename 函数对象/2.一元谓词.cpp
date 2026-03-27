# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

class Greater5
{
public:
	bool operator() (int a)
	{
		if (a > 5)
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
	vector<int> a;
	//给a填了十个值
	for (int i = 0; i < 10; i++)
	{
		a.push_back(i);
	}

	Greater5 greater5;
	//find_if的返回值为迭代器
	//这里的参数greater5虽然并没有带上重载的()，但是find_if自动地把迭代器指向的元素传给了greater5(int a)
	vector<int>::iterator it = find_if(a.begin(), a.end(), greater5);
	if (it == a.end())
	{
		cout << "没有找到满足条件的元素" << endl;
	}
	else
	{
		cout << "找到了满足条件的元素，且该元素的值为" << *it << endl;
 	}
	
	return 0;
}