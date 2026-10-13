#include <iostream>
#include "DoubleLinkList.h"
#include <time.h>
using namespace std;

void test() {
	DoubleLinkList dl;
	for (int i = 40; i < 50; i++) {
		dl.pushBack(i);
	}
	dl.print();
	dl.popBack();
	dl.print();
	dl.insertByIndex(6, 12);
	dl.print();
	cout << "dl.getValueByIndex(6): " << dl.getValueByIndex(6) << endl;

	cout << "dl.front(): " << dl.front() << endl;
	cout << "dl.end(): " << dl.end() << endl;

	dl.popFront();
	dl.print();

	dl.popBack();
	dl.print();
	dl.reverse();
	dl.print();

}

int main() {

	test();
	return 0;
}