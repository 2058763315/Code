#include <iostream>
using namespace std;

int main() {
	string s = "I Laugh Often, Value Every Year Of Us.";
	//  char& operator[]\(int n) 重载[]运算符，通过[下标]取字符
	cout << "s[1]: " << s[9] << endl;
	//  char& at(int n) 通过at方法获取字符
	cout << "s.at(1): " << s.at(9) << endl;

	s[1] = 'E';
	cout << s << endl;
	s.at(1) = 'r';
	cout << s << endl;

	return 0;
}