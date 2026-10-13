#include "SeqStack.h"

//	入栈
void SeqStack::push(int value) {
	//	调用父类的pushBack方法。
	pushBack(value);
}

//	出栈
void SeqStack::pop() {
	popBack();
}

//	返回栈顶元素
int SeqStack::top() {
	return end();
}

//	返回栈大小
int SeqStack::getSize() {
	return DynamicArray::getSize(); //	访问父类的getSize()方法。
}
//	判断是否为空
bool SeqStack::empty() {
	return size == 0;
}
//	清空栈
void SeqStack::clear() {
	size = 0;
}