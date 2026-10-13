#include <iostream>
#include "DoubleLinkList.h"
using namespace std;

DoubleLinkNode::DoubleLinkNode() {
	data = 0;
	next = NULL;
	prev = NULL;
}
DoubleLinkNode::DoubleLinkNode(int value) {
	data = value;
	next = NULL;
	prev = NULL;
}

DoubleLinkList::DoubleLinkList() {
	head = new DoubleLinkNode();
	size = 0;
}

DoubleLinkList::~DoubleLinkList() {
	DoubleLinkNode* cur = head, * tmp = NULL;
	while (cur != NULL) {
		tmp = cur;
		cur = cur->next;
		delete tmp;
	}
}

void DoubleLinkList::pushBack(int value) {
	DoubleLinkNode* cur = head;
	while (cur->next != NULL) cur = cur->next;
	DoubleLinkNode* node = new DoubleLinkNode(value);
	cur->next = node;
	node->prev = cur;
	size++;
}
void DoubleLinkList::popFront() {
	if (size <= 0) throw "非法位置";
	DoubleLinkNode* node = head->next;
	head->next = node->next;
	delete node;
	size--;
}
//  删除最后操作
void DoubleLinkList::popBack() {
	deleteByIndex(size - 1);
}

int DoubleLinkList::front() {
	return getValueByIndex(0);
}
int DoubleLinkList::end() {
	DoubleLinkNode* cur = head;
	for (int i = 0; i < size; i++) {
		cur = cur->next;
	}
	return cur->data;
}

void DoubleLinkList::insertByIndex(int idx, int value) {
	if (idx < 0 || idx >= size) throw "非法位置";
	//  创建要插入的节点
	DoubleLinkNode* node = new DoubleLinkNode(value);
	DoubleLinkNode* cur = head;
	//  移动指针到要插入的位置
	for (int i = 0; i < idx; i++) {
		cur = cur->next;
	}

	node->next = cur->next;
	if (cur->next != NULL) {
		cur->next->prev = node;
	}
	cur->next = node;
	node->prev = cur;
	size++;
}

void DoubleLinkList::deleteByIndex(int idx) {
	if (idx < 0 || idx >= size) throw "非法位置";
	DoubleLinkNode* node = NULL, * cur = head;
	for (int i = 0; i < idx; i++) {
		cur = cur->next;  //  移动到要删除的节点的前一个元素
	}
	node = cur->next;  //  保存要删除的节点的指针
	cur->next = node->next;  //  指向要删除节点的下一个节点
	delete node;
	size--;
}

int DoubleLinkList::getValueByIndex(int idx) {
	if (idx < 0 || idx >= size) throw "非法位置";
	DoubleLinkNode* cur = head;
	for (int i = 0; i < idx; i++) {
		cur = cur->next;
	}
	return cur->next->data;
}

void DoubleLinkList::reverse() {
	if (size < 2) return;

	DoubleLinkNode* cur = head->next;
	DoubleLinkNode* newHead = NULL;
	DoubleLinkNode* newTail = head->next;

	while (cur != NULL) {
		DoubleLinkNode* nextNode = cur->next;
		cur->next = cur->prev;
		cur->prev = nextNode;
		newHead = cur;
		cur = nextNode;
	}

	newHead->prev = head;
	head->next = newHead;
	newTail->next = NULL;
}

void DoubleLinkList::print() {
	DoubleLinkNode* cur = head;
	while (cur->next != NULL) {
		cur = cur->next;
		cout << cur->data << " ";
	}
	cout << endl;
}