#include<iostream>
#include<map>
using namespace std;

void printMap(multimap<int, string>& m) {
	for (multimap<int, string>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
}

int main() {
	multimap<int, string> m;
	m.insert(make_pair(1, "Tom"));
	m.insert(make_pair(2, "Jerry"));
	m.insert(make_pair(3, "Jack"));

	//	multimap的键不允许重复
	cout << "m.size(): " << m.size() << endl;
	printMap(m);
	m.insert(make_pair(1, "Rose"));
	cout << "m.size(): " << m.size() << endl;
	printMap(m);

	//count(key)统计key的个数
	cout << "m.count(1): " << m.count(1) << endl;
	cout << "m.count(200): " << m.count(200) << endl;

	return 0;
}