#include <iostream>
#include <string>
using namespace std;

//立方体类设计
//1.创建立方体类
//2.设计属性：长、宽、高
//3.设计行为：获取总面积和体积
//4.分别利用全局函数和成员函数来判断两个立方体是否相等

class Cube
{
public:
	//设置长宽高
	void setLength(int length)
	{
		m_Length = length;
	}
	void setWidth(int width)
	{
		m_Width = width;
	}
	void setHeight(int height)
	{
		m_Height = height;
	}
	//获取长宽高
	int getLength()
	{
		return m_Length;
	}
	int getWidth()
	{
		return m_Width;
	}
	int getHeight()
	{
		return m_Height;
	}

	//计算并获取总面积
	int calculateS()
	{
		return 2 * (m_Length * m_Width + m_Length * m_Height + m_Width * m_Height);
	}

	//计算并获取体积
	int calculateV()
	{
		return m_Length * m_Width * m_Height;
	}

	//利用成员函数来判断两个立方体是否相等，如果是c1实例用这个函数，那么c1的属性就可以直接访问，而c2的属性就需要通过形参来访问
	bool isSame(Cube& c)
	{
		if (m_Length == c.m_Length && m_Width == c.m_Width && m_Height == c.m_Height)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

private:
	int m_Length; //长
	int m_Width;  //宽
	int m_Height; //高
};

//返回值为bool类型的全局函数，判断两个立方体是否相等
//这里使用了引用传递，把&删掉也可以，只不过会有一次拷贝构造函数的调用，效率低一些
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getHeight() == c2.getHeight() && c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Cube c1;
	c1.setLength(3);
	c1.setWidth(4);
	c1.setHeight(5);
	cout << "c1的总面积为：" << c1.calculateS() << endl;
	cout << "c1的体积为： " << c1.calculateV() << endl;

	Cube c2;
	c2.setLength(3);
	c2.setWidth(4);
	c2.setHeight(5);

	//调用全局函数来判断两个立方体是否相等，需要传c1和c2两个参数
	if (isSame(c1, c2))
	{
		cout << "c1和c2相等" << endl;
	}
	else
	{
		cout << "c1和c2不相等" << endl;
	}

	//调用成员函数来判断两个立方体是否相等，只需要传c2一个参数，因为c1调用这个函数
	if (c1.isSame(c2))
	{
		cout << "c1和c2相等" << endl;
	}
	else
	{
		cout << "c1和c2不相等" << endl;
	}

	return 0;
}