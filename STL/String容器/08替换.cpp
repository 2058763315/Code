#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "abcdefghabcdefgh", s1 = "HELLOLLEH", s3(s);
	//  string& replace(int pos, int n, const string& str) 替换从pos开始的n个字符为str
	s.replace(1, 5, s1); //  从pos开始的n个字符替换为s1
	cout << "s: " << s << endl;
	s.replace(1, s.size(), s1);  //  从pos开始后面的所有字符替换为s1
	cout << "s: " << s << endl;

	cout << "s3: " << s3 << endl;    //  深拷贝，不会变
	//  string& replace(int pos, int n, const char* str) 替换从pos开始的n个字符为str
	s3.replace(1, 3, "de");

	return 0;
}