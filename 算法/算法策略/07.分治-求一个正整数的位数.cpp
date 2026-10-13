#include <iostream>
using namespace std;

/*
	求一个正整数N的位数
	分解：将原问题分解为一个更小的子问题
		N 的位数是 1 + （N/10的位数), 其中 求N/10的位数，是一个更小的子问题。
	解决：
		递归解决问题，当N==0时，问题足够小，直接返回0.
	合并：
		子问题的解+1d得到原问题的解。
	例如：
	getLen(123)
	= 1 + getLen(12)
	= 1 + (1 + getLen(1))
	= 1 + (1 + (1 + getLen(0)))
	= 3
*/

int getLen(int n) {
	if (n == 0) return 0;
	return 1 + getLen(n / 10);
}

int main() {
	cout << getLen(12323) << endl;
	return 0;
}