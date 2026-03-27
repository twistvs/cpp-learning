#include <iostream>
#include <vector>
#include <algorithm>

void test1()
{
	std::vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);

	if (std::binary_search(a.begin(), a.end(), 3))
	{
		std::cout << "сп3" << std::endl;
	}
	else
	{
		std::cout << "ц╩3" << std::endl;
	}
}

int main()
{
	test1();
	return 0;
}