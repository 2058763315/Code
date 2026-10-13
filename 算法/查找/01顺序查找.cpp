#include <iostream>
using namespace std;

void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int seqSearch(int a[], int len, int value) {
	for (int i = 0; i < len; i++) {
		if(a[i] == value) return i;
	}
	return -1;
}

int main() {
	int a[] = { 8,9,1,7,2,3,5,4,6,0 };
	int len = sizeof(a) / sizeof(int);
	print(a, len);
	cout << "seqSearch(a, len, 5): " << seqSearch(a, len, 5) << endl;
	cout << "seqSearch(a, len, 11): " << seqSearch(a, len, 11) << endl;
	return 0;
}