#include <iostream>
#include <string>
using namespace std;

void test1()
{
	string str1; //默认构造函数，创建一个空字符串
	string str2("Hello, World!"); //使用const char*构造函数
	string str3(5, 'A'); //使用size_t n, char c构造函数，创建一个包含5个'A'的字符串
	string str4 = str2; //使用拷贝构造函数
	cout << "str1: \"" << str1 << "\"" << endl;
	cout << "str2: \"" << str2 << "\"" << endl;
	cout << "str3: \"" << str3 << "\"" << endl;
	cout << "str4: \"" << str4 << "\"" << endl;
}

int main()
{
	char a = 'A';
	char b[] = "Hello, b";
	const char c = 'C';
	const char d[] = "Hello, d";
	const char* e = "Hello, e";
	cout << "Character a: " << a << endl;
	cout << "Character array b: " << b << endl;
	cout << "Constant character c: " << c << endl;
	cout << "Constant character array d: " << d << endl;
	//e虽然是指针，但是const char*类型的指针会自动解引用，不需要加*
	cout << "Constant character pointer e: " << e << endl;

	//string是一个类，内部封装了char*
	//string的构造函数：1.string() 2.string(const char* s) 3.string(size_t n, char c) 4.string(const string& str)
	test1();


	return 0;

}