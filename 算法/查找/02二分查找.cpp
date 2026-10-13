#include <iostream>
using namespace std;

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int binarySearch(int a[], int left, int right, int value) {
	if (left > right) {
		return -1;
	}
	int mid = (left + right) / 2;
	
	if (value == a[mid]) {
		return mid;
	}
	if (value < a[mid]) {
		return binarySearch(a, left, mid - 1, value);
	}
	if (value > a[mid]) {
		return binarySearch(a, mid + 1, right, value);
	}
	return -1;
}

int main() {
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int len = sizeof(a) / sizeof(int);
	print(a, len);
	cout << binarySearch(a, 0, len - 1, 8) << endl;
	cout << binarySearch(a, 0, len - 1, 0) << endl;
	return 0;
}