#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> d1(3, 10), d2;

	d2 = d1;
	for (int i = 0; i < d2.size(); i++) {
		cout << d2[i] << " ";
	}
	cout << endl;
	//  assign(v.beg(), v.end()) 将参数v[begin(), end())区间中的元赋值给动态数组
	
	d2.assign(d1.begin() + 1, d1.end());  //  赋值运算符
	for (int i = 0; i < d2.size(); i++) {
		cout << d2[i] << " ";
	}
	cout << endl;
	//  assign(n, element) 将n个element赋值给动态数组
	d2.assign(3, 20);
	for (int i = 0; i < d2.size(); i++) {
		cout << d2[i] << " ";
	}
	return 0;
}