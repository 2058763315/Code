#include <iostream>
using namespace std;

int main() {
	string s = "abcdefghabcdefgh", s1 = "de";

	int pos = s.find(s1, 0);			//  从0开始，找到第一个de
	cout << "pos: " << pos << endl;

	pos = s.find(s1, 4);				//  从4开始，找到第二个de
	cout << "pos: " << pos << endl;

	pos = s.find("de", 0);          //  从0开始，查找需要查找字符串在原字符串中的位置
	cout << "pos: " << pos << endl;

	pos = s.find("de", 4);          //  从4开始，查找需要查找字符串在原字符串中的位置
	cout << "pos: " << pos << endl;

	pos = s.find("decc", 0, 2);		//  从0开始，查找需要查找字符串的前n个字符在原字符串中的位置
	cout << "pos: " << pos << endl;

	s1 = "decc";
	//  string不支持三个参数，转为字符数组后可用
	pos = s.find(s1.c_str(), 0, 2);		//  从0开始，查找需要查找字符串的前n个字符在原字符串中的位置
	cout << "pos: " << pos << endl;

	s1 = "de";
	pos = s.rfind(s1);
	cout << "pos: " << pos << endl;

	pos = s.rfind(s1, 5);			//  从右往左从第5个开始查找第一个字符串s1，在原字符串中的位置（位置依然是从左往右计数）
	cout << "pos: " << pos << endl;

	string s2 = "ha";
	pos = s.rfind(s2, 8);
	cout << "pos: " << pos << endl;

	return 0;
}