#pragma once
class CircleLinkNode {
public:
	int data;
	CircleLinkNode* next;

	CircleLinkNode();
	CircleLinkNode(int value);

};

class CircleLinkList {
protected:
	CircleLinkNode* head;
	int size;
public:
	CircleLinkList();
	~CircleLinkList();
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

	int yuesefu(int n);
};