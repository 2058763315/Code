#include <iostream>
using namespace std;

long long fib(int n) {
	//int a[512] = { 0, 1 };
	long long* a = new long long[n + 1];
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	long long tmp = a[n];
	delete[] a;
	return tmp;
}

int main() {
	cout << fib(60) << endl;
	return 0;
}