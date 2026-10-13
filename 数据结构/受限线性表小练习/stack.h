#pragma once
#include "DynamicArray.h"
#include "LinkList.h"

class Stack {
public:
	virtual void push(int value) = 0;
	virtual void pop() = 0;
	virtual int top() = 0;
	virtual int getSize() = 0;
};

class SeqStack : public Stack, private DynamicArray {
public:
	void push(int value);
	void pop();
	int top();
	int getSize();
};

class LinkStack : public Stack, private LinkList {
public:
	void push(int value);
	void pop();
	int top();
	int getSize();
};