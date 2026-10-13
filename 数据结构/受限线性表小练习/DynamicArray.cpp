#include "DynamicArray.h"
#include <iostream>
using namespace std;

DynamicArray::DynamicArray() {
    size = 0;
    capacity = 0;
    data = nullptr;
}

DynamicArray::~DynamicArray() {
    if (data != nullptr) {
        delete[] data;
    }
}

void DynamicArray::pushBack(int value) {
    //  检测容量
    if (size == capacity) {
        //  申请新空间
        capacity = capacity * 2 + 1;
        int* tmp = new int[capacity];
        //  迁移数据，复制原始空间中的数据到新空间
        for (int i = 0; i < size; i++) {
            tmp[i] = data[i];
        }
        //  释放旧空间
        if (data != nullptr) delete[] data;
        data = tmp;
    }
    data[size] = value;
    size++;
}

void DynamicArray::insert(int index, int value) {
    if (index < 0 || index > size) return; //"插入位置不合法";
    if (size == capacity) {
        capacity += capacity / 2 + 1;
        int* tmp = new int[capacity + 1];
        for (int i = 0; i < size; i++) {
            tmp[i] = data[i];
        }
        if (data != nullptr) delete[] data;
        data = tmp;
    }
    for (int i = size; i > index; i--) {
        data[i] = data[i - 1];
    }
    data[index] = value;
    size++;
}

void DynamicArray::popBack() {
    if (size == 0) throw "数组为空";
    size--;
}

void DynamicArray::pop(int index) {
    if (index < 0 || index >= size) throw "删除位置不合法";
    //  要减1，否则会出现i=size-1时，data[i+1]为data[size]发生越界。 
    for (int i = index; i < size - 1; i++) {
        data[i] = data[i + 1];
    }
    size--;
}

int DynamicArray::getCapacity() {
    return capacity;
}

int DynamicArray::getSize() {
    return size;
}

int DynamicArray::getFront() {
    if (size == 0) throw "数组为空";
    return data[0];
}

int DynamicArray::getBack() {
    if (size == 0) throw "数组为空";
    return data[size - 1];
}

int DynamicArray::getValueByIndex(int idx) {
    if (idx < 0 || idx >= size) throw "位置不合法";
    return data[idx];
}

void DynamicArray::clear() {
    size = 0;
}

void DynamicArray::print() {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void DynamicArray::popodd() {
    int n = 0;
    int* p = new int[capacity];
    for (int i = 0; i < size; i++) {
        if (data[i] % 2 == 0) {
            p[n++] = data[i];
        }
    }
    delete[] data;
    data = p;
    size = n;
}
