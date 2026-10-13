#include <iostream>
#include "CircleLinkList.h"
using namespace std;

CircleLinkNode::CircleLinkNode() {
	data = 0;
	next = NULL;
}
CircleLinkNode::CircleLinkNode(int value) {
	data = value;
	next = NULL;
}

CircleLinkList::CircleLinkList() {
	//  head初始化为头节点，指向第一个节点
	head = new CircleLinkNode();
	size = 0;
	head->next = head;
}

CircleLinkList::~CircleLinkList() {
	CircleLinkNode* cur = head, * tmp = NULL;
	while (head->next != head) {
		tmp = head->next;
		head->next = tmp->next;
		delete tmp;
	}
	delete head;
}

void CircleLinkList::pushBack(int value) {
	CircleLinkNode* cur = head;
	while (cur->next != head) cur = cur->next;
	cur->next = new CircleLinkNode(value);
	cur->next->next = head;
	size++;
}
void CircleLinkList::popFront() {
	if (size <= 0) throw "非法位置";
	CircleLinkNode* node = head->next;
	head->next = node->next;
	delete node;
	size--;
}
//  删除最后操作
void CircleLinkList::popBack() {
	deleteByIndex(size - 1);
}

int CircleLinkList::front() {
	return getValueByIndex(0);
}
int CircleLinkList::end() {
	CircleLinkNode* cur = head;
	for (int i = 0; i < size; i++) {
		cur = cur->next;
	}
	return cur->data;
}

void CircleLinkList::insertByIndex(int idx, int value) {
	if (idx < 0 || idx >= size) throw "非法位置";
	//  创建要插入的节点
	CircleLinkNode* node = new CircleLinkNode(value);
	CircleLinkNode* cur = head;
	//  移动指针到要插入的位置
	for (int i = 0; i < idx; i++) {
		cur = cur->next;
	}
	node->next = cur->next;
	cur->next = node;
	size++;
}

void CircleLinkList::deleteByIndex(int idx) {
	if (idx < 0 || idx >= size) throw "非法位置";
	CircleLinkNode* node = NULL, * cur = head;
	for (int i = 0; i < idx; i++) {
		cur = cur->next;  //  移动到要删除的节点的前一个元素
	}
	node = cur->next;  //  保存要删除的节点的指针
	cur->next = node->next;  //  指向要删除节点的下一个节点
	delete node;
	size--;
}

int CircleLinkList::getValueByIndex(int idx) {
	if (idx < 0 || idx >= size) throw "非法位置";
	CircleLinkNode* cur = head;
	for (int i = 0; i < idx; i++) {
		cur = cur->next;
	}
	return cur->next->data;
}

void CircleLinkList::print() {
	CircleLinkNode* cur = head;
	while (cur->next != head) {
		cur = cur->next;
		cout << cur->data << " ";
	}
	cout << endl;
}

int CircleLinkList::yuesefu(int n) {

	//	cur当前位置，表示正在报数的人， prevNode 当前位置的前驱
	CircleLinkNode* cur = head, * prevNode = head;

	//	只要链表中还有未出列的人，就继续报数
	while (size > 1) {

		//	报数，连续移动n步，找到第n个要出列的人
		for (int i = 0; i < n; i++) {
			prevNode = cur;	//	记录当前指针的前驱
			cur = cur->next;	//	当前指针向后移动一步

			//	如果当前移动到头节点，跳过去
			if (cur == head) {
				cur = head->next;
				prevNode = head;
			}
		}

		//	此时cur指向第n个报数的人，将其出列
		cout << "出列: " << cur->data << endl;
		//	从链表中删除cur节点
		prevNode->next = cur->next;
		delete cur;

		//	为下一轮报数做准备
		cur = prevNode;
		//	剩余人数减一
		size--;

	}
	return head->next->data;
}