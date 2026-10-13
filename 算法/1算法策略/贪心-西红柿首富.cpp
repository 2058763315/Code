#include <iostream>
using namespace std;
/*
西红柿首富获得了一笔数额为m元的奖金，他必须刚好把这笔奖金全部花光，不能有任何剩余。
商店里只出售特定面额的商品，价格分别为: 1元，2元，5元，10元，20元，50元，100元，
每种商品数量可以认为是无限的。
请帮西红柿首富计算，在刚好花光m元奖金的前提下，最少需要购买多少商品。
*/
const int N = 7;
int VALUE[N] = { 1, 2, 5, 10, 20, 50, 100 };

int count(int m) {
	int count = 0;
	for (int i = N - 1; i >= 0; i--) {
		int c = m / VALUE[i];
		cout << "购买" << c << "个价值为" << VALUE[i] << "的商品" << endl;
		count += c;
		m -= c * VALUE[i];
	}
	return count;
}

int main() {
	cout << count(999) << endl;
	return 0;
}