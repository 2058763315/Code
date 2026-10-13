#include "LinkStack.h"
#include<iostream>
using namespace std;

LinkStackNode::LinkStackNode() {
	data = 0;
	next = NULL;
}

LinkStackNode::LinkStackNode(int value) {
	data = value;
	next = NULL;
}

LinkStack::LinkStack() {
	//	head初始化为头节点，头结点指向第一个节点。
	head = new LinkStackNode();
	//	大小设置为0
	size = 0;
}

LinkStack::~LinkStack() {
	LinkStackNode* cur = head, * tmp = NULL;
	while (cur != NULL) {
		tmp = cur;
		cur = cur->next;
		delete tmp;
	}
}

void LinkStack::push(int value) {
	LinkStackNode* node = new LinkStackNode(value);
	node->next = head->next;
	head->next = node;
	size++;
}

void LinkStack::pop() {
	if (size <= 0) throw "Stack is empty";
	LinkStackNode* node = head->next;
	head->next = node->next;
	delete node;
	size--;
}

int LinkStack::top() {
	if (size <= 0) throw "Stack is empty";
	return head->next->data;
}
bool LinkStack::empty() {
	return size == 0;
}

int LinkStack::getSize() {
	return size;
}

void LinkStack::clear() {
	while (size > 0) pop();		
}


