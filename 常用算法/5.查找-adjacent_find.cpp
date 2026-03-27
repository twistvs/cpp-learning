#include <iostream>
#include <algorithm>
#include <string>

void test1()
{
	std::string s;
	s = "abacbnmqiqbbccc";
	std::string::iterator it = std::adjacent_find(s.begin(), s.end());
	if (it == s.end())
	{
		std::cout << "没找到" << std::endl;
	}
	else
	{
		std::cout << "重复的是" << *it << std::endl;
	}
}

int main()
{
	test1();
	return 0;
}