#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> d1;
	cout << d1.size() << endl;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);  //  尾部插入元素i
		//  size()获取容器大小
		cout << "d1.size(): " << d1.size() <<endl;
	}

	//  resize()指定容器的长度
	//  指定比原容器小，超出部分会删除
	d1.resize(100);
	cout << "d1.size(): " << d1.size() << endl;

	d1.resize(10);
	cout << "d1.size(): " << d1.size() << endl;

	return 0;
}