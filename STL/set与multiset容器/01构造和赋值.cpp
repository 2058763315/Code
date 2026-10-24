#include <iostream>
#include <set>
using namespace std;

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	//  set<T> st 默认构造方法
	set<int> s;
	cout << "s.size(): " << s.size() << endl;

	s.insert(10);
	s.insert(20);
	s.insert(30);
	printSet(s);
	//  set(const set& st) 拷贝构造方法
	set<int> s1(s);
	cout << "s.size(): " << s.size() << endl;
	printSet(s1);
	//  set& operator=(const set & st) 重载赋值运算符
	set<int> s2;
	cout << "s.size(): " << s.size() << endl;
	s2 = s;
	cout << "s.size(): " << s.size() << endl;

	printSet(s2);
	return 0;
}