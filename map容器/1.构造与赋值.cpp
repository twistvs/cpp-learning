# include <iostream>
# include <map>
using namespace std;


void printmap(map<int, int>& m)
{
	//it是迭代器
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}
}

void test1()
{
	//默认构造函数
	map<int, int> map1;
	map1.insert({ 1, 1 });        //map中的元素是pair类型的
	printmap(map1);

	//拷贝构造函数
	map map2(map1);
	printmap(map2);

	//赋值操作
	map <int, int> map3;
	map3 = map2;
	printmap(map3);
}

int main()
{
	test1();

	return 0;
}