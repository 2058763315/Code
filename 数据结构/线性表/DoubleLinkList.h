#pragma once

class DoubleLinkNode {
public:
	int data;
	DoubleLinkNode* next;
	DoubleLinkNode* prev;

	DoubleLinkNode();
	DoubleLinkNode(int value);

};

class DoubleLinkList {
protected:
	DoubleLinkNode* head;
	int size;
public:
	DoubleLinkList();
	~DoubleLinkList();
	void pushBack(int value);
	void popFront();
	void popBack();

	int front();
	int end();

	void insertByIndex(int idx, int value);
	void deleteByIndex(int idx);

	int getValueByIndex(int idx);
	int getSize();
	void print();

	void reverse();
};