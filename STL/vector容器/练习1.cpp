#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void printVector(vector<T>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	vector<int> v;
	for (int i = 1; i < 100; i++) {
		v.push_back(i);
	}
	//int i = 0;
	//while (i < v.size()) {
	//	if (v[i] % 3 == 0) {
	//		v.erase(v.begin() + i);
	//	}
	//	else {
	//		i++;
	//	}
	//}
	vector<int>::iterator it = v.begin();
	while (it != v.end()) {
		if (*it % 3 == 0) {
			it = v.erase(it);  //  erase删除指定的元素后，返回删除元素下一个元素的值
		}
		else {
			it++;
		}
	}
	printVector(v);

	return 0;
}