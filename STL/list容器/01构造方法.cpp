#include<iostream>
#include<list>	//	使用动态数组需要导入list
using namespace std;

void printList(const list<int>& ls) {
	for (list<int>::const_iterator it = ls.begin(); it != ls.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}

void printList(const list<string>& ls) {
	for (list<string>::const_iterator it = ls.begin(); it != ls.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}

int main() {
	//	list<T> ls 默认构造函数。默认构造函数不分配空间，此时list长度为0
	list<int> ls1;
	cout << "ls1.size(): " << ls1.size() << endl;

	//	list<T> ls(n) 分配n个空间，此时list长度为n
	list<int> ls2(10);
	cout << "ls2.size(): " << ls2.size() << endl;

	//	给ls2中的每个元素赋值
	for (int i = 0; i < 10; i++) ls2.push_back(i);

	//	list<T> ls(ls1.begin(), ls1.end()) 将ls1[begin(), end())区间中的元素拷贝给ls。不包含end()，因为end()在最后一个元素之后。
	//	创建动态数组ls3，用ls2的值给ls3初始化。
	list<int> ls3(ls2.begin(), ls2.end());
	printList(ls3);

	//	list<T> ls(n, element) 构造ls时，将n个element拷贝给ls
	list<string> ls4(3, "10");
	printList(ls4);

	//	list<T> ls(const list& ls1) 拷贝构造函数
	list<int> ls5(ls3);
	printList(ls5);

	return 0;
}
