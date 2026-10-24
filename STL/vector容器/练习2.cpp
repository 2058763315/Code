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
	vector<int>::iterator it = v.begin();
	while (it != v.end()) {
		if (*it % 3 == 0) {
			it = v.insert(it, 100);  //  insert插入元素后，返回的是插入元素的位置
			it++;
		}
		it++;
	}
	printVector(v);
	return 0;
}