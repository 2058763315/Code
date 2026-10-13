#pragma once
class DynamicArray {
private:
    int* data;    //  data指向存放数据元素的内存空间
    int size;     //  动态数组的大小
    int capacity; //  动态数组的容量
public:
    DynamicArray();
    virtual ~DynamicArray();

    //  添加元素
    void pushBack(int value);
    void insert(int index, int value);
    //  删除元素
    void popBack();
    void pop(int index);
    //  获取信息或元素
    int getCapacity();  //  获取容量
    int getSize();         //  获取大小
    int getFront();        //  返回第一个元素
    int getBack();         //  返回动态数组最后一个元素
    int getValueByIndex(int idx);

    void clear();
    void print();
    //  删除所有奇数
    void popodd();
};