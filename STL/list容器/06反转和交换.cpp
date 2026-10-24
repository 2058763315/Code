#include<iostream>
#include<list>	
using namespace std;

void printList(const list<int>& ls) {
	for (list<int>::const_iterator it = ls.begin(); it != ls.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}

int main() {
	list<int> ls;
	//	push_back(element)尾部插入元素elment
	ls.push_back(10);
	ls.push_back(20);
	ls.push_back(30);
	printList(ls);
	//	反转
	ls.reverse();
	printList(ls);

	//	交换
	list<int> ls1;
	ls1.push_back(100);
	ls1.push_back(200);
	cout << "ls: ";
	printList(ls);
	cout << "ls1: ";
	printList(ls1);
	ls.swap(ls1);
	cout << "ls: ";
	printList(ls);
	cout << "ls1: ";
	printList(ls1);

	return 0;
}