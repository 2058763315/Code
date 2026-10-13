#include <iostream>
using namespace std;

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void BubbleSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
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
	for (int gap = len / 2 - 1; gap > 0; gap /= 2) {
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
		swap(arr[j], arr[i]);
	}
	arr[left] = arr[i];
	arr[i] = key;
	QuickSort(arr, left, i - 1);
	QuickSort(arr, i + 1, right);
}

void merge(int arr[], int left, int mid, int right) {
	int* help = new int[right - left + 1];
	int i = left, j = mid + 1, k = 0;
	while (i <= mid && j <= right) {
		if (arr[i] < arr[j]) {
			help[k++] = arr[i++];
		}
		else {
			help[k++] = arr[j++];
		}
	}
	while (i <= mid) {
		help[k++] = arr[i++];
	}
	while (j <= right) {
		help[k++] = arr[j++];
	}
	k = 0;
	for (int i = left; i <= right; i++) {
		arr[i] = help[k++];
	}
	delete[] help;
}

void MergeSort(int arr[], int left, int right) {
	if (left >= right) return;
	int mid = (left + right) / 2;
	MergeSort(arr, left, mid);
	MergeSort(arr, mid + 1, right);
	merge(arr, left, mid, right);
}

void heapify(int arr[], int idx, int end) {
	int maxIdx = idx;
	int left = 2 * idx + 1;
	int right = 2 * idx + 2;
	if (left < end && arr[left] > arr[maxIdx]) {
		maxIdx = left;
	}
	if (right < end && arr[right] > arr[maxIdx]) {
		maxIdx = right;
	}
	if (maxIdx != idx) {
		swap(arr[maxIdx], arr[idx]);
		heapify(arr, maxIdx, end);
	}
}

void HeapSort(int arr[], int len) {
	for (int i = len / 2 - 1; i >= 0; i--) {
		heapify(arr, i, len);
	}
	for (int i = len - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, 0, i);
	}
}

int main() {
	int arr[] = { 14, 9, 4, 20, 2, 16, 5, 17, 7, 3 };
	int len = sizeof(arr) / sizeof(int);
	//ShellSort(arr, len);
	//QuickSort(arr, 0, len - 1);
	//MergeSort(arr, 0, len - 1);
	HeapSort(arr, len);
	print(arr, len);
	return 0;
}