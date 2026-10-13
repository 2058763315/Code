#include "stack.h"

void SeqStack::push(int value) {
	pushBack(value);
}

void SeqStack::pop() {
	popBack();
}

int SeqStack::top() {
	return getBack();
}

int SeqStack::getSize() {
	return DynamicArray::getSize();
}

void LinkStack::push(int value) {
	pushFront(value);
}

void LinkStack::pop() {
	popFront();
}

int LinkStack::top() {
	return getValue(0);
}

int LinkStack::getSize() {
	return LinkList::getSize();
}