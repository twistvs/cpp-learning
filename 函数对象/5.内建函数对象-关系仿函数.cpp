#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

void print_vec(std::vector<int>& a)
{
	for (auto it = a.begin(); it != a.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}

int main()
{
	std::vector<int> a;
	for (int i = 1; i < 6; i++)
	{
		a.push_back(i * 10);
	}
	std::sort(a.begin(), a.end(), std::greater<int>());
	print_vec(a);

	return 0;
}