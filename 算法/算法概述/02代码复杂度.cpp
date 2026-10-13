#include <iostream>
using namespace std;

//  互换操作 O(1)
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
//  求和公式 O(1)
int sum(int n) {
	int sum = 0;
	sum = (1 + n) * n / 2;
	return sum;
}
//  循环求和 O(n)
int sum1(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	return sum;
}
//  计算1到100000的和，O(100000) -> O(1)
int sum2() {
	int n = 100000;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += i;
	}
	return sum;
}
//  二重循环，每层都是n，复杂度为O(n^2)
void showNN(int n) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			cout << i * 10 + j << " ";
		}
		cout << endl;
	}
}
//  输出小于n的所有2的幂，log(n)次循环，时间复杂度为O(log(n))
void findPowerOfTow(int n) {
	int m = 1;
	while (m < n) {
		cout << m << " ";
		m *= 2;
	}
	cout << endl;
}


int main() {
	int a = 0, b = 20;
	swap(a, b);
	cout << a << " " << b << endl;
	cout << sum(100) << endl;
	showNN(3);
	findPowerOfTow(20);
	return 0;
}