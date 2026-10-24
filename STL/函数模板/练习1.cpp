#include <iostream>
using namespace std;

template<typename T>
T arr_max(T arr[], int len) {
    T tmp = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] > tmp) {
            tmp = arr[i];
        }
    }
    return tmp;
}

int main(){
    char c[] = { 'a', 'x', 'c', 'd' };
    cout <<"sizeof(c): " << sizeof(c) << endl;
    cout << "sizeof(char): " << sizeof(char) << endl;
    cout << arr_max(c, sizeof(c) / sizeof(char)) << endl;

    int i[] = { 0, 10, 9, 8 }; 
    cout << "sizeof(i): " << sizeof(i) << endl;
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << arr_max(i, sizeof(i) / sizeof(int)) << endl;

    //  bool用于存储关系运算或逻辑运算的结果，取值只有true和flase
    bool b[] = { true, false, false };
    //  bool和整型之间可以转换，非0数字转换为true，0转换为flase
    //  true转换为1，false转换为0
    cout << arr_max(b, sizeof(b) / sizeof(bool)) << endl;
    return 0;
}