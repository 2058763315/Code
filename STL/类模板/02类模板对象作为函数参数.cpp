#include <iostream>
using namespace std;

template<class NameType, class AgeType = int>

class Person {
private:
	NameType name;
	AgeType age;
public:
	Person(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}
	NameType getName() {
		return name;
	}
	AgeType getAge() {
		return age;
	}
	void showPerson() {
		cout << "name: " << name << "\t" << "age: " << age << endl;
	}
};
class Dog {
public:
	void showPerson() {
		cout << "Dog" << endl;
	}
};
void show_type(Person<string, int>& person) {
	person.showPerson();
}

template<class T1, class T2>
void show_tpl_para(Person<T1, T2>& person) {
	person.showPerson();
	T2 age = person.getAge();
	cout << "T1:" << typeid(T1).name() << "\nT2:" << typeid(T2).name() << endl;
}

template <class T>
void show_tpl_class(T& person) {
	person.showPerson();
}

int main() {
	Person<string, int> person1("唐僧", 10);
	Person<string> person2("八戒", 20);
	Person<string, string> person3("悟空", "1000");

	show_type(person1);
	show_type(person2);
	//  show_type(person3);  仅接受Person<string, int>类型的对象，person3不能传入

	//  参数模板化
	//  只要是Person类模板生成的对象都可以作为参数传递
	show_tpl_para(person1);
	show_tpl_para(person2);
	show_tpl_para(person3);
	//  完全泛化
	show_tpl_class(person1);
	show_tpl_class(person2);
	show_tpl_class(person3);

	Dog dog;
	//	 Dog 和 Person都包含showPerson()方法，所以都可以作为参数传递。
	show_tpl_class(dog);

	return 0;
}