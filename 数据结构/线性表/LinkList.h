#pragma once
class LinkNode {
public:
	int data;
	LinkNode* next;

	LinkNode();
	LinkNode(int value);

};

class LinkList {
protected:
	LinkNode* head;
	int size;
public:
	LinkList();
	~LinkList();
	void pushBack(int value);
	void popFront();
	void popBack();

	int front();
	int end();
	//  
	void insertByIndex(int idx, int value);
	void deleteByIndex(int idx);

	int getValueByIndex(int idx);
	int getSize();
	void print();

	void deleteMax();
};