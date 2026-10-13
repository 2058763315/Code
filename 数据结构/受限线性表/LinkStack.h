#pragma once
class LinkStackNode {
public:
	int data;
	LinkStackNode* next;
	LinkStackNode();
	LinkStackNode(int value);
};

class LinkStack {
protected:
	LinkStackNode* head;
	int size;
public:
	LinkStack();
	~LinkStack();
	void push(int value);	//	入栈
	void pop();	//	出栈
	int top();	//	返回栈顶元素
	int getSize();	//	返回栈大小
	bool empty();	//	判断是否为空
	void clear();	//	清空栈


};