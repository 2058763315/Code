#include <iostream>
#include <set>
#include<functional>	//	使用内置仿函数需要导入functional
using namespace std;

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}

void printSet(set<int, greater<int>>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}

int main() {


	set<int> s;
	cout << "s.size(): " << s.size() << endl;
	s.insert(40);
	s.insert(10);
	s.insert(20);
	s.insert(30);
	printSet(s);
	//	函数对象可以当作参数传递，常用于指定容器的排序规定。
	set<int, greater<int>> s1;
	s1.insert(40);
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	printSet(s1);
	return 0;
}