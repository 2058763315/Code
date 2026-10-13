#include <iostream>
using namespace std;


//  交换函数
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

//  计算1到n的和
//  O(n)
int sum1(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	return sum;
}
//  O(1)
int sum2(int n) {
	int sum = (1 + n) * n / 2;
	return sum;
}
//  输出n*n O(n^2) + O(n) = O(n^2)
void showNN(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << i * j << "\t";
		}
		cout << endl;
	}
}
//  输出小于n的所有2的幂
void findNextPowerOfTwo(int n) {
	int count = 1;
	while (count < n) {
		cout << count << " ";
		count *= 2;
	}
	cout << endl;
}
//  输出小于n的所有2的幂（方法2）
void findNextPowerOfTwo2(int n) {
	for (int i = 1; i < n; i *= 2) {
		cout << i << " ";
	}
}

int main() {
	
	int a = 10, b = 20;
	swap(a, b);
	cout << a << " " << b << endl;

	cout << sum1(100) << endl;
	cout << sum2(100) << endl;
	showNN(9);
	findNextPowerOfTwo(33);
	findNextPowerOfTwo2(33);
	return 0;
}