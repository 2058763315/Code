#include <iostream>
using namespace std;

void move_disk(int disk, char from, char to) {
	cout << "将盘子: " << disk << "从柱子:" << from << "移动到柱子:" << to << endl;
}

/*
hanoi函数功能：演示汉诺塔
参数：
	n: 要移动盘子的数量，n为正整数
	src: 源柱子(当前盘子所在的柱子)
	aux: 辅助柱子（用于中转）
	dest: 目标柱子（要移动到的柱子）
*/
void hanoi(int n, char src, char aux, char dest) {
	if (n <= 0) return;  //防止异常输入
	
	if (n == 1) { 
		//	只有一个盘子，直接移动
		move_disk(n, src, dest);
	}
	else {
		//	1. 把上面的n-1个盘子借助dest从src移动到aux，
		hanoi(n - 1, src, dest, aux);
		//	2. 把最大的第n个盘子从src移动到dest
		move_disk(n , src, dest);
		//	3. 把第n-1个盘子借助src从aux移动到dest
		hanoi(n - 1, aux, src, dest);
	}
}

int main() {
	hanoi(3, 'A', 'B', 'C');
	return 0;
}