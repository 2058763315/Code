#include <iostream>
using namespace std;

string maxHW(string s) {
	//  定义状态数组，元素全部初始化为false
	bool dp[50][50] = {};
	int maxLength = 0;
	int start = 0;
	for (int j = 1; j < s.size(); j++) {
		for (int i = 0; i < j; i++) {
			if (s[i] == s[j]) {
				if (j - i < 3) {
					dp[i][j] = true;
				}
				else {
					dp[i][j] = dp[i + 1][j - 1];
				}
			}
			if (dp[i][j] == true && j - i + 1 > maxLength) {
				maxLength = j - i + 1;
				start = i;
			}
		}
	}
	return s.substr(start, maxLength);
}

int main() {
	string s = "hebfwewfbbe";
	//cin >> s;
	cout << maxHW(s) << endl;
	return 0;
}