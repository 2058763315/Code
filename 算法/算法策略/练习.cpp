#include <iostream>
using namespace std;

int main() {
	int N = 4;
	int V = 5;

	int v[5] = { 0, 4, 2, 3, 1 };
	int w[5] = { 0, 2, 4, 4, 5 };

	int dp[5][6] = {};
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
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= V; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	cout << dp[N][V] << endl;
	return 0;
}