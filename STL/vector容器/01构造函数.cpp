#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1, v2(10);
	cout << "v1.size(): " << v1.size() << endl;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		cout << v1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		v2[i] = i;
		cout << v2[i] << " ";
	}
	cout << endl;
	vector<int> v3(v1.begin(), v1.end());
	for (int i = 0; i < v3.size(); i++) {
		cout << v3[i] << " ";
	}
	cout << endl;
	vector<string> v4(3, "10");
	for (int i = 0; i < v4.size(); i++) {
		cout << v4[i] << " ";
	}
	cout << endl;
	vector<int> v5(v3);
	for (int i = 0; i < v5.size(); i++) {
		cout << v5[i] << " ";
	}
	cout << endl;
	return 0;
}