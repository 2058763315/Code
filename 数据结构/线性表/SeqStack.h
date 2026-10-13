#pragma once
#include "DynamicArray.h"

class SeqStack : protected DynamicArray{
	/*
		没有定义构造函数时使用系统提供的默认构造函数，默认构造函数没有参数。
		当调用无参构造函数时，父类的无参构造函数会被自动调用。
		所以，SeqStack没有显示定义构造函数，父类DynamicArray的无参构造函数会被调用。		
	*/	

public:	
	void push(int value);	//	入栈
	void pop();	//	出栈
	int top();	//	返回栈顶元素
	int getSize();	//	返回栈大小
	bool empty();	//	判断是否为空
	void clear();	//	清空栈
};