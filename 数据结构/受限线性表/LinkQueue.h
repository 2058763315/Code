#pragma once
class LinkQueueNode {
public:
	int data;
	LinkQueueNode* next;
	LinkQueueNode();
	LinkQueueNode(int value);
};

class LinkQueue {
protected:
	LinkQueueNode* head;
	int size;
public:
	LinkQueue();
	~LinkQueue();
	void push(int value);	//	入队
	void pop();	//	出队
	int top();	//	返回队头元素
	int getSize();	//	返回栈大小
	bool empty();	//	判断是否为空
	void clear();	//	清空栈
};