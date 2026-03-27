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
	map<int, int> m1;
	m1.insert({ 1, 1 });
	m1.insert({ 2, 2 });
	m1.insert({ 3, 3 });
	m1.insert({ 4, 4 });
	
	//find返回值是迭代器
	map<int, int>::iterator pos = m1.find(3);
	m1.erase(pos);
	printmap(m1);
	map<int, int>::iterator pos2 = m1.find(20);
	if (pos2 == m1.end())                          //如果找不到指定的元素，会返回end迭代器，end是最后一个元素的下一个位置
	{
		cout << "未找到key为20的元素" << endl;
	}

	//count统计key的个数
	int num = m1.count(2);
	cout << num << endl;            //由于map的key不允许重复，所以要么是0，要么是1；multimap可以统计出多个key
}

int main()
{

	test1();

	return 0;
}