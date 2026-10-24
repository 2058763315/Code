#include <iostream>
using namespace std;

template<class T>
class Fruit {
public:
	Fruit() {
		cout << "Fruit类在构造：" << typeid(T).name() << endl;
	}
};
//  策略一，在继承时指定父类具体类型
//  子类是普通类
class Apple : public Fruit<int> {
public:
	Apple() {
		cout << "Apple在构造" << endl;
	}
};
//  子类是模板类，父类不随子类的类型变化
template<class T>
class Pear : public Fruit<float> {
public:
	Pear() {
		cout << "Pear在构造，T：" << typeid(T).name() << endl;
	}
};

//  策略二，父类与子类共享模板参数
template<class T>
class Banana : public Fruit<T> {
public:
	Banana() {
		cout << "Banana在构造，T：" << typeid(T).name() << endl;
	}
};

int main() {
	Apple apple;
	Pear<int> pear1;
	Pear<char> pear2;
	Pear<bool> pear3;
	cout << endl;

	Banana<int> banana1;
	Banana<char> banana2;
	Banana<bool> banana3;
	return 0;
}