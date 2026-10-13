#include "LinkQueue.h"
#include<iostream>
using namespace std;

LinkQueueNode::LinkQueueNode() {
	data = 0;
	next = NULL;
}

LinkQueueNode::LinkQueueNode(int value) {
	data = value;
	next = NULL;
}

LinkQueue::LinkQueue() {
	//	head初始化为头节点，头结点指向第一个节点。
	head = new LinkQueueNode();
	//	大小设置为0
	size = 0;
}

LinkQueue::~LinkQueue() {
	LinkQueueNode* cur = head, * tmp = NULL;
	while (cur != NULL) {
		tmp = cur;
		cur = cur->next;
		delete tmp;
	}
}
//	放入队尾
void LinkQueue::push(int value) {
	LinkQueueNode* node = new LinkQueueNode(value), *cur = head;
	//	找到最后一个元素
	while (cur->next != NULL) cur = cur->next;
	cur->next = node;	
	size++;
}
//	移除队头元素
void LinkQueue::pop() {
	if (size <= 0) throw "Queue is empty";
	LinkQueueNode* node = head->next;
	head->next = node->next;
	delete node;
	size--;
}
//	获取队头元素
int LinkQueue::top() {
	if (size <= 0) throw "Queue is empty";
	return head->next->data;
}
bool LinkQueue::empty() {
	return size == 0;
}

int LinkQueue::getSize() {
	return size;
}

void LinkQueue::clear() {
	while (size > 0) pop();
}
