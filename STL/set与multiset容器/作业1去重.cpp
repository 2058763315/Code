/*
1.已知两个set集合，合并成一个集合，去掉重复元素
如：
输入：s1={1,3,6,9,11,17}, s2={1,4,6,8,13,15}
输出：ans={1,3,4,6,8,9,11,13,15,17}
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
	set<int> s;
	int num1[] = { 10, 20,3,0,5,4,6,11,7,23 };
	int num2[] = { 1,6,10,4,7,10,5,2,10,9 };
	for (int i = 0; i < sizeof(num1) / sizeof(num1[0]); i++) {
		s.insert(num1[i]);
	}
	for (int i = 0; i < sizeof(num2) / sizeof(num2[0]); i++) {
		s.insert(num2[i]);
	}
	printSet(s);
	return 0;
}