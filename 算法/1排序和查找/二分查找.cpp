#include <iostream>
using namespace std;

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int binarySearch(int a[], int value, int left, int right) {
	if (left > right) return -1;
	int mid = left + (right - left) / 2;
	if (value == a[mid]) {
		return mid;
	}
	else if(value < a[mid]) {
		return binarySearch(a, value, left, mid - 1);
	}
	else if(value > a[mid]) {
		return binarySearch(a, value, mid + 1, right);
	}
	return -1;
}

void ShellSort(int arr[], int len) {
	for (int gap = len / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < len; i++) {
			int j = i - gap;
			int tmp = arr[i];
			while (j >= 0 && arr[j] > tmp) {
				arr[j + gap] = arr[j];
				j -= gap;
			}
			arr[j + gap] = tmp;
		}
	}
}

int main() {
	int a[] = { 10, 3, 5, 9, 4, 25, 16 };
	int len = sizeof(a) / sizeof(int);
	ShellSort(a, len);
	print(a, len);
	cout << binarySearch(a, 4, 0, len - 1) << endl;
	return 0;
}