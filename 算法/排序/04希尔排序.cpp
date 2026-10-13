#include <iostream>
using namespace std;
//  希尔排序算法又叫缩小增量排序算法
//  是一种更高效的插入排序算法
void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void shellSort(int arr[], int len) {
	for (int gap = len / 2; gap > 0; gap /= 2) {
		//  从gap开始，遍历到末尾
		for (int i = gap; i < len; i++) {
			int temp = arr[i];
			int j = i - gap;
			while (j >= 0 && arr[j] > temp) {
				arr[j + gap] = arr[j];
				j -= gap;
			}
			arr[j + gap] = temp;
		}
	}
}
int main() {
	int arr[] = { 8,9,1,7,2,3,5,4,6,0 };
	int len = sizeof(arr) / sizeof(int);
	shellSort(arr, len);
	print(arr, len);
	return 0;
}