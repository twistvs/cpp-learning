# include <iostream>
# include <string>
using namespace std;

int main()
{
	string str1; //默认构造函数，创建一个空字符串
	str1 = "Hello"; //用字符串字面值赋值
	
	string str2;
	str2 = str1; //用另一个string对象赋值

	string str3;
	str3 = 'a';  //用单个字符赋值

	string str4;
	str4.assign("World"); //用const char*赋值

	string str5;
	str5.assign(str1); //用另一个string对象赋值

	string str6;
	str6.assign(3, 'X'); //用n个字符c赋值

	string str7;
	str7.assign(str4, 3);

	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << "str3: " << str3 << endl;
	cout << "str4: " << str4 << endl;
	cout << "str5: " << str5 << endl;
	cout << "str6: " << str6 << endl;
	cout << "str7: " << str7 << endl;
	
	return 0;
}