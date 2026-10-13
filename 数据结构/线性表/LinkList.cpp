#include <iostream>
#include "LinkList.h"
using namespace std;

LinkNode::LinkNode() {
	data = 0;
	next = NULL;
}
LinkNode::LinkNode(int value) {
	data = value;
	next = NULL;
}

LinkList::LinkList() {
	//  head初始化为头节点，指向第一个节点
	head = new LinkNode();
	size = 0;
}

LinkList::~LinkList() {
	LinkNode* cur = head, * tmp = NULL;
	while (cur != NULL) {
		tmp = cur;
		cur = cur->next;
		delete tmp;
	}
}

void LinkList::pushBack(int value) {
	LinkNode* cur = head;
	while (cur->next != NULL) cur = cur->next;
	cur->next = new LinkNode(value);
	size++;
}
void LinkList::popFront() {
	if (size <= 0) throw "非法位置";
	LinkNode* node = head->next;
	head->next = node->next;
	delete node;
	size--;
}
//  删除最后操作
void LinkList::popBack() {
	deleteByIndex(size - 1);
}

int LinkList::front() {
	return getValueByIndex(0);
}
int LinkList::end() {
	LinkNode* cur = head;
	for (int i = 0; i < size; i++) {
		cur = cur->next;
	}
	return cur->data;
}

void LinkList::insertByIndex(int idx, int value) {
	if (idx < 0 || idx >= size) throw "非法位置";
	//  创建要插入的节点
	LinkNode* node = new LinkNode(value);
	LinkNode* cur = head;
	//  移动指针到要插入的位置
	for (int i = 0; i < idx; i++) {
		cur = cur->next;
	}
	node->next = cur->next;
	cur->next = node;
	size++;
}

void LinkList::deleteByIndex(int idx) {
	if (idx < 0 || idx >= size) throw "非法位置";
	LinkNode* node = NULL, * cur = head;
	for (int i = 0; i < idx; i++) {
		cur = cur->next;  //  移动到要删除的节点的前一个元素
	}
	node = cur->next;  //  保存要删除的节点的指针
	cur->next = node->next;  //  指向要删除节点的下一个节点
	delete node;
	size--;
}

int LinkList::getValueByIndex(int idx) {
	if (idx < 0 || idx >= size) throw "非法位置";
	LinkNode* cur = head;
	for (int i = 0; i < idx; i++) {
		cur = cur->next;
	}
	return cur->next->data;
}

void LinkList::print() {
	LinkNode* cur = head;
	while (cur->next != NULL) {
		cur = cur->next;
		cout << cur->data << " ";
	}
	cout << endl;
}

void LinkList::deleteMax() {
	LinkNode* cur = head;
	LinkNode* node = NULL;
	LinkNode* maxNode = head;   // 最大值节点
	LinkNode* preMax = NULL;    // 最大值节点的前驱
	int max = 0;
	while (cur->next != NULL) {
		if ((cur->data) > max) {

			max = cur->data;
			maxNode = cur;
			preMax = node;
		}
		node = cur;
		cur = cur->next;
	}

	node = cur->next;  //  保存要删除的节点的指针
	preMax->next = node->next;  //  指向要删除节点的下一个节点
	delete node;
	size--;
}