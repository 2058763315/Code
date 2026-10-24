#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1;
	cout << v1.size() << endl;
	cout << v1.capacity() << endl;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);  //  尾部插入元素i
		//  capacity()获取容器容量，size()获取容器大小
		cout << "v1.size(): " << v1.size() << " v1.capacity(): " << v1.capacity() << endl;
	}

	//  resize()指定容器的长度
	//  指定比原容器小，超出部分会删除
	v1.resize(100);
	cout << "v1.size(): " << v1.size() << " v1.capacity(): " << v1.capacity() << endl;

	v1.resize(10);
	cout << "v1.size(): " << v1.size() << " v1.capacity(): " << v1.capacity() << endl;

	v1.shrink_to_fit(); //  降低容量与size匹配，避免浪费内容空间
	cout << "v1.size(): " << v1.size() << " v1.capacity(): " << v1.capacity() << endl;
	v1.reserve(100);
	cout << "v1.size(): " << v1.size() << " v1.capacity(): " << v1.capacity() << endl;

	return 0;
}