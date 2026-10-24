#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, string>& m) {
	for (map<int, string>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
}

int main() {
	map<int, string> m;
	//  insert(pair)插入元素
	m.insert(pair<int, string>(1, "Tom"));
	m.insert(make_pair(2, "Jerry"));

	m.insert(map<int, string>::value_type(3, "Jack"));
	printMap(m);
	//  根据键取值
	cout << m.at(3) << endl;
	
	try {
		cout << m.at(20) << endl;
	}
	catch (...) {
		cout << "m中没有键为20的pair，所以抛出异常" << endl;
	}
	//  map[key]根据键取值，当键不存在时，使用键和默认值新建pair并添加到map中。
	cout << "m[3]: " << m[3] << endl;
	//  键20不存在时，使用键和string默认值空字符串，新建pair并添加到map中。
	cout << "m[20]: " << m[20] << endl;
	//  键20对应的pair已经在上一步自动创建了，所以at(20)不抛出异常。
	cout << "m.at(20): " << m.at(20) << endl;
	return 0;
}
