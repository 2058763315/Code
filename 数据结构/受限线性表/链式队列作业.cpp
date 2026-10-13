#include <iostream>
using namespace std;

/*
05.链式队列
	需求：用队列解决约瑟夫问题
*/

class LinkQueueNode {
public:
	int data;
	LinkQueueNode* next;

	LinkQueueNode(int value = 0) {
		this->data = value;
		next = nullptr;
	}
};

class LinkQueue {
private:
	int size;
	LinkQueueNode* head;
public:
	LinkQueue() {
		size = 0;
		head = new LinkQueueNode();
	}
	~LinkQueue() {
		LinkQueueNode* cur = head;
		while (cur != nullptr) {
			LinkQueueNode* tmp = cur;
			cur = cur->next;
			delete tmp;
		}
	}

	void push(int value) {
		LinkQueueNode* cur = head;
		LinkQueueNode* node = new LinkQueueNode(value);
		while (cur->next != nullptr) {
			cur = cur->next;
		}
		cur->next = node;
		size++;
	}

	void pop() {
		if (size == 0) throw "队列为空";
		LinkQueueNode* cur = head;
		LinkQueueNode* tmp = cur->next;
		cur->next = tmp->next;
		delete tmp;
		size--;
	}

	int getFront() {
		if (size == 0) throw "队列为空";
		return head->next->data;
	}

	//  用链式队列解决约瑟夫问题
	void yuesefu(int n) {
		while (size > 1) {
			for (int i = 0; i < n - 1; i++) {
				push(getFront());
				pop();
			}
			cout << "出队：" << getFront() << " ";
			pop();
		}
		cout << endl << "幸存：" << getFront() << endl;
	}
};

int main() {
	LinkQueue lq;
	for (int i = 1; i <= 8; i++) {
		lq.push(i);
	}
	lq.yuesefu(3);
	return 0;
}
