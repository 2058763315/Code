/*
作业2.给定一个动态数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
示例1
输入: nums = [0,1,0,3,12]
输出: [1,3,12,0,0]
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
vector<int> move(vector<int>& v) {
    int i = 0, n = 0;
    while (i < v.size()) {
        if (v[i] == 0) {
            v.erase(v.begin() + i);
            n++;
        }
        else {
            i++;
        }
    }
    for (int i = 0; i < n; i++) {
        v.insert(v.end(), 0);
    }
    return v;
}
//  方法二，迭代器遍历
//vector<int> move(vector<int>& v) {
//    int n = 0;
//    vector<int>::iterator it = v.begin();
//    while (it != v.end()) {
//        if (*it == 0) {
//            it = v.erase(it);
//            n++;
//        }
//        else {
//            it++;
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        v.insert(v.end(), 0);
//    }
//    return v;
//}


int main() {
    vector<int> nums = { 0, 1, 0, 3, 12 };
    move(nums);
    printVector(nums);
    return 0;
}