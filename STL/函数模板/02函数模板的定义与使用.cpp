#include <iostream>

using namespace std;

/*
函数模板基本用法，其中T是占位符，在编译时会被具体类型替换掉
template<typename T>
返回类型 函数名<形参列表>
{
	函数体。  形参列表和函数体都可以使用T作为占位符
}
*/
template<typename T>
void mySwap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}
int main() {
	int a1 = 10, b1 = 20;
	float a2 = 10.1, b2 = 20.2;
	char a3 = 'a', b3 = 'b';

	mySwap(a1, b1);
	cout << a1 << '\t' << b1 << endl;
	mySwap(a2, b2);
	cout << a2 << '\t' << b2 << endl;
	mySwap(a3, b3);
	cout << a3 << '\t' << b3 << endl;
	return 0;
}