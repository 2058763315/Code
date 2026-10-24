#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void printVector(vector<T>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	vector<int> v = { 1, 2, 3, 4, 5, 6, 7 };
	printVector(v);

	//  at(int idx)返回索引idx指定的数据
	cout << "v.at(2): " << v.at(2) << endl;
	v.at(2) = 30;
	printVector(v);
	//  [idx]返回索引idx指定的数据
	cout << "v[4]: " << v[4] << endl;
	v[4] = 50;
	printVector(v);

	//  front()返回容器中第一个数据
	cout << "v.front(): " << v.front() << endl;
	v.front() = 10;
	//  back()返回容器中最后一个数据
	cout << "v.front(): " << v.back() << endl;
	v.back() = 70;
	printVector(v);
	return 0;
}