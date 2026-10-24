#include <iostream>
using namespace std;

int main() {
	string s1;  //  创建一个空的字符串

	cout << "s1: " << s1 << endl;
	cout << "s1.length(): " << s1.length() << endl;

	string s2 = "Hello World!!";  //  string(const char* s) 使用字符串初始化
	cout << "s2: " << s2 << endl;
	cout << "s2.length(): " << s2.length() << endl;

	string s3(s2);  //  string(const string & s) 使用字符串初始化
	cout << "s3: " << s3 << endl;
	cout << "s3.length(): " << s3.length() << endl;

	string s4(10, 'a');  //  string(int n, char c) 使用n个字符初始化
	cout << "s4: " << s4 << endl;
	cout << "s4.length(): " << s4.length() << endl;

	return 0;
}