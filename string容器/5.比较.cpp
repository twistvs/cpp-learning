# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
using namespace std;

int main()
{
	string str1 = "apple";
	string str2 = "apple";
	cout << str1.compare(str2) << endl; // 输出 0，表示相等

	string str3 = "Apple";
	cout << str1.compare(str3) << endl; // 输出1，表示 str1 大于 str3

	string str4 = "banana";
	cout << str1.compare(str4) << endl; // 输出-1，表示 str1 小于 str4

	string str5 = "applepie";
	//将str5的前5个字符与"apple"比较，如果相等则返回0
	cout << str5.compare(0, 5, "apple") << endl; // 输出 0，表示相等
	return 0;

	vector <int> v1 = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };

	std::sort(v1.begin(), v1.end());
	for (const auto& elem : v1) {
		cout << elem << " ";
	}
}