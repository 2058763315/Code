/*
05.链式队列
    需求：用队列解决约瑟夫问题
*/
#include <iostream>
#include "LinkQueue.h"
using namespace std;

int homeWork(int n, int m) {
    LinkQueue l;
    for (int i = 1; i <= n; i++) {
        l.push(i);
    }

    while (l.getSize() > 1) {
        for (int i = 1; i < m; i++) {
            int tmp = l.top();
            l.pop();
            l.push(tmp);
        }
        l.pop();
    }
   
    return l.top();
}

int main() {
    
    cout << "homeWork(8, 3): " << homeWork(8, 3) << endl;
    return 0;
}