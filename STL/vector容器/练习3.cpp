#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void printVector(vector<T>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

vector<int> square(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		v[i] = v[i] * v[i];
	}
	return v;
}
int main() {
	vector<int> nums = { -4, 3, 0, -1, 10 };
	square(nums);
	sort(nums.begin(), nums.end());
	printVector(nums);
	return 0;
}