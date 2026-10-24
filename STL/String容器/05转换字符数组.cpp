#include <iostream>
using namespace std;

int main() {
	string s = "Hello";
	//  string转换为C风格的字符串
	const char* c = s.c_str();
	cout << "strlen(c): " << strlen(c) << endl;
	for (int i = 0; i < strlen(c); i++) {
		cout << c[i];
	}
	cout << endl;
	//  C风格的字符串转换为string
	string s1(c), s2 = c, s3;
	s3 = c;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	return 0;
}