/*
作业：
list链表中存储了一系列手机号码，写一个函数，
去除哪些不合格的电话号码，
规则：11位数字，并且以1开头才算合格。
*/

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void phoneNum(list<string>& s) {
	list<string>::iterator it = s.begin();
	while (it != s.end()) {
		if (it->size() != 11 || (*it)[0] != '1') {
			it = s.erase(it);
		}
		else {
			it++;
		}
	}
}

void printList(list<string> s) {
	list<string>::iterator it = s.begin();
	while (it != s.end()) {
		cout << *it << endl;
		it++;
	}
}
int main() {
	list<string> num = { "13112533333", "18152369845", "1258634", "25478", "23125612533", "13165772845" };
	phoneNum(num);
	printList(num);
	return 0;
}