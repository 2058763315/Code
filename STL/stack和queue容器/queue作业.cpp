/*
queue:
1.奇数偶数分类
需求：有一个queue，存储了一些整数，要求把这些整数进行分类，
奇数一组放入新的queue中，偶数一组放入新的queue中。
并且保持数据原来的先后顺序。
*/

#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> q) {
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}
void classify(queue<int> q) {
	queue<int> q1, q2;
	while (!q.empty()) {
		if (q.front() % 2 == 0) {
			q2.push(q.front());
		}
		else {
			q1.push(q.front());
		}
		q.pop();
	}
	printQueue(q1);
	printQueue(q2);
}

int main() {
	int num[] = {12, 26, 35, 11, 19, 14, 8, 21, 3};
	queue<int> q;
	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
		q.push(num[i]);
	}
	classify(q);
	return 0;
}