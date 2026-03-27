# include <iostream>
using namespace std;


int main()
{
	int a = 10;
	int b = 20;
	//左定值，右定向
	//当const在左边的时候，是常量指针，指针指向的值不可修改
	const int* p1 = &a;
	p1 = &b; //可以修改指针的指向
	// *p1 = 20; //错误，不能通过p1修改a的值

	//当const在右边的时候，是指针常量，指针的指向不可修改
	int* const p2 = &a;
	*p2 = 30; //可以通过p2修改a的值
	cout << "a = " << a << endl; //a = 30
	//  p2 = &b; //错误，不能修改指针的指向

	return 0;
}