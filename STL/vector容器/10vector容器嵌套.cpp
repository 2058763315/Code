#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	vector<vector<int>> v;

	vector<int> v1 = { 37, 20, 2, 10 };
	vector<int> v2 = { 28, 6, 5, 46 };
	vector<int> v3 = { 30, 19, 14, 38 };
	vector<int> v4 = { 29, 16, 23, 7 };
	//  动态数组中可以嵌套动态数组，v中的元素全部是动态数组
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	vector<int>& tmp = v[1];
	cout << "v[1][1]: " << v[1][1] << endl;
	return 0;
}