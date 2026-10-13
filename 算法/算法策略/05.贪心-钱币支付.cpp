#include <iostream>
using namespace std;

//	定义纸币种类数量（共7种面值）
const int N = 7;

//	纸币的面值
int Value[N] = { 1, 2, 5, 10, 20, 50, 100 };

//	每种面额对应的可用张数
int Count[N] = { 3, 0, 2, 1, 0, 3, 5 };

/*
	贪心算法求解最少纸币张数
	参数：需要支付的金额
	返回：如果能支付最少得张数，如果不能支付返回-1
*/
int solve(int money){
	int num = 0;		//	用于累计纸币的总张数
	for (int i = N - 1; i >= 0; i--) {
		//	计算当前面额Value[i],最多可用多少张
		//	money / Value[i],在不考虑限制下，最多能用几张。
		//	Count[i],该面额实际有几张
		//	取二者较小值，确保不超实际有的金额。
		int c = min( money / Value[i], Count[i]);
		//	更新剩余待支付金额
		money -= c * Value[i];
		//	累加本次使用的纸币张数
		num += c;
		cout << "使用面值为: " << Value[i] << " 的钞票 " << c << " 张,待支付金额: " << money << endl;
	}
	//	持有的钞票不够支付
	if (money > 0) return -1;

	return num;
}

int main() {
	cout << solve(662) << endl;
	return 0;
}