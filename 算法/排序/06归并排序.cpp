#include <iostream>
using namespace std;

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
//  合并两个已经排序的子数组
void merge(int a[], int left, int mid, int right) {
	//  创建临时辅助数组用于存放合并后的有序数组
	//  辅助数组要存放从left到right所有的元素，长度为right-left+1
	int* help = new int[right - left + 1] {};

	//  初始化三个整型变量用于存放索引
	//  i:遍历左子数组[left, mid];
	//  j:遍历右子数组[mid+1, right];
	//  k指向辅助数组
	int i = left, j = mid + 1, k = 0;

	// ①双指针择优放入临时数组：左右都没走完，取更小值存入help
	while (i <= mid && j <= right) {
		if (a[i] <= a[j]) {
			help[k++] = a[i++];
		}
		else {
			help[k++] = a[j++];
		}
	}
	// ②左区间有剩余数据，直接全部拷贝进help
	while (i <= mid) {
		help[k++] = a[i++];
	}
	// ③右区间有剩余数据，直接全部拷贝进help
	while (j <= right) {
		help[k++] = a[j++];
	}
	// 把临时数组有序数据，覆盖写回原数组对应区间
	k = 0;
	for (int i = left; i <= right; i++) {
		a[i] = help[k++];
	}
	// 释放堆内存，防止内存泄漏
	delete[] help;
}
//  归并排序函数
void mergeSort(int arr[], int left, int right) {
	if (left < right) {
		//  计算中点，将数组分为两半
		int mid = (left + right) / 2;
		//  递归排序左半部分
		mergeSort(arr, left, mid);
		//  递归排序右半部分
		mergeSort(arr, mid + 1, right);
		//  合并左右两个已经排序的数组
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