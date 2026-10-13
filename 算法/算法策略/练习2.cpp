#include <iostream>
using namespace std;

string maxHW(string s) {
	size_t len = s.length();
	int start = 0;
	int maxHWLength = 1;
	int dp[50][50] = { };
	for (int j = 1; j < len; j++) {
		for (int i = 0; i < j; i++) {
			if (s[i] == s[j]) {
				if (j - i < 3) {
					dp[i][j] = 1;
				}
				else {
					dp[i][j] = dp[i + 1][j - 1];
				}
			}
			if (dp[i][j] == 1 && j - i + 1 > maxHWLength) {
				maxHWLength = j - i + 1;
				start = i;
			}
		}
	}
	return s.substr(start, maxHWLength);
}

int main() {
	string s = { "kjfhgfefghh" };
	cout << "maxHW(s): " << maxHW(s) << endl;
	return 0;
}