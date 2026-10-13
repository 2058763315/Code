#include <iostream>
using namespace std;

int main() {
	//  物品个数和背包容量
	const int N = 4, V = 5;
	int v[N + 1] = { 0, 4, 2, 3, 1 };
	int w[N + 1] = { 0, 2, 4, 4, 5 };
	int dp[N + 1][V + 1] = {};
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= V; j++) {
			if (j < v[i]) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
			}
		}
	}
	cout << dp[N][V] << endl;
	return 0;
}