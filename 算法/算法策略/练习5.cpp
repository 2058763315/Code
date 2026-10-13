#include <iostream>
using namespace std;

int getLen(int n) {
	if (n == 0) return 0;
	return 1 + getLen(n / 10);
}

int main() {
	cout << "getLen(241256): " << getLen(241256) << endl;
	return 0;
}