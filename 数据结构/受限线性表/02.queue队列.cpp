#include<iostream>
#include"SeqQueue.h"
#include"LinkQueue.h"
using namespace std;

int main() {
	
	//SeqQueue queue;
	LinkQueue queue;
	for (int i = 0; i < 10; i++) queue.push(i);
	cout << "queue.getSize(): " << queue.getSize() << endl;
	cout << "queue.top: " << queue.top() << endl;	//	获取队头
	queue.pop();	//	移除队头
	cout << "queue.getSize(): " << queue.getSize() << endl;
	cout << "queue.top: " << queue.top() << endl;	//	获取队头

	cout << "queue.empty(): " << queue.empty() << endl;
	queue.clear();
	cout << "queue.empty(): " << queue.empty() << endl;
	return 0;
}