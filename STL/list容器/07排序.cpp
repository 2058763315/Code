#include<iostream>
#include<list>	
using namespace std;

void printList(const list<int>& ls) {
	for (list<int>::const_iterator it = ls.begin(); it != ls.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;
}

//	作为sort的参数时，函数有两个形参，第一个代表前面的元素，第二个代表后面的元素，返回类型为bool类型
bool cap(int a, int b) {
	//	自定义两个元素之间的排序规则
	return a > b;	//	例如，前面的元素大于后面的元素，则返回true
}

int main() {

	//	排序 sort
	list<int> ls1 = { 14, 6, 2, 8, 17, 11, 5, 3, 19, 5 }, ls2;
	ls2 = ls1;
	printList(ls1);
	//	默认从小到大，升序排序
	ls1.sort();
	printList(ls1);
	//	指定排序方式，从大到小降序排序。
	printList(ls2);
	ls2.sort(cap);
	printList(ls2);

	return 0;
}