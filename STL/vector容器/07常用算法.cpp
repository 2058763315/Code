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
bool cap(int a, int b) {
	return a > b;
}

int main() {
	int arr[] = { 37, 20, 2, 10, 25, 26, 8, 31, 49, 13 };
	//  排序sort
	vector<int> v1;
	int len = sizeof(arr) / sizeof(arr[0]);
	v1.assign(arr, arr + len);
	printVector(v1);
	//  sort(begin, end)对begin和end区间元素进行排序
	//  从小到大排序
	sort(v1.begin(), v1.end());
	printVector(v1);
	//  sort(begin, end, func)对begin和end区间元素进行排序,用func函数指定排序规则
	//  根据cap结果，从大到小排序
	sort(v1.begin(), v1.end(), cap);
	printVector(v1);

	//  反转倒置reverse
	//  reverse(begin, end)对begin和end区间元素进行反转倒置
	reverse(v1.begin(), v1.end());
	printVector(v1);
	reverse(v1.begin() + 2, v1.end() - 2);
	printVector(v1);
	string s = "Hello";
	reverse(s.begin() + 1, s.end());  //  反转字符串
	cout << "s: " << s << endl;

	//  find(begin, end, element)在begin和end区间，查找元素element
	auto it = find(v1.begin(), v1.end(), 26);

	sort(it, v1.end());
	printVector(v1);
	int v1len = v1.size();
	vector<int> v2(v1len);
	//  拷贝v1的最后2个元素到v2的最后2个元素位置

	copy(v1.begin() + 3, v1.end(), v2.begin());
	printVector(v2);
	//  拷贝v1的最后3个元素到v2的最后3个元素位置
	copy(v1.end() - 3, v1.end(), v2.end() - 1);
	printVector(v2);

	return 0;
}