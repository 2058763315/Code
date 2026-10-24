#include<iostream>
#include<set>
using namespace std;

//	自定义仿函数
//	MyCompare是自定义一个仿函数类。因为它返回bool,有两个参数，它也是一个二元谓词。
class MyCompare {
public:
	//	函数对象可以有返回值、参数也可以有自己的内部变量。
	//	函数对象是一个特殊类的对象，它内部重载了()运算符，它的返回值是bool类型。
	bool operator()(const int v1, const int v2) const {
		return v1 > v2;
	}
};

int main() {
	//	使用自定义仿函数给set中元素排序。
	set<int, MyCompare> s;
	s.insert(40);
	s.insert(10);
	s.insert(20);
	s.insert(30);
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
	return 0;
}