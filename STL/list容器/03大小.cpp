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
	list<int> ls1;
	//	empty()判断是否为空,空返回true，非空返回false。
	cout << "ls1.empty(): " << ls1.empty() << endl;	//	true在cout输出为1	
	for (int i = 0; i < 10; i++) {
		ls1.push_back(i);
	}
	//	size()获取容器大小
	cout << "ls1.size(): " << ls1.size() << endl;

	//resize()指定容器的长度
	//	若指定的比原容器小， 超出部分会被删除。
	cout << "ls1.size(): " << ls1.size() << endl;
	printList(ls1);
	ls1.resize(8);
	cout << "ls1.size(): " << ls1.size() << endl;
	printList(ls1);
	//	若指定的比原容器大， 会用默认值填充。
	ls1.resize(10);
	cout << "ls1.size(): " << ls1.size() << endl;

	printList(ls1);

	return 0;
}