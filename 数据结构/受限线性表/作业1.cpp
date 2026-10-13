/*
04.链式栈
    所有的编译器都有检测括号是否匹配的能力，那么如何实现编译器中的括号成对检测？如下的字符串
    1+3+5（std))4*3;
    算法思路：
    1. 从第一个字符开始扫描
    2. 当遇见普通字符时忽略
    3. 当遇见左括号时压入栈中
    4. 当遇见右括号时从栈中弹出栈顶符号，并进行匹配
*/

#include <iostream>
#include "LinkStack.h"
using namespace std;

bool homeWork(string s) {
    LinkStack linkstack;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            linkstack.push('(');
        }
        else if (s[i] == ')') {
            if (linkstack.empty()) {
                return false;
            }
            else {
                linkstack.pop();
            }
        }
    }
    return linkstack.empty();
}

int main() {
    
    string s = "1+3+5（std))4*3";
	cout << "homeWork(s): " << homeWork(s) << endl;;
    return 0;
}