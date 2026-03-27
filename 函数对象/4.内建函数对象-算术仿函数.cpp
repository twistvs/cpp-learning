# include <iostream>
# include <functional>

void test1()
{
	std::negate<int> n;
	std::cout << n(20) << std::endl;          //-20
}

void test2()
{
	std::plus<int> p;
	std::cout << p(10, 20) << std::endl;    //30
}

int main()
{
	test1();
	test2();
	return 0;
}