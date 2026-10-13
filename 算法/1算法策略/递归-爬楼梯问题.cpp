#include <iostream>
using namespace std;
/*
	爬楼梯问题:
	跳到第n阶的方法总和是，n-1阶方法总和 + n-2阶方法总和。
*/
int jump(int n) {
	if (n <= 2) {
		return n;
	}
	return jump(n - 1) + jump(n - 2);
}

int main() {
	cout << jump(5) << endl;
	return 0;
}