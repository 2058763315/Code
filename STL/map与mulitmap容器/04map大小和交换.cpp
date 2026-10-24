#include<iostream>
#include<map>
using namespace std;

void printMap(map<int, string>& m) {
	for (map<int, string>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
}

int main() {
	map<int, string> m;
	//	empty()判断容器是否为空
	cout << "m.empty(): " << m.empty() << endl;

	//	size()获取容器的大小
	cout << "m.size(): " << m.size() << endl;
	m.insert(make_pair(1, "Tom"));
	m.insert(make_pair(2, "Jerry"));
	m.insert(make_pair(3, "Jack"));
	cout << "m.empty(): " << m.empty() << endl;
	cout << "m.size(): " << m.size() << endl;

	//	swap(m)交换容器
	map<int, string> m1;
	m1.insert(make_pair(10, "rose"));
	cout << "m.size(): " << m.size() << endl;
	cout << "m1.size(): " << m1.size() << endl;
	m1.swap(m);
	cout << "m.size(): " << m.size() << endl;
	cout << "m1.size(): " << m1.size() << endl;
	return 0;
}