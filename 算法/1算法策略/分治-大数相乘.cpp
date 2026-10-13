#include <iostream>
#include <string>
using namespace std;
//  转字符串求长度
int getLength(int a) {
	string s = to_string(a);
	return s.size();
}
//  递归求数的长度
int getLength1(int a) {
	if (a == 0) return 0;
	return 1 + getLength(a / 10);
}

long long karatsuba(int a, int b) {
	//  终止条件
	if (a < 10 || b < 10) return a * b;
	//  确定拆分位置
	//  取两个数中较长的一半作为拆分点
	int aLen = getLength(a);
	int bLen = getLength(b);

	int m = max(aLen, bLen) / 2;

	//  将a, b拆分为高低位，a1, a2, b1, b2;
	//  pow(10, m)表示求10的m次方
	int a1 = a / pow(10, m);
	int a2 = a - a1 * pow(10, m);
	int b1 = b / pow(10, m);
	int b2 = b - b1 * pow(10, m);
	//  三次递归乘法
	long long n0 = karatsuba(a1, b1);
	long long n1 = karatsuba(a2, b2);
	long long n2 = karatsuba(a1 + a2, b1 + b2);
	//  合并
	return n0 * pow(10, 2 * m) + (n2 - n1 - n0) * pow(10, m) + n1;
}

int main() {
	cout << karatsuba(3666235, 23456) << endl;
	return 0;
}