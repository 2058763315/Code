#include <iostream>
using namespace std;

void move(int disk, char src, char dest) {
	cout << disk << " : " << src << " -> " << dest << endl;
}

void print(char src, char mid, char dest) {
	cout << "src: " << src << " mid: " << mid << " dest: " << dest << endl;
}

/*
	汉诺塔递归函数
	n：要移动的盘子数量
	src：原柱子，mid：辅助柱子，dest：目标柱子
*/

void hanoi(int n, char src, char mid, char dest) {
	if (n == 1) {
		print(src, mid, dest);
		move(n, src, dest);
	}
	else {
		//  递推公式
		//  把上面的n-1个盘子，借助dest从src->mid
		hanoi(n - 1, src, dest, mid);
		//  把n盘子从src移动到dest
		print(src, mid, dest);
		move(n, src, dest);
		//  把第n - 1个盘子借助src从mid移动到dest
		hanoi(n - 1, mid, src, dest);
	}
}

int main() {
	hanoi(3, 'A', 'B', 'C');
	return 0;
}