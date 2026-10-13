#include <iostream>
using namespace std;

//  求最大子数组的和
//  穷举法，对每个子数组求和
int maxSubSum(int nums[], int len) {
	int maxSum = nums[0];
	for (int i = 0; i < len; i++) {
		int sum = 0;
		for (int j = i; j < len; j++) {
			sum += nums[j];
			if (sum > maxSum) {
				maxSum = sum;
			}
		}
	}
	return maxSum;
}

//  动态规划
int maxSubSumDP(int nums[], int len) {
	int* dp = new int[len + 1];
	dp[0] = nums[0];
	int maxSum = dp[0];
	for (int i = 1; i < len; i++) {
		dp[i] = max(dp[i - 1], 0) + nums[i];
		maxSum = max(maxSum, dp[i]);
	}
	delete[] dp;
	return maxSum;
}

int main() {
	int nums[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	int len = sizeof(nums) / sizeof(int);
	cout << maxSubSumDP(nums, len) << endl;
	return 0;
}