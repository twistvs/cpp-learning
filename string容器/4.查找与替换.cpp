# include <iostream>
#include <string>
using namespace std;


int main()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	cout << pos << endl; // 输出 3

	//find是从左向右查找，rfind是从右向左查找
	int pos2 = str1.rfind("de");
	cout << pos2 << endl;// 输出 7

	//把bcd换成1111
	str1.replace(1, 3, "1111");
	cout << str1 << endl;


	return 0;
}