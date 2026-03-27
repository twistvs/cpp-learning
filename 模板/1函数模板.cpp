# include <iostream>
using namespace std;

//函数中的类型可以用typename，值和返回值也可以虚拟，甚至可以在虚拟的值前面用虚拟的类型
template <typename T,T n>
 T nplus(T a)
{
	 return a * n;
}

void test()
{
	//当模板函数被调用时，用<>来确定虚拟的类型和值，这样就确定了一个函数
	auto a_nplus = nplus<int, 5>(10);
	cout << "a_nplus: " << a_nplus << endl;
}

int main()
{
	test();
	return 0;
}