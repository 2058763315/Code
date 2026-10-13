#include <iostream>
using namespace std;

/*
	某人获得一笔奖金m,要求购买最少数量的商品把钱花光，即没有零钱剩余。
	
	在本问题语境中，商品可以理解为不同面值的纸币。
*/

//	假设商品的种类为N（共7种面值）
const int N = 7;
//	假设每种商品的价格如下
int Value[N] = { 1, 2, 5, 10, 20,50,100 };
int Count[N] = { 3, 0, 2, 1,  0, 3, 5 };

int solve(int money) {
	int num = 0;
	for (int i = N - 1; i >= 0; i--) {
		int c = min(money / Value[i], Count[i]);
		money -= c * Value[i];
		num += c;
		cout << "使用面值为: " << Value[i] << " 的钞票 " << c << " 张,待支付金额: " << money << endl;
	}
	if (money > 0) return -1;

	return num;
}

int main() {
	cout << solve(662) << endl;
	return 0;
}