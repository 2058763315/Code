#include <iostream>
using namespace std;

void insertionSort(int arr[], int len) {
	for (int i = 1; i < len; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

//void insertionSort(int arr[], int n) {
//	int i, j, tmp;
//	for (i = 1;i < n - 1; i++)
//	{
//		tmp = arr[i];
//		for (j = i; j > 0 &&arr[j] > tmp; j--)
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[j] = tmp;
//	}
//}

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[] = { 2,25,45,12,15,36,18 };
	int len = sizeof(arr) / sizeof(int);
	insertionSort(arr, len);
	print(arr, len);
	return 0;
}