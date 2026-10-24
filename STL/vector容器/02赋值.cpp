#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1(3, 10), v2;

	v2 = v1;
	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}
	cout << endl;
	v2.assign(v1.begin() + 1, v1.end());  //  ¸³ÖµÔËËã·û
	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}
	return 0;
}