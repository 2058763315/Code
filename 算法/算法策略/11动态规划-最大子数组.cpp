#include <iostream>
using namespace std;

int maxSubArray(int n[], int len) {
	int dp[512];
	dp[0] = n[0];
	int maxValue = dp[0];
	for (int i = 1; i < len; i++) {
		dp[i] = max(dp[i - 1], 0) + n[i];
		maxValue = max(maxValue, dp[i]);  //  记录dp[i]中的最大值
	}
	for (int i = 0; i < len; i++) {
		cout << dp[i] << " ";
	}
	cout << endl;
	return maxValue;
}

int main() {
	int n[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	int len = sizeof(n) / sizeof(int);
	cout << maxSubArray(n, len) << endl;
	return 0;
}