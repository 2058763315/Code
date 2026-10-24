#include <iostream>
using namespace std;

class MyClass {
public:
	int id;
	MyClass(int id) {
		this->id = id;
	}
};

template <class T>
void mytest(T& a, T& b) {
	cout << "void mytest(T& a, T& b)" << endl;
}
template <class T>
void mytest(T* a, T* b) {
	cout << "void mytest(T* a, T* b)" << endl;
}

void mytest(MyClass& a, MyClass& b) {
	cout << "mytest(MyClass& a, MyClass& b): " << a.id << '\t' << b.id << endl;
}
int main() {
	int a = 10, b = 20;
	MyClass mc1(100), mc2(200);
	//  根据不同的参数调用不同的重载函数
	mytest(a, b);
	mytest(&a, &b);

	//  优先使用普通函数void mytest(MyClass& a, MyClass& b)
	mytest(mc1, mc2);
	//  即使存在更优秀的普通函数重载，也可以通过func<>()显示指定使用函数模板
	mytest<>(mc1, mc2);
	//  只有void mytest(T* a, T* b)可以匹配
	mytest(&mc1, &mc2);

	return 0;
}