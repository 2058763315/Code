/*
3.验证.com类邮箱的有效性
规则：必须包含@,并且@不能出现在第一个位置；要以.com结尾
*/

#include <iostream>
#include <string>
using namespace std;

int email(string s) {
	int a1 = s.find("@"), a2 = s.find(".com");
	int len = s.length();
	if (a1 != -1 && a1 != 0 && a2 == len - 4) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	string s;
	cout << "输入邮箱：";
	cin >> s;
	if (email(s) == 1) {
		cout << "邮箱有效" << endl;
	}
	else {
		cout << "邮箱非法" << endl;
	}
	return 0;
}