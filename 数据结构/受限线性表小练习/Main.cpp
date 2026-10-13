#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    SeqStack sk;
    for (int i = 1; i <= 10; i++) {
        sk.push(i);
    }
    //  (rand() % 20) + 1
    cout << sk.top() << endl;
    while (sk.getSize() > 0) {
        cout << sk.top() << " ";
        sk.pop();
    }
    cout << endl;
    cout << "-------------------" << endl;
    LinkStack lk;
    for (int i = 1; i <= 10; i++) {
        lk.push(i);
    }
    cout << lk.top() << endl;
    while (lk.getSize() > 0) {
        cout << lk.top() << " ";
        lk.pop();
    }
    cout << endl;
    return 0;
}