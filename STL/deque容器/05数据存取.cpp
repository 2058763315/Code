#include <iostream>
#include <deque>
using namespace std;

template<typename T>
void printdeque(deque<T>& d) {
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;
}

int main() {
	deque<int> d = { 1, 2, 3, 4, 5, 6, 7 };
	printdeque(d);

	//  at(int idx)返回索引idx指定的数据
	cout << "d.at(2): " << d.at(2) << endl;
	d.at(2) = 30;
	printdeque(d);
	//  [idx]返回索引idx指定的数据
	cout << "d[4]: " << d[4] << endl;
	d[4] = 50;
	printdeque(d);

	//  front()返回容器中第一个数据
	cout << "d.front(): " << d.front() << endl;
	d.front() = 10;
	//  back()返回容器中最后一个数据
	cout << "d.front(): " << d.back() << endl;
	d.back() = 70;
	printdeque(d);
	return 0;
}