# include <iostream>

//1.有继承关系
//2.子类重写父类的虚函数（重写指的是返回值，函数名和参数列表完全一致）
//3.父类指针或引用指向子类对象
class Father {
public:
	virtual void test() {
		std::cout << "调用的Father" << std::endl;
	}
};

class Son1 : public Father{
public:
	void test() {
		std::cout << "调用的Son1" << std::endl;
	}
};

class Son2 : public Father {
public:
	void test() {
		std::cout << "调用的Son2" << std::endl;
	}
};

void test01(Father& f) {
	f.test();
}

int main() {
	Son1 s1;
	Son2 s2;
	test01(s1); //调用的Son1
	test01(s2);   //调用的Son2

	std::cout << sizeof(Father) << std::endl;  //输出为8，也就是一个指针的大小
	return 0;
}