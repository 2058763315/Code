#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void printVector(vector<T>& v) {
	//  下标遍历
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
int num = 0;
void myFunc(int a) {
	num++;
	cout << a << " ";
}
int main() {

	vector<int> v1 = { 37, 20, 2, 10, 25, 26, 8, 31, 49, 13 };
	//  for_each算法遍历
	//  for_each(v.begin(), v.end(), myFunc);遍历v的begin和end区间中的每一个元素，调用myFunc，元素作为myFunc的参数
	for_each(v1.begin(), v1.end(), myFunc);
	cout << endl << "num: " << num << endl << "v1.size(): " << v1.size() << endl;
	//  使用迭代器遍历
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";  //  *操作符获取迭代器指向的元素的值
	}
	cout << endl;

	vector<int>::iterator it = v1.begin();
	while (it != v1.end()) {
		cout << *it << " ";
		it++;
	}
	cout << endl;
	return 0;
}