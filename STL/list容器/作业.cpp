/*
作业：
list链表中存储了一系列手机号码，写一个函数，
去除哪些不合格的电话号码，
规则：11位数字，并且以1开头才算合格。
*/

#include <iostream>
#include <list>
using namespace std;

list<string> phoneNum(list<string> s) {
	list<string> newlist;
	while (!s.empty()) {
		if (s.front().size() == 11 && s.front()[0] == '1') {
			newlist.push_back(s.front());
		}
		s.pop_front();
	}
	return newlist;
}
void printList(list<string> s) {
	while (!s.empty()) {
		cout << s.front() << endl;
		s.pop_front();
	}
}
int main() {
	list<string> num = { "13112533333", "18152369845", "1258634", "25478", "23125612533", "13165772845" };
	printList(phoneNum(num));
	return 0;
}