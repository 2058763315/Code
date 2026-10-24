#include <iostream>
#include <set>
using namespace std;

void printMultiset(multiset<int>& s) {
	for (multiset<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	multiset<int> s;
	cout << "s.size(): " << s.size() << endl;
	int num[] = { 10, 20,3,0,5,4,6,11,7,23, 23, 10, 3, 4, 11, 18 };
	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
		s.insert(num[i]);
	}
	printMultiset(s);
	multiset<int>::iterator it = s.find(30);
	//  找不到30，返回s.end，(it == s.end())结果为true
	cout << "(it == s.end()): " << (it == s.end()) << endl;
	//  multiset元素允许重复
	cout << "s.count(10): " << s.count(10) << endl;

	return 0;
}