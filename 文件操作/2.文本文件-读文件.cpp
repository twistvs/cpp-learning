# include <iostream>
# include <fstream>
# include <string>
using namespace std;

void test01()
{
	//1.包含头文件

	//2.创建流对象
	ifstream ifs;

	//3.打开文件，判断是否打开成功
	ifs.open("text.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//4.读文件

	//char buf[1024] = { 0 };
	//while (ifs >> buf)     //>>会连续读取，在遇到空格换行的时候停止，也就是一次会读一行
	//{
	//	cout << buf << endl;   //每次循环buf都是一行的内容
	//}

	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, 1024))   //getline一次读取一行数据，第一个参数是char*，第二个参数是预留空间
	//{
	//	cout << buf << endl;
	//}

	string buf;
	while (getline(ifs, buf))   //全局函数getline，第一个参数是istream，第二个参数是string
	{
		cout << buf << endl;
	}

	//5.关闭文件
	ifs.close();

}

int main()
{
	test01();

	return 0;
}