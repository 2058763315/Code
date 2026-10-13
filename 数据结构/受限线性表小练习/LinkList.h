#pragma once

class LinkNode {
public:
    int data = 0;
    LinkNode* next = nullptr;

    LinkNode(int value = 0);
};

class LinkList {
private:
    LinkNode* head;
    int size;
public:
    LinkList();
    virtual ~LinkList();

    void pushBack(int value);
    void pushFront(int value);
    void insert(int idx, int value);

    void popBack();
    void popFront();
    void erase(int idx);

    void print();

    LinkNode* findNode(int idx);
    int getValue(int idx);
    int getSize();

    void popMax();
};