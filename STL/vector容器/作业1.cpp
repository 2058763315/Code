/*
作业1.给你一个的整数vector动态数组 nums，编写一个函数，返回每个数字的平方组成的新动态数组，要求按升序排序。
示例1：
输入：nums = [-4,3,0,-1,10]
输出：[16,9,0,1,100]
排序后，数组变为 [0,1,9,16,100]
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template<typename T>
void printVector(vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
//  方法一，下标遍历
//vector<int> square(vector<int>& v) {
//    for (int i = 0; i < v.size(); i++) {
//        v[i] = v[i] * v[i];
//    }
//    return v;
//}
//  方法二，迭代器遍历
vector<int> square(vector<int>& v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        *it = *it * *it;
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