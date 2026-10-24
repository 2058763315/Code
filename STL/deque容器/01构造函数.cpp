#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> d1, d2(10);
	//  deque<T> deq 默认构造函数。
	cout << "d1.size(): " << d1.size() << endl;

	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
		cout << d1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		d2[i] = i;
		cout << d2[i] << " ";
	}
	cout << endl;
	//  deque<T> deq<T> v(deq1.begin(), deq1, end()) 将deq1[begin(), end())区间中的元素拷贝给deq。
	deque<int> d3(d1.begin(), d1.end());
	for (int i = 0; i < d3.size(); i++) {
		cout << d3[i] << " ";
	}
	cout << endl;
	//  deque<T> deq<T> deq(n, element) 构造deq时，将n个element拷贝给deq
	deque<string> d4(3, "10");
	for (int i = 0; i < d4.size(); i++) {
		cout << d4[i] << " ";
	}
	cout << endl;
	//  deque<T> deq<T> deq(const deque& deq1) 拷贝构造函数
	deque<int> d5(d3);
	for (int i = 0; i < d5.size(); i++) {
		cout << d5[i] << " ";
	}
	cout << endl;
	return 0;
}