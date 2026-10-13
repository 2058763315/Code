#include <iostream>
using namespace std;

int seqSearch(int a[], int value, int len) {
	for (int i = 0; i < len; i++) {
		if (a[i] == value) return i;
	}
	return -1;
}

int main() {
	int a[] = {10, 3, 5, 9, 4, 25, 16};
	int len = sizeof(a) / sizeof(int);
	cout << seqSearch(a, 9, len) << endl;
	return 0;
}