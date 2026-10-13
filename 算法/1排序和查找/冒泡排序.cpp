#include <iostream>
using namespace std;

void BubbleSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		int flag = 0;
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				flag = 1;
			}
		}
		if (!flag) {
			break;
		}
	}
}

void SelectSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		int minIdx = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[j] < arr[minIdx]) {
				minIdx = j;
			}
		}
		if (minIdx != i) {
			swap(arr[minIdx], arr[i]);
		}
	}
}

void InsertSort(int arr[], int len) {
	for (int i = 1; i < len; i++) {
		int j = i - 1;
		int tmp = arr[i];
		while (j >= 0 && arr[j] > tmp) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
	}
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

void QuickSort(int arr[], int left, int right) {
	if (left >= right) return;
	int key = arr[left];
	int i = left, j = right;
	while (i < j) {
		while (i < j && arr[j] >= key) {
			j--;
		}
		while (i < j && arr[i] <= key) {
			i++;
		}
		swap(arr[i], arr[j]);
	}
	arr[left] = arr[i];
	arr[i] = key;
	QuickSort(arr, left, i - 1);
	QuickSort(arr, i + 1, right);
}

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	srand((unsigned int)time(0));
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 20 + 1;
	}
	int len = sizeof(arr) / sizeof(int);
	print(arr, len);
	//ShellSort(arr, len);
	//print(arr, len);
	QuickSort(arr, 0, len - 1);
	print(arr, len);
	return 0;
}