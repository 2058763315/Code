#include <stdio.h>

int fib(int n) {
	int m = 0;
	if (n == 0) m = 0;
	else if (n == 1) m = 1;
	else if (n >= 2) {
		m = fib(n - 1) + fib(n - 2);
	}
	return m;
}
int main() {
	int n;
	printf("ÊäÈëÊı×Ö£º");
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++) {
		printf("fib(%d): %d\n", n, fib(i));
	}
	
	return 0;
}