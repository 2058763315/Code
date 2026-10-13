#include <iostream>
using namespace std;

struct arr {
	int idx;
	int value;
};

void bubbleSort(arr a[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i; j++) {
			if (a[j - 1].value > a[j].value) {
				swap(a[j - 1], a[j]);
			}
		}
	}
}

void print(arr a[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "idx: " << a[i].idx << "\tvalue: " << a[i].value << endl;
	}
	cout << endl;
}

int binarySearch(arr a[], int left, int right, int value) {
	if (left > right) {
		return -1;
	}
	int mid = (left + right) / 2;
	if (value == a[mid].value) {
		return a[mid].idx;
	}
	if (value < a[mid].value) {
		return binarySearch(a, left, mid - 1, value);
	}
	if (value > a[mid].value) {
		return binarySearch(a, mid + 1, right, value);
	}
	return -1;
}

int main() {
	arr a[] = { {0, 11}, {1, 5}, {2, 13}, {3, 16}, {4, 28}, {5, 7} };
	int len = sizeof(a) / sizeof(arr);
	print(a, len);
	bubbleSort(a, len);
	print(a, len);
	cout << "binarySearch(a, 0, len - 1, 11): " << binarySearch(a, 0, len - 1, 11) << endl;
	cout << "binarySearch(a, 0, len - 1, 16): " << binarySearch(a, 0, len - 1, 16) << endl;
	return 0;
}