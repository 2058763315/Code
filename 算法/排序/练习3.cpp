#include <iostream>
using namespace std;

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void heapfiy(int a[], int idx, int end) {
	int maxIdx = idx;
	int left = 2 * idx + 1;
	int right = 2 * idx + 2;
	if (left < end && a[left] > a[maxIdx]) {
		maxIdx = left;
	}
	if (right < end && a[right] > a[maxIdx]) {
		maxIdx = right;
	}
	if (maxIdx != idx) {
		swap(a[idx], a[maxIdx]);
		heapfiy(a, maxIdx, end);
	}
}

void heapSort(int a[], int len) {
	for (int i = len / 2 - 1; i >= 0; i--) {
		heapfiy(a, i, len);
	}
	for (int i = len - 1; i > 0; i--) {
		swap(a[0], a[i]);
		heapfiy(a, 0, i);
	}
}

int main() {
	int arr[] = { 77, 29, 83, 52, 96 };
	int len = sizeof(arr) / sizeof(int);
	heapSort(arr, len);
	print(arr, len);
	return 0;
}