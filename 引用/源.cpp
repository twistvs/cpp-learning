#include <iostream>
#include <string>
using namespace std;



int main()
{
	int c = 10;
	int* a = &c;
	cout << "a = " << a << endl; // a = 0x7ffee3b8c9ac
}