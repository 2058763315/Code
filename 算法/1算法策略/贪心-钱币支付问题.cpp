#include <iostream>
using namespace std;

const int N = 7;
int VALUE[N] = { 1, 2, 5, 10, 20, 50, 100 };

int COUNT[N] = { 3, 0, 1, 2, 1, 3, 5 };

//  贪心算法求解最小纸币张数
//  参数是需要支付的总金额
//  返回值是最小纸币张数
int solve(int money) {
	int num = 0;
	for (int i = N - 1; i >= 0; i--) {
		//  计算当前面额可以用多少张
		//  取实际有的张数和需要的张数中的最小值，并累加使用的纸币张数。
		int c = min(money / VALUE[i], COUNT[i]);
		num += c;
		//  更新待支付的金额
		money -= c * VALUE[i];
	}
	if (money == 0) {
		return num;
	}
	else {
		return -1;
	}
}

int main() {
	cout << solve(456) << endl;
	return 0;
}