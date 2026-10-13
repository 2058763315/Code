#include <iostream>
using namespace std;

//	求一个正整数N的位数
int getLen(int n) {
	if (n == 0) return 0;
	return 1 + getLen(n / 10);
}

int divedConque(int a, int b) {
	
	//	如果a，b中有一个是个位数，直接相乘
	if (a <= 9 || b <= 9) {
		return a * b;	//	解决问题
	}
	else {
		//	原问题分解为相似的子问题
		//	步骤1：计算两个数的位数
		int a_len = getLen(a);
		int b_len = getLen(b);

		//	步骤2：确定拆分位m
		//	取两个数中较长者长度的一半，作为拆分点
		int len_num = max(a_len, b_len) / 2;

		//	步骤3： 将a和b拆分为高位和低位
		int a1 = a / pow(10, len_num);
		int a2 = a % (int)pow(10, len_num);
		int b1 = b / pow(10, len_num);
		int b2 = b % (int)pow(10, len_num);
		//	步骤4：三次递归乘法
		int n0 = divedConque(a1, b1);
		int n1 = divedConque(a2, b2);
		int n2 = divedConque(a1 + a2, b1 + b2);

		// 合并结果
		return n0 * pow(10, len_num * 2) + (n2 - n0 - n1) * pow(10, len_num) + n1;
	}	
}

int main() {
	cout << divedConque(12, 122) << endl;
}