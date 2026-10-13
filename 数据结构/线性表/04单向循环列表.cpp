#include <iostream>
#include "CircleLinkList.h"
#include <time.h>
using namespace std;

void test() {
	CircleLinkList c;
	//for (int i = 40; i < 50; i++) {
	//	c.pushBack(i);
	//}
	//c.print();
	//c.popBack();
	//c.print();
	//c.insertByIndex(6, 12);
	//c.print();
	//cout << "c.getValueByIndex(6): " << c.getValueByIndex(6) << endl;

	//cout << "c.front(): " << c.front() << endl;
	//cout << "c.end(): " << c.end() << endl;

	//c.popFront();
	//c.print();

	//c.deleteByIndex(6);
	//c.print();

	//c.popBack();
	//c.print();
	for (int i = 1; i <= 8; i++) {
		c.pushBack(i);
	}
	cout << "c.yuesefu(3): " << c.yuesefu(3) << endl;
}

int main() {
	test();
	return 0;

}