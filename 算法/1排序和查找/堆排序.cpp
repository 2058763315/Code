#include <iostream>
using namespace std;

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void heapify(int arr[], int idx, int end) {
	int maxIndex = idx;
	int left = 2 * idx + 1;
	int right = 2 * idx + 2;

	if (left < end && arr[left] > arr[maxIndex]) {
		maxIndex = left;
	}
	if (right < end && arr[right] > arr[maxIndex]) {
		maxIndex = right;
	}
	if (maxIndex != idx) {
		swap(arr[maxIndex], arr[idx]);
		heapify(arr, maxIndex, end);
	}
}

void heapSort(int arr[], int len) {
	//  ¹¹½¨´ó¶¥¶Ñ
	for (int i = len / 2 - 1; i >= 0; i--) {
		heapify(arr, i, len);
	}
	for (int i = len - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, 0, i);
	}
}

int main() {
	int arr[] = {77, 96, 83, 52, 29};
	int len = sizeof(arr) / sizeof(int);
	heapSort(arr, len);
	print(arr, len);
	return 0;
}