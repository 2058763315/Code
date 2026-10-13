/*
01.动态数组
	需求：插入8个数据，删除数组中的奇数。
*/

#include <iostream>
using namespace std;
class DynamicArray {
protected:
	int* data;
	int size;
	int capacity;
public:
	DynamicArray() {
		capacity = 5;
		data = new int[capacity];
		size = 0;
	}
	DynamicArray(int n) {
		capacity = n;
		data = new int[capacity] {};
		size = n;
	}
	~DynamicArray() {
		if (data != NULL) {
			delete[] data;
		}
		data = NULL;
	}
	void print() {
		for (int i = 0; i < size; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}

	void pushBack(int value) {
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

	void insertByIndex(int idx, int value) {
		if (size = capacity) {
			capacity += capacity / 2 + 1;
			int* p = new int[capacity];
			for (int i = 0; i < size; i++) {
				p[i] = data[i];
			}
			delete data;
			data = p;
		}
		for (int i = size - 1; i > idx; i--) {
			data[i + 1] = data[i];
		}
		data[idx] = value;
		size++;
	}

	void deleteByIndex(int idx) {
		try {
			if (idx < 0 || idx > size) throw "非法位置";

		}
		catch (const char* msg) {
			cout << msg << endl;
		}
		for (int i = idx; i < size - 1; i++) {
			data[i] = data[i + 1];
		}
		size--;
	}

	void deleteEven() {
		for (int i = 0; i < size; i++) {
			if (data[i] % 2 != 0) {
				deleteByIndex(i);
			}
		}
	}
};

int main() {
	DynamicArray da(5);
	da.insertByIndex(3, 6);
	da.print();
	for (int i = 0; i < 20; i++) {
		da.pushBack(i);
	}
	da.print();
	da.deleteEven();
	da.print();
	return 0;
}