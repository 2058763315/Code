#include <iostream>
#include <map>
using namespace std;

int main() {
	//  pair<T1,T2> p(value1, value2) 构造函数
	pair<int, char> p1(1000, 'm');
	cout << "p1.first: " << p1.first << " p1.second: "<< p1.second << endl;
	//  make_pair(first, second)make_pare函数返回pari对象
	pair<int, char> p2 = make_pair(2000, 'f');
	cout << "p2.first: " << p2.first << " p2.second: " << p2.second << endl;

	return 0;
}