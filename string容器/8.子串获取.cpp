# include <iostream>
# include <string>
using namespace std;

void test1()
{
	string email = "twistmahua@gmail.com";
	int pos = email.find('@');

	//从0开始pos个字符
	string username = email.substr(0, pos);
	//从pos+1开始到结尾
	string domain = email.substr(pos + 1);
	cout << "Username: " << username << endl;
	cout << "Domain: " << domain << endl;

}

int main()
{
	string str1 = "abcdefg";
	string sub1 = str1.substr(1, 3); //输出bcd
	cout << sub1 << endl;

	test1();
	return 0;
}