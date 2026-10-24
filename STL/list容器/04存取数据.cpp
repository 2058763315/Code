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
	ls.push_back(10);
	ls.push_back(20);
	ls.push_back(30);
	printList(ls);
	//	front()返回容器中第一个数据
	cout << "ls.front(): " << ls.front() << endl;
	cout << "ls.size(): " << ls.size() << endl;
	ls.front() = 100;
	printList(ls);

	//back()返回容器中最后一个数据
	cout << "ls.back(): " << ls.back() << endl;
	cout << "ls.size(): " << ls.size() << endl;
	ls.back() = 300;
	printList(ls);


	return 0;
}