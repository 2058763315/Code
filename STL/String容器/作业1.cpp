/*
1.请实现一个函数，把字符串 s 中的每个空格替换成下划线。
*/

#include <iostream>
#include <string>
using namespace std;

string replace(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			s.replace(i, 1, "_");
		}
	}
	return s;
}

int main() {
	string s1 = replace("I Laugh Often, Value Every Year Of Us.");
	cout << s1 << endl;
	return 0;
}