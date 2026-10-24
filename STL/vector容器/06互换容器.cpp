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
	vector<int> v1, v2;
	v1 = { 1, 2, 3, 4, 5, 6, 7 };
	v2 = { 7, 6, 5, 4, 3, 2, 1 };
	//  swap(v2) 将参数容器v2与自身元素互换
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
	return 0;
}