//  普通函数与模板函数的区别
#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

template<typename T>
T add_t(T a, T b) {
	return a + b;
}

int main() {
	int a = 10, b = 20;
	char c = 'A', d = 'D';
	//  普通函数调用时可以发生自动类型转换（隐式类型转换）
	cout << "add(a, c): " << add(a, c) << endl;
	
	//  没有类型转换，可以使用
	cout << "add_t(a, b): " << add_t(a, b) << endl;
	cout << "add_t(c, d): " << add_t(c, d) << endl;

	//  a是int，c是char，利用自动类型推导，不会发生自动类型转换，会报错
	//  cout << "add_t(a, c): " << add_t(a, c) << endl;

	cout << "add_t<int>(a, c): " << add_t<int>(a, c) << endl;
	return 0;
}