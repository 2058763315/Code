#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "I  Often";
	//  string & insert(int pos, const char* s)从pos位置插入字符串
	s.insert(2, "Laugh");

	cout << "s: " << s << endl;

	string s1 = "no";
	//  string& insert(int pos, const string & s)从pos位置插入字符串
	s.insert(2, s1);
	cout << "s: " << s << endl;
	//  string & insert(int pos, int n, char c)从pos位置插入n个字符c
	s.insert(2, 10, 'm');
	cout << "s: " << s << endl;

	//  string& erase(int pos, int n = npos) 从pos开始删除n个字符
	s.erase(2, 10);
	cout << "s: " << s << endl;

	s.erase(2);
	cout << "s: " << s << endl;
	return 0;
}