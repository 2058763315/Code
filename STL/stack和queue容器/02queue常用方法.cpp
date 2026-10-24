#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	cout << "q.empty(): " << q.empty() << endl;
	q.push(10);
	q.push(20);
	q.push(30);

	cout << "q.front(): " << q.front() << endl;
	//  back() 返回队尾第一个元素
	cout << "s.back(): " << q.back() << endl;
	//  pop() 从移除队头第一个元素
	q.pop();
	cout << "s.front(): " << q.front() << endl;

	//  queue(const queue& stk) 拷贝构造函数
	queue<int> q1(q);
	cout << "s1.size(): " << q1.size() << endl;

	//  赋值，queue& operator=(const queue& stk) 重载赋值运算符
	queue<int> q2;
	cout << "q2.size(): " << q2.size() << endl;
	q2 = q;
	cout << "q2.size(): " << q2.size() << endl;
	return 0;
}