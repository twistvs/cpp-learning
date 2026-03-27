# include <iostream>;
# include <string>
using namespace std;

int main()
{
	string str1 = "Hello";
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1[i];
	}
	cout << endl;

	for (int j = 0; j < str1.size(); j++)
	{
		cout << str1.at(j);
	}
	cout << endl;

	str1[0] = 'h';
	str1.at(1) = 'a';
	cout << str1 << endl;

	return 0;
}