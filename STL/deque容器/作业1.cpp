/*
1.查找元素
定义函数，查找deque中指定整数元素的下脚标，返回所有下脚标组成的新deque数组。
如：
输入：deque{1,6,10,4,7,10,5,2,10,9}， 查找10
输出：deque{2,5,8}
*/

#include <iostream>
#include <deque>
using namespace std;

deque<int> newDeque(deque<int> d) {
	deque<int> d1;
	int index = 0;
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++, index++) {
		if (*it == 10) {
			d1.push_back(index);
		}
	}
	return d1;
}

void printDeque(deque<int> d) {
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
int main() {
	deque<int> d = { 1,6,10,4,7,10,5,2,10,9 };
	printDeque(newDeque(d));
	return 0;
}