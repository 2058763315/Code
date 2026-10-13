#include <iostream>
#include "DynamicArray.h"
using namespace std;

DynamicArray::DynamicArray() {
	capacity = 5;
	data = new int[capacity];  //  申请5个int型空间，不进行初始化
	size = 0;
}

DynamicArray::DynamicArray(int n) {
	capacity = n;
	data = new int[capacity] {};  //  申请n个int型空间，并初始化为默认值
	size = n;
}

DynamicArray::~DynamicArray() {
	if (data != NULL) {
		delete[] data;
	}
	data = NULL;
}

void DynamicArray::print() {
	for (int i = 0; i < size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}


int DynamicArray::getSize() {
	return size;
}

int DynamicArray::getCapacity() {
	return capacity;
}

void DynamicArray::pushBack(int value) {
	if (size == capacity) {
		capacity += capacity / 2 + 1;
		int* p = new int[capacity + 1];
		for (int i = 0; i < size; i++) {
			p[i] = data[i];
		}
		delete[] data;
		data = p;
	}

	data[size] = value;
	size++;
}

void DynamicArray::insertByIndex(int idx, int value) {
	if (size == capacity) {
		capacity += capacity / 2 + 1;
		int* p = new int[capacity];
		for (int i = 0; i < size; i++) {
				p[i] = data[i];
		}
		delete[] data;
		data = p;
	}
	for (int i = size - 1; i > idx; i--) {
		data[i + 1] = data[i];
	}

	data[idx] = value;
	size++;
}

int DynamicArray::getValueByIndex(int idx) {
	try {
		if(idx < 0 || idx >= size) throw "非法位置";
	}
	catch (const char* msg) {
		cout << msg << endl;
	}
	return data[idx];
}

int DynamicArray::front() {
	return data[0];
}
int DynamicArray::end() {
	return data[size - 1];
}

void DynamicArray::popBack() {
	if (size > 0) size--;
}

void DynamicArray::deleteByIndex(int idx) {
	try {
		if (idx < 0 || idx >= size) throw "非法位置";
	}
	catch (const char* msg) {
		cout << msg << endl;
	}

	for (int i = idx; i < size - 1; i++) {
		data[i] = data[i +1];
	}
	size--;
}