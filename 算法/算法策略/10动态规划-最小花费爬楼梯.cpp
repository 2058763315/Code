#include <iostream>
using namespace std;

int minCost(int cost[], int n) {
	int dp[512] = { 0, 0 };
	for (int i = 2; i <= n; i++) {
		dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
	}
	return dp[n];
}


int main() {
	int cost[] = { 10, 50, 20 };
	int n = sizeof(cost) / sizeof(int);
	cout << "minCost(cost, n): " << minCost(cost, n) << endl;
	return 0;
}