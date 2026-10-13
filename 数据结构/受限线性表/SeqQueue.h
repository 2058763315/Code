#pragma once
#pragma once
#define MAX_SIZE 512

class SeqQueue {
protected:
	int* data;
	int size;
public:
	SeqQueue();
	~SeqQueue();

	void push(int value);	//	入队
	void pop();	//	出队
	int top();	//	返回队头元素
	int getSize();	//	返回栈大小
	bool empty();	//	判断是否为空
	void clear();	//	清空栈
};