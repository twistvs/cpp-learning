# include <iostream>
using namespace std;

class Person
{
public:
	int* age;
	Person(){}
	Person(int age)
	{
		this->age = new int(age);  //类内的指针age指向堆区的一块内存
	}

	~Person()
	{
		if (*age != NULL)
		{
			//如果age指向的地方不为空，则释放age指向的内存，并让age变成空指针
			delete age;
			age = NULL;
		}
	}

	//手动实现深拷贝
	Person& operator= (Person& p)
	{
		//如果this的age初始化过（即已经指向了一块内存），那么需要先把这块内存释放掉
		if (age != NULL)
		{
			delete age;
		}
		//重新开一块新区域，值为p的age指向的值
		age = new int(*p.age);
		//将this返回，就可以实现链式调用
		return *this;
	}
};

int main()
{
	Person p1(18);
	Person p2(20);
	Person p3(22);
	p3 = p2 = p1;
	cout << *p3.age << *p2.age << *p1.age << endl;    //都会变成18
	
	return 0;
}