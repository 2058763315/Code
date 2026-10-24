/*
3.已知两个set<int>集合s1和s2，求两个集合的交集。
如：
输入：s1={1,3,6,9,11,17}, s2={1,4,6,8,13,15}
输出：交集{1,6}
*/

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
	set<int> s1 = { 10, 20,3,0,5,4,6,11,7,23 };
	set<int> s2 = { 1,6,10,4,7,10,5,2,10,9 };
	set<int> s;
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		if (s2.find(*it) != s2.end()) {
			s.insert(*it);
		}
	}
	printSet(s);
	return 0;
}