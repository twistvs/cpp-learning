#include <iostream>
#include <vector>
#include <algorithm>

//双倍
class Double
{
public:
	int operator() (int a)
	{
		int b = a * 2;
		return b;
	}
};

//打印
class Print
{
public:
	void operator() (int a)
	{
		std::cout << a << std::endl;
	}
};

int main()
{
	std::vector<int> a;
	for (int i = 1; i < 6; i++)
	{
		a.push_back(i);
	}
	std::vector<int> b;
	//目标容器需要预先开辟空间，否则挪不进去
	b.resize(a.size());

	//将a中的内容双倍后给b
	std::transform(a.begin(), a.end(), b.begin(), Double());
	std::for_each(a.begin(), a.end(), Print());     //1，2，3，4，5
	std::for_each(b.begin(), b.end(), Print());     //2，4，6，8，10

	return 0;
}