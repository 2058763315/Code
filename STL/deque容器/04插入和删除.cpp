#include <iostream>
#include <deque>
using namespace std;

template<typename T>
void printdeque(deque<T>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	deque<int> v;
	//  push_back(element)尾部插入元素elment
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	printdeque(v);

	v.push_front(100);
	v.push_front(200);
	v.push_front(300);
	printdeque(v);
	//  pop_back()删除最后一个元素
	v.pop_back();
	printdeque(v);

	//  insert(pos, element)指定位置插入1个元素element
	v.insert(v.begin() + 1, 100);
	printdeque(v);
	//  insert(pos, n, element)指定位置插入n个元素element
	v.insert(v.begin() + 2, 5, 300);
	printdeque(v);

	//  erase(pos) 删除指定位置的元素
	v.erase(v.begin());
	printdeque(v);
	v.erase(v.begin() + 2, v.end() - 2);
	printdeque(v);
	//  clear() 删除容器中所有元素
	v.clear();
	printdeque(v);

	return 0;
}