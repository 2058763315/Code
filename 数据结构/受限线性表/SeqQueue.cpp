#include "SeqQueue.h"

SeqQueue::SeqQueue() {
	data = new int[MAX_SIZE];
	size = 0;
}

SeqQueue::~SeqQueue() {
	delete[] data;
}
//	插入队尾
void SeqQueue::push(int value) {
	if (size == MAX_SIZE) throw "Queue Overflow";
	data[size++] = value;
}
//	移除队都元素
void SeqQueue::pop() {
	if (size <= 0) throw "Queue is Empty";
	for (int i = 0; i < size - 1; i++) data[i] = data[i + 1];
	size--;
}
//	返回队头
int SeqQueue::top() {
	if (size <= 0) throw "Stack is Empty";
	return data[0];
}

int SeqQueue::getSize() {
	return size;
}

bool SeqQueue::empty() {
	return size == 0;
}

void SeqQueue::clear() {
	size = 0;
}