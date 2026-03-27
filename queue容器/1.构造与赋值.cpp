//队列queue，先进先出
# include <iostream>
# include <queue>

void test01()
{
	//queue不能用花括号直接在构造的时候赋值
	std::queue<int> q;

	//push加入数据
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	//通过front()和back()访问队头和队尾
	std::cout << q.front() << std::endl;
	std::cout << q.back() << std::endl;

	//通过pop()把队头的元素弹出
	q.pop();
	std::cout << q.front() << std::endl;
	std::cout << q.back() << std::endl;

	q.pop();
	std::cout << q.front() << std::endl;
	std::cout << q.back() << std::endl;

	std::cout << q.empty() << std::endl;
}

int main()
{
	test01();
	std::cout << "一二三" << std::endl;
	return 0;
}