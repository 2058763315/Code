#include <iostream>
using namespace std;

long long fib(int n) {
	int dp[512] = { 0, 1 };
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}

int main() {
	int N = 20;
	for (int i = 0; i < N; i++) {
		cout << "fib(" << i << "): " << fib(i) << endl;
	}
	return 0;
}