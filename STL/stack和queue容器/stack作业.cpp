/* 
stack:
1.多种括号的有效匹配
给定一个由大括号，中括号，小括号和其它字符组成的字符串，
判断左右括号是否成对出现。
*/

#include <iostream>
#include <stack>
using namespace std;

/*
错误示例
bool isMatch(string& str) {
	stack<char> stk;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '{') {
			stk.push(str[i]);
		}
		else if (str[i] == '}') {
			if (stk.empty()) {
				return false;
			}
			else {
				stk.pop();
			}
		}
		if (str[i] == '[') {
			stk.push(str[i]);
		}
		else if (str[i] == ']') {
			if (stk.empty()) {
				return false;
			}
			else {
				stk.pop();
			}
		}
		if (str[i] == '(') {
			stk.push(str[i]);
		}
		else if (str[i] == ')') {
			if (stk.empty()) {
				return false;
			}
			else {
				stk.pop();
			}
		}
	}
	return stk.empty();
}
*/

bool isMatch(string& s) {
	stack<char> stk;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
			stk.push(s[i]);
		}
		else if (s[i] == ')') {
			if (stk.empty() || stk.top() != '(') {
				return false;
			}
			else {
				stk.pop();
			}
		}
		else if (s[i] == '}') {
			if (stk.empty() || stk.top() != '{') {
				return false;
			}
			else {
				stk.pop();
			}
		}
		else if (s[i] == ']') {
			if (stk.empty() || stk.top() != '[') {
				return false;
			}
			else {
				stk.pop();
			}
		}
	}
	return stk.empty();
}

int main() {
	string s = "{hello[world23)test}";

	cout << isMatch(s) << endl;
	return 0;
}