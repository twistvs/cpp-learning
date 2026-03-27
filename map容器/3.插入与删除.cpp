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

//map的插入
void test1()
{
	map<int, int> m1;
	//1.直接用pair类型插入
	m1.insert(pair<int, int>(1, 1));     //写出pair的完整类型
	m1.insert(pair(2, 2));               //不写pair的类型，根据(2, 2)自动推导类型
	m1.insert({ 3, 3 });                 //不写pair，花括号自动识别为pair

	//2.用make_pair函数插入
	map<int, int> m2;
	m2.insert(make_pair(4, 4));       //std::makepair返回一个pair

	//3.用map的value_type来代替pair<int, int>
	map<int, int> m3;
	m3.insert(map<int, int>::value_type(5, 5));

	//4.用key插入
	map<int, int>m4;
	m4[6] = 6;                     //不推荐用来插入，key索引最好用来访问值
	cout << m4[6] << endl;

	printmap(m1);
	printmap(m2);
	printmap(m3);
	printmap(m4);
}

//map的删除
void test2()
{
	map<int, int> m1;
	m1.insert({ 1, 1 });
	m1.insert({ 2, 2 });
	m1.insert({ 3, 3 });
	m1.insert({ 4, 4 });
	m1.insert({ 5, 5 });

	//1.用迭代器删除
	m1.erase(m1.begin());

	//2.用key删除
	m1.erase(3);
	printmap(m1);

	//3.删除一个范围
	m1.erase(m1.begin(), m1.end());
	printmap(m1);

	//4.清空
	m1.clear();
}

int main()
{

	/*test1();*/
	test2();
	return 0;
}