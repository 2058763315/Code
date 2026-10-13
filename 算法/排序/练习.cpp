#include <iostream>
using namespace std;


void print(int arr[],int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
//  √∞≈›≈≈–Ú
void bubbleSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i; j++) {
			if (arr[j - 1] > arr[j]) {
				swap(arr[j - 1], arr[j]);
			}
		}
	}
}
//  —°‘Ò≈≈–Ú
void selectionSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		int minId = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[j] < arr[minId]) {
				minId = j;
			}
		}
		if (minId != i) {
			swap(arr[i], arr[minId]);
		}
	}
}

//  ≤Â»Î≈≈–Ú
void insertionSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		swap(arr[j + 1], key);
	}
}
int main() {
	int arr[] = { 11, 12, 15, 23, 5, 9, 14, 7, 28 };
	int len = sizeof(arr) / sizeof(int);
	//bubbleSort(arr, len);
	//selectionSort(arr, len);
	insertionSort(arr, len);
	print(arr, len);

	return 0;
}