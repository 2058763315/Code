#include <iostream>
using namespace std;

int main() {
	string s = "abcdef";
	//  string substr(int pos = 0, int n = npos) const返回由pos开始的n个字符组成的字符串
	string s1 = s.substr();  //  都有默认值，都是默认值时，形成一个新的拷贝
	cout << "&s : " << &s << endl << "&s1: " << &s1 << endl;
	cout << "s1: " << s1 << endl;

	s1 = s.substr(3);
	cout << "s1: " << s1 << endl;
	s1 = s.substr(1, 3);
	cout << "s1: " << s1 << endl;

	return 0;
}