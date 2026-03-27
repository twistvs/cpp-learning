#include <iostream>
# include <string>
using namespace std;

int main()
{
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << str1 << endl;

	str1 += ':';
	cout << str1 << endl;

	str1 += "lol dnf";
	cout << str1 << endl;

	string str2 = "I";
	str2.append(" like ");
	cout << str2 << endl;

	string str3 = "playing game";
	str2.append(str3);
	cout << str2 << endl;

	string str4 = " lol dnf";
	//从0开始4个字符
	str2.append(str4, 0, 4);
	cout << str2 << endl;

	return 0;
}