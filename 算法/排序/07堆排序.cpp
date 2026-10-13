#include <iostream>
using namespace std;

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
/*
	heapfiy下沉操作，维护以idx为根的大顶堆性质
		要求以idx为根的左右子树，都是大顶堆
	a：待调整的数组
	idx：当前要下沉操作的节点索引
	end：堆的边界，当前堆的有效范围, 取值范围[0, end)
*/
void heapify(int a[], int idx, int end) {
	int maxIdx = idx;			//  假设当前节点是最大值
	int left = 2 * idx + 1;		//  左孩子索引（从0起）
	int right = 2 * idx + 2;	//  右孩子索引（从0起）

	//  left是左孩子索引，left < end == true，说明左孩子在有效范围内存在
	//  判断左孩子的值是否大于最大值
	if (left < end && a[left] > a[maxIdx]) {
		//  左孩子存在且其值大于当前最大值，最大值索引设置为左孩子的索引
		maxIdx = left;
	}
	if (right < end && a[right] > a[maxIdx]) {
		//  右孩子存在且其值大于当前最大值，最大值索引设置为右孩子的索引。
		maxIdx = right;
	}
	//  如果最大值不在当前节点，则交换并下沉
	if (maxIdx != idx) {
		swap(a[idx], a[maxIdx]);  //  将较大子节点向上移动，当前节点下沉
		heapify(a, maxIdx, end);  //  递归调整被交换到子位置的父节点
	}
}

void heapSort(int a[], int len) {
	//  完全二叉树，从0起始时，最后一个非叶子节点的索引为len / 2 - 1
	//  从最后一个非叶子节点开始构造大顶堆
	for (int i = len / 2 - 1; i >= 0; i--) {
		heapify(a, i, len);
	}
	//cout << "构造大顶堆: ";
	//print(a, len);
	for (int i = len - 1; i > 0; i--) {
		swap(a[0], a[i]);
		heapify(a, 0, i);
		cout << "第" << len - i << "次: ";
		print(a, len);
	}
}

int main() {
	int arr[] = { 77, 96, 83, 52, 29 };
	int len = sizeof(arr) / sizeof(int);
	heapSort(arr, len);
	print(arr, len);
	return 0;
}