#include <iostream>
using namespace std;


int main() {

	string s1;
	//  string& assign(const char* s) 字符数组或指针字符串赋值
	s1.assign("Hello World");
	cout << "s1: " << s1 << endl;
	//  string& assign(const char* s,int n) 用字符数组或指针字符串的前n个字符赋值
	s1.assign("Hello World", 5);
	cout << "s1: " << s1 << endl;

	string s2;
	//  string& assign(const string & s) string字符串赋值
	s2.assign(s1);
	cout << "s2: " << s2 << endl;
	//  string& assign(const string& s, size_t pos, size_t n=npos) 用string字符串的子串赋值
	//  第二个参数pos是开始位置，从0起
	//  第三个参数n是截取的长度，当长度大于剩余字符串的长度，则截取剩余全部字符串，默认为字符串的最大长度
	s1.assign("0123456789");
	s2.assign(s1, 0, 3);

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s2.npos << endl;
	//  string& assign(int n, char c) n个字符赋值
	s1.assign(5, 'x');
	cout << "s1: " << s1 << endl;

	s1 = "Hello World";
	cout << "s1: " << s1 << endl;

	s1 = s2;
	cout << "s1: " << s1 << endl;

	s1 = 'A';
	cout << "s1: " << s1 << endl;
	return 0;
}