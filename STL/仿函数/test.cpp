#include <iostream>
#include <set>
using namespace std;

// 自定义类型
class Person {
public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

// 自定义仿函数
class MyPersonCMP {
public:
    bool operator()(const Person& person1, const Person& person2) const{
        return person1.age > person2.age;
    }
};

void printSet(set<Person, MyPersonCMP>& s) {
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << it->name << " " << it->age << " ";
    }
    cout << endl;
}

int main() {
    Person p("张三", 18), p1("李四", 17);
    set<Person, MyPersonCMP> s;
    s.insert(p);
    s.insert(p1);
    printSet(s);
    return 0;
}