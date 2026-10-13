#include<stdio.h>

long long jie(int n) {
	long long m = 1;
	if (n > 1) {
		m = n * jie(n - 1);
	}
	else {
		m = 1;
	}
	return m;
}

int main() {
	int n;
	printf("ÊäÈëÊı×Ö£º");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("jie(%d): %lld\n", i, jie(i));
	}
	return 0;
}