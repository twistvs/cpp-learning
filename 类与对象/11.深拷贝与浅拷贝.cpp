#include <iostream>
#include <string>
using namespace std;

//浅拷贝：如果类中有指针，默认的拷贝构造函数会把指针的值（地址）进行拷贝
//深拷贝：如果类中有指针，需要自己定义拷贝构造函数，把指针指向的内容进行拷贝。给p2的堆区数据重新开辟空间，防止两个对象的指针指向同一块内存。

class Person 
{
public:
	Person(int age, int height)
	{
		m_Age = age;
		//将height在堆区开辟空间，m_Height是Height的指针。堆区数据需要手动释放，否则在程序结束后自动释放
		m_Height = new int(height);
	}

	Person(const Person& p)
	{
		m_Age = p.m_Age;
		//浅拷贝，也就是默认的值拷贝
		m_Height = p.m_Height;
	}

	//如果类中开辟了堆区数据，需要自己定义析构函数，释放堆区数据
	~Person()
	{
		if(m_Height != NULL)
		{
			//delete后面接指针，将指针指向的数据释放
			delete m_Height;
			//将指针置为空，防止野指针
			m_Height = NULL;
		}
	}

	int m_Age;
	int* m_Height;
};

class Person2
{
public:
	Person2(int age, int height)
	{
		m_Age = age;
		//将height在堆区开辟空间，m_Height是Height的指针。堆区数据需要手动释放，否则在程序结束后自动释放
		m_Height = new int(height);
	}

	Person2(const Person2& p)
	{
		m_Age = p.m_Age;
		m_Height = new int(*p.m_Height);
		
	}

	//如果类中开辟了堆区数据，需要自己定义析构函数，释放堆区数据
	~Person2()
	{
		if (m_Height != NULL)
		{
			//delete后面接指针，将指针指向的数据释放
			delete m_Height;
			//将指针置为空，防止野指针
			m_Height = NULL;
		}
	}

	int m_Age;
	int* m_Height;
};

int main()
{
	/*Person p1(18, 180);
	Person p2(p1);*/
	//如果使用浅拷贝来拷贝指针m_Height，会导致两个对象的m_Height指向同一块内存，而两个对象的析构函数都会释放这块内存，导致程序崩溃

	Person2 p1(18, 180);
	Person2 p2(p1);
	//深拷贝，两个对象的m_Height指向不同的内存，互不影响
	cout << p1.m_Height << endl;
	cout << p2.m_Height << endl;
	return 0;
}