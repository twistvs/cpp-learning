#include <iostream>
#include <string>
using namespace std;

//通过点距离圆心的距离来判断点是否在圆内（距离大于半径在圆外，等于半径在圆上，小于半径在圆内）


class Point {
public:
	//设置横坐标
	void setX(int x)
	{
		m_X = x;
	}
	//设置纵坐标
	void setY(int y)
	{
		m_Y = y;
	}
	//获取横坐标
	int getX()
	{
		return m_X;
	}
	//获取纵坐标
	int getY()
	{
		return m_Y;
	}

private:
	int m_X;
	int m_Y;
};

class Circle {
public:
	//设置半径
	void setR(int r)
	{
		m_R = r;
	}
	//设置圆心    并不对实参进行修改，所以用值传递而不是引用传递
	void setCenter(Point center)
	{
		m_Center = center;
	}
	//获取半径
	int getR()
	{
		return m_R;
	}
	//获取圆心    返回值为Point类
	Point getCenter()
	{
		return m_Center;
	}


private:
	int m_R; //半径
	Point m_Center; //圆心 类作为成员变量
};

//用引用传递是为了节省内存，效果和值传递是一样的。但是要注意，用了引用传递之后要避免错误的修改实参
void isPointInCircle(Point& p, Circle& c)
{
	//距离的平方
	int distance = (p.getX() - c.getCenter().getX())* (p.getX() - c.getCenter().getX()) + (p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY());
	//半径的平方    用两个平方来比，就不需要给左边开方了
	int rDistance = c.getR() * c.getR();

	if (distance < rDistance)
	{
		cout << "点在圆内" << endl;
	}
	else if (distance == rDistance)
	{
		cout << "点在圆边上" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}

int main()
{
	//设置点
	Point p;
	p.setX(2);
	p.setY(2);

	//设置圆心
	Point center;
	center.setX(0);
	center.setY(0);
	//设置圆
	Circle c;
	c.setCenter(center);
	c.setR(2);

	isPointInCircle(p, c);

	return 0;
}