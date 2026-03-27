#include <iostream>
#include <algorithm>
#include <vector>

class print
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
	//行为函数既可以是函数指针，也可以是函数对象
	std::for_each(a.begin(), a.end(), print());

	return 0;
}