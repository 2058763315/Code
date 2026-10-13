#include <iostream>
using namespace std;

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void merge(int a[], int left, int mid, int right) {
	int* help = new int[right - left + 1];
	
	int i = left, j = mid + 1, k = 0;
	while (i <= mid && j <= right) {
		if (a[i] <= a[j]) {
			help[k++] = a[i++];
		}
		else {
			help[k++] = a[j++];
		}
	}

	while (i <= mid) {
		help[k++] = a[i++];
	}

	while (j <= right) {
		help[k++] = a[j++];
	}

	k = 0;
	for (int i = left; i <= right; i++) {
		a[i] = help[k++];
	}
	delete[] help;
}

void mergeSort(int arr[], int left, int right) {
	if (left >= right) return;
	int mid = (left + right) / 2;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	merge(arr, left, mid, right);
}

int main() {
	int arr[] = { 6,1,2,7,9,3,4,5,8 };
	int len = sizeof(arr) / sizeof(int);
	mergeSort(arr, 0, len - 1);
	print(arr, len);
	return 0;
}