#pragma once
class DynamicArray {
protected:
	int* data;			//  指向存放数据元素的内存空间
	int size;			//  动态数组的大小
	int capacity;		//  动态数组的容量
public:
	//  构造
	DynamicArray();
	DynamicArray(int n);
	~DynamicArray();

	//  尾部插入
	void pushBack(int value);
	void popBack();
	//  指定位置插入
	void insertByIndex(int idx, int value);
	void deleteByIndex(int idx);

	int getSize();
	int getCapacity();
	int getValueByIndex(int idx);
	int front();
	int end();

	void print();
};
