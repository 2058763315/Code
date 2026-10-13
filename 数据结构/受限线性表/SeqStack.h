#pragma once
#define MAX_SIZE 512

class SeqStack {
protected:
	int* data;
	int size;
public:
	SeqStack();
	~SeqStack();
	
	void push(int value);	//	入栈
	void pop();	//	出栈
	int top();	//	返回栈顶元素
	int getSize();	//	返回栈大小
	bool empty();	//	判断是否为空
	void clear();	//	清空栈
};