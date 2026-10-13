#include <iostream>
using namespace std;

int minCost(int cost[], int n) {
	int* dp = new int[n + 1];
	dp[0] = 0;
	dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
	}
	int tmp = dp[n];
	delete[] dp;
	return tmp;
}

int main() {
	int cost[] = {10, 15, 20};
	int len = sizeof(cost) / sizeof(int);
	cout << minCost(cost, 2) << endl;
	return 0;
}