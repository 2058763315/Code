#include <iostream>
using namespace std;

/*
	小青蛙跳台阶问题（也称为爬楼梯问题）:
		一只小青蛙开始在第0级台阶，它向上跳n个台阶楼梯。
		每次可以向上跳一级，也可以向上跳两级，求该青蛙跳到第n几台阶的跳法总数。

	n = 1 : 1种，[1]
	n = 2 : 2种，[1,1]、[2]
	n = 3 : 3种，[1,1,1]、 [1,2]、[2,1]
	n = 4 : 5种
	n = 5 : 8种
	跳到第n阶的方法综合是，n-1阶方法总和+n-2阶方法总和。
*/

int forgJump(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	return forgJump(n - 1) + forgJump(n - 2);
}

int main() {
	cout << forgJump(5) << endl;
	return 0;
}