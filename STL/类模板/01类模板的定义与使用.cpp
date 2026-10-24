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
		cout << "name: " << name <<"\t" << "age: " << age << endl;
	}
};

int main() {
	Person<string, int> person1("Tom", 10);
	Person<string> person2("Jerray", 2);     //  创建对象时可以使用模板参数

	person1.showPerson();
	person2.showPerson();
	cout << person1.getName() << endl;
	cout << person1.getAge() + 10 << endl;

	Person<string, string> person3("孙悟空", "1000");
	person3.showPerson();
	//  person3的age属性为string类型，可以和字符串相加但不能和数字直接相加
	cout << person3.getAge() + "10" << endl;
	return 0;
}