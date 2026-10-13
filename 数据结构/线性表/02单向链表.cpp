#include <iostream>
#include "LinkList.h"
#include <time.h>
using namespace std;

void test() {
	LinkList l;
	for (int i = 40; i < 50; i++) {
		l.pushBack(i);
	}
	l.print();
	l.popBack();
	l.print();
	l.insertByIndex(6, 12);
	l.print();
	cout << "l.getValueByIndex(6): " << l.getValueByIndex(6) << endl;

	cout <<"l.front(): " << l.front() << endl;
	cout << "l.end(): " << l.end() << endl;

	l.popFront();
	l.print();

	l.deleteByIndex(6);
	l.print();

	l.popBack();
	l.print();
	
}

/*
02.单向链表
	设计一个算法，删除一个单链表L中元素值最大的结点（假设最大值结点是唯一的）。
	思路：随机生成list列表，遍历list列表，查找最大元素，获取最大元素的索引，根据索引删除元素。
*/
void homeWork() {
	srand(time(0));
	LinkList list;
	for (int i = 0; i < 10; i++) {
		list.pushBack(rand() % 50);
	}
	list.print();
	list.deleteMax();
	list.print();
}
int main() {
	homeWork();
	//test();
	return 0;
}