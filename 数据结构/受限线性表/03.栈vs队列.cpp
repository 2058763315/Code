#include <iostream>
#include"LinkStack.h"
#include"LinkQueue.h"

using namespace std;

int main() {
	LinkQueue queue;
	for (int i = 0; i < 10; i++) queue.push(i);
	LinkStack stack;
	for (int i = 0; i < 10; i++) stack.push(i);
	
	//	queue先进先出
	cout << "queue.top(): " << queue.top() << endl;
	//	stack先进后出
	cout << "stack.top(): " << stack.top() << endl;
	//	queue移除队头，获取队头
	queue.pop();
	cout << "queue.top(): " << queue.top() << endl;
	//	stack移除栈顶，获取栈顶
	stack.pop();
	cout << "stack.top(): " << stack.top() << endl;

	//	queue插入队尾
	queue.push(100);
	cout << "queue.top(): " << queue.top() << endl;
	
	//	stack插入栈顶
	stack.push(100);
	cout << "stack.top(): " << stack.top() << endl;
}