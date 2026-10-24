/*
2.返回一个字符串最后一个单词
  如：
  输入：my name is tommy
  输出：最后一个单词为：tommy
*/

#include <iostream>
#include <string>
using namespace std;

string last(string s) {
	int pos = s.rfind(" ");
	string s1 = s.substr(pos + 1);
	return s1;
}

int main() {
	string s1 = last("I Laugh Often, Value Every Year Of Us.");
	cout << s1 << endl;
	return 0;
}