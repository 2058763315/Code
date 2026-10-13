#include <iostream>
using namespace std;

void bubbleSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i; j++) {
			if (arr[j - 1] > arr[j]) {
				swap(arr[j - 1], arr[j]);
			}
		}
	}
}

int main() {
	int arr[] = { 21,25,45,12,15,36,18 };
	int len = sizeof(arr) / sizeof(int);
	bubbleSort(arr, len);
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}