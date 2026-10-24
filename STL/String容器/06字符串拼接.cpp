#include <iostream>
using namespace std;

int main() {
	string s = "Tom";
	s += " and ";
	cout << s << endl;

	s += 'J';
	cout << s << endl;

	string s1 = "erry";
	s += s1;
	cout << s << endl;

	s = "I";

	s.append(" love ");
	cout << "s: " << s << endl;
	//  拼接字符数组的前几个字符
	s.append("gameeeeee", 4);
	cout << "s: " << s << endl;

	//  第一个参数是string类型，第二个参数是开始位置
	s1 = "abcdef";
	s.append(s1, 5);  
	cout << "s: " << s << endl;
	//  第一个参数是string类型，第二个参数是开始位置，第三个字符是拼接长度
	string s2 = "interesting";
	s.append(s2, 3, 4);
	cout << "s: " << s << endl;

	return 0;
}