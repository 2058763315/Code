#include <iostream>
#include "DynamicArray.h"
using namespace std;
int main() {
	DynamicArray da(5);
	da.print();
	cout << da.getSize() << endl;
	cout << da.getCapacity() << endl;
	for (int i = 0; i < 10; i++) {
		da.pushBack(i);
		cout << "da.getCapacity(): " << da.getCapacity() << " da.size(): " << da.getSize() << endl;
	}
	da.print();
	da.insertByIndex(3, 15);
	da.print();
	cout << da.getValueByIndex(-3) << endl;
	cout << da.front() << endl;
	cout << da.end() << endl;
	da.popBack();
	da.print();
	da.deleteByIndex(9);
	da.print();
	return 0;
}