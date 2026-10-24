#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
public:
	string name;
	int age;
	Person(const string& name, int age) {
		this->name = name;
		this->age = age;
	}
};
int cmpAge(Person person1, Person person2) {
	return person1.age < person2.age;
}
int main() {
	vector<Person> v = { Person("a", 10), Person("b", 30),  Person("c", 20) };
	v.push_back(Person("d", 40));

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "name: " << (*it).name << " age: " << (*it).age << endl;
	}
	//  根据age，对v中的对象进行排序
	sort(v.begin(), v.end(), cmpAge);
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "name: " << (*it).name << " age: " << (*it).age << endl;
	}
	return 0;
}