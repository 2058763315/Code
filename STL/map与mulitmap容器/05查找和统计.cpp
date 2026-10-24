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
	m.insert(make_pair(1, "Tom"));
	m.insert(make_pair(2, "Jerry"));
	m.insert(make_pair(3, "Jack"));
	//find(key)若key存在，返回所在位置的迭代器，若key不存在返回end()
	map<int, string>::iterator it = m.find(2);
	cout << "it->second: " << it->second << endl;
	it = m.find(200);
	cout << "it == m.end(): " << (it == m.end()) << endl;
	//count(key)统计key的个数
	cout << "m.count(1): " << m.count(1) << endl;
	cout << "m.count(200): " << m.count(200) << endl;

	cout << "m.size(): " << m.size() << endl;
	printMap(m);
	//	map的键不允许重复，1已经存在了，不能再插入了。
	m.insert(make_pair(1, "Rose"));
	cout << "m.size(): " << m.size() << endl;
	printMap(m);
	return 0;
}