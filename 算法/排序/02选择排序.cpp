#include <iostream>
using namespace std;


void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

/*
void selectionSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		int minId = i;
		for (int j = i + 1; j < len; j++) {  //  找最小值，并记录最小值的索引
			if (arr[j] < arr[minId]) {
				minId = j;
			}
		}
		if (minId != i) {  //  如果最小值的索引和i相同，则不需要交换
			swap(arr[i], arr[minId]);
		}
	}
}*/

void selectionSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		int minIdx = i;
		for (int j = i; j < len; j++) {
			if (arr[j] < arr[minIdx]) {
				minIdx = j;
			}
		}
		if (minIdx != i) {
			swap(arr[i], arr[minIdx]);
		}
	}
}

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[] = { 2,25,45,12,15,36,18 };
	int len = sizeof(arr) / sizeof(int);
	selectionSort(arr, len);
	print(arr, len);
	return 0;
}