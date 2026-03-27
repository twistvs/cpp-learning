# include <iostream>

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
	test01(s1);
	test01(s2);
	return 0;
}