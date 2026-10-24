#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, string>& m) {
	for (map<int, string>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
	cout << endl;
}

int main() {
	map<int, string> m, m1;
	m.insert(pair<int, string>(1, "Tom"));
	m.insert(make_pair(2, "Jerry"));
	
	m.insert(map<int, string>::value_type(3, "Jack"));
	//  赋值
	m1 = m;

	printMap(m);
	//  erase(key)删除键对应的pair
	m.erase(2);
	printMap(m);
	//  erase(pos)删除pos迭代器所指的位置元素
	m.erase(--m.end());
	printMap(m);

	m1.erase(++m1.begin(), m1.end());
	printMap(m1);
	return 0;
}
