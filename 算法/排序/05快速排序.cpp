#include <iostream>
using namespace std;

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void quickSort(int arr[], int left, int right) {
	//  递归终止条件：当子数组的长度为0或1时
	if (left >= right) return;
	//  选取子数组的第一个元素arr[left]作为基准(key)
	int key = arr[left];
	//  初始化两个索引，i从左向右扫描大于key的元素，j反之
	int i = left, j = right;
	while (i < j) {
		//  从右向左移动j，寻找第一个小于基准值key的元素
		while (i < j && arr[j] >= key) {
			j--;
		}
		//  从左向右移动i，寻找第一个大于基准值key的元素
		while (i < j && arr[i] <= key) {
			i++;
		}
		//  交换这两个元素
		swap(arr[i], arr[j]);
	}
	//  基准归位
	arr[left] = arr[i];
	arr[i] = key;
	quickSort(arr, left, i - 1);
	quickSort(arr, i + 1, right);
}

int main() {
	int arr[] = { 6,1,2,7,9,3,4,5,8 };
	int len = sizeof(arr) / sizeof(int);
	quickSort(arr, 0, len - 1);
	print(arr, len);
	return 0;
}