#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14;  //常量Π

//设计一个圆类，求圆的周长

//创建一个类
class Circle
{
	//访问权限
public: //公共权限

	//属性
	int m_r; //半径


	//行为
	double calculateZC() //计算周长函数
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	//创建圆对象
	Circle c1;
	//给属性赋值
	c1.m_r = 10;

	//调用计算周长函数
	//这里的calculateZC()，没有传参，但是还是用到了m_r，因为m_r是对象的属性
	cout << "圆的周长为：" << c1.calculateZC() << endl;
	Circle c2;
	c2.m_r = 40;
	cout << "二号圆的周长为：" << c2.calculateZC() << endl;

	return 0;
}