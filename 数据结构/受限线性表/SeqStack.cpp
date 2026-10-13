#include "SeqStack.h"

SeqStack::SeqStack() {
	data = new int[MAX_SIZE];
	size = 0;
}

SeqStack::~SeqStack() {
	delete[] data;	
}

void SeqStack::push(int value) {
	if (size == MAX_SIZE) throw "Stack Overflow";	
	data[size++] = value;	
}

void SeqStack::pop() {
	if(size <= 0) throw "Stack is Empty";
	size--;
}

int SeqStack::top() {
	if (size <= 0) throw "Stack is Empty";
	return data[size -1];
}

int SeqStack::getSize() {
	return size;
}

bool SeqStack::empty() {
	return size == 0;
}

void SeqStack::clear() {
	size = 0;
}