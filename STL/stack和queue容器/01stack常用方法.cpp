#include <iostream>
#include <stack>
using namespace std;

int main() {

	stack<int> s;
	//  empty() 判断栈是否为空
	cout << "s.empty(): " << s.empty() << endl;
	//  push(element) 向栈顶添加元素
	s.push(1);
	s.push(10);
	s.push(100);
	cout << "s.size(): " << s.size() << endl;

	//  top() 返回栈顶第一个元素
	cout << "s.top(): " << s.top() << endl;
	//  pop() 从栈顶移除第一个元素
	s.pop();
	cout << "s.top(): " << s.top() << endl;

	//  stack(const stack& stk) 拷贝构造函数
	stack<int> s1(s);
	cout << "s1.size(): " << s1.size() << endl;

	//  赋值，stack& operator=(const stack& stk) 重载赋值运算符
	stack<int> s2;
	cout << "s2.size(): " << s2.size() << endl;
	s2 = s;
	cout << "s2.size(): " << s2.size() << endl;
	return 0;
}