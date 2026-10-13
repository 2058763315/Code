#include <iostream>
using namespace std;

/*
动态规划解题一般分为三步:
	定义状态数组：
		明确状态数组a[。。。]的含义，例如a[n]表示斐波那契的第n个数
	写出状态转移方程：
		根据问题逻辑，建立当前状态与之前状态之间的递推关系。例如，a[n]=a[n-1]+a[n-2]
	确定初始条件与计算顺序：
		例如，设置初始化条件为a[0] = 0;a[1] = 1。计算顺序从索引较小的元素计算出索引较大的元素。
*/

//  动态规划-斐波那契数列
long long fib(int n) {
	long long a[512] = { 0, 1 };
	for (int i = 2; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	return a[n];
}

//  动态规划-小青蛙跳台
long long forgJump(int n) {
	long long b[512] = { 0, 1 };
	for (int i = 2; i <= n; i++) {
		b[i] = b[i - 1] + b[i - 2];
	}
	return b[n];
}

int main() {
	int i = 0;
	while (i < 20) {
		cout << "fib("<< i << "): " << fib(i) << endl;
		i++;
	}
	cout << forgJump(6) << endl;
	return 0;
}