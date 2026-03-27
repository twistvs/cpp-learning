# include <iostream>
# include <string>
using namespace std;


int main()
{
	string str1 = "hello";
	//在索引1的前面插入字符串"111"
	str1.insert(1, "111");
	cout << str1 << endl;

	str1.erase(1, 3); //从索引1开始删除3个字符，包括索引1
	str1.erase(1);//从1开始把后面全部删掉
	cout << str1 << endl;

	return 0;
}