#include <iostream>

using namespace std;

void mySwap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void mySwap(float& a, float& b) {
	float tmp = a;
	a = b;
	b = tmp;
}
int main() {
	int a1 = 10, b1 = 20;
	float a2 = 10.1, b2 = 20.2;

	mySwap(a1, b1);
	cout << a1 << '\t' << b1 << endl;
	mySwap(a2, b2);
	cout << a2 << '\t' << b2 << endl;
	return 0;
}