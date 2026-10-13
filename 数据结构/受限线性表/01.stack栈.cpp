#include<iostream>
#include"SeqStack.h"
#include"LinkStack.h"
using namespace std;

int main() {
	//SeqStack stack;
	LinkStack stack;
	for (int i = 0; i < 10; i++) stack.push(i);
	cout << "stack.getSize(): " << stack.getSize() << endl;
	cout << "stack.top: " << stack.top() << endl;
	stack.pop();
	cout << "stack.getSize(): " << stack.getSize() << endl;
	cout << "stack.top: " << stack.top() << endl;

	cout << "stack.empty(): " << stack.empty() << endl;
	stack.clear();
	cout << "stack.empty(): " << stack.empty() << endl;
	return 0;
}