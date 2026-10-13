#include <iostream>
using namespace std;

//	递归方式计算n的阶乘
long long power(int n) {
	if (n == 0) return 1;
	if (n == 1) return 1;
	return n * power(n - 1);
}

int main() {
	cout << power(2) << endl;
	cout << power(3) << endl;
	cout << power(4) << endl;
	return 0;
}