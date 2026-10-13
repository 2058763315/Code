#include <iostream>
using namespace std;

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


void merge(int arr[], int left, int mid, int right) {
	// 1.开辟临时数组help，长度=当前区间元素总数
	int* help = new int[right - left + 1] {};
	// i：左区间起始下标；j：右区间起始下标；k：临时数组help下标
	int i = left, j = mid + 1, k = 0;

	// ①双指针择优放入临时数组：左右都没走完，取更小值存入help
	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j]) {
			help[k++] = arr[i++];
		}
		else {
			help[k++] = arr[j++];
		}
	}
	// ②左区间有剩余数据，直接全部拷贝进help
	while (i <= mid) {
		help[k++] = arr[i++];
	}
	// ③右区间有剩余数据，直接全部拷贝进help
	while (j <= right) {
		help[k++] = arr[j++];
	}

	// 把临时数组有序数据，覆盖写回原数组对应区间
	k = 0;
	for (int i = left; i <= right; i++) {
		arr[i] = help[k++];
	}
	// 释放堆内存，防止内存泄漏
	delete[] help;
}

void mergeSort(int arr[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

int main() {
	int arr[] = { 6,1,2,7,9,3,4,5,8 };
	int len = sizeof(arr) / sizeof(int);
	mergeSort(arr, 0, len - 1);
	print(arr, len);
	return 0;
}