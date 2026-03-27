# include <iostream>
# include <fstream>//1.包含头文件
using namespace std;


int main()
{
	//2.创建流对象
	ofstream ofs;

	//3.打开文件
	ofs.open("text.txt", ios::out);

	//4.写文件
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;

	//5.关闭文件
	ofs.close();
	return 0;
}