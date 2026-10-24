#include <iostream>
#include <stack>
using namespace std;

//  判断括号是否匹配：
//  给定一个由(和)组成的字符串，判断左右括号是否成对出现。
bool isMatch(string& str) {
	stack<char> stk;
	for (int i = 0; i < str.size(); i++) {
		if(str[i] == '('){
			stk.push(str[i]);
		}
		else if(str[i] == ')') {
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

int main() {
	string str = "(a+b)>(c+d";
	cout << isMatch(str) << endl;
	return 0;
}