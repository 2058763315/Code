#include<iostream>
#include<functional>	//	使用内置仿函数需要导入functional
using namespace std;
int main() {

    //  算术仿函数
    int a = 10, b = 3;

    //  T plus<T> 加法仿函数
    cout << "plus<int>{}(a, b): " << plus<int>{}(a, b) << endl;
    //  T minus<T> 减法仿函数
    cout << "minus<int>{}(a, b): " << minus<int>{}(a, b) << endl;
    //  T multiplies<T> 乘法仿函数
    cout << "multiplies<int>{}(a, b): " << multiplies<int>{}(a, b) << endl;
    //  T divides<T> 除法仿函数
    cout << "multiplies<int>{}(a, b): " << divides<int>{}(a, b) << endl;
    //  T negate<T> 取反仿函数
    cout << "negate<int>{}(a): " << negate<int>{}(a) << endl;
    //  T modulus<T> 取模仿函数，返回第一个参数除以第二个参数的余数。
    cout << "modulus<int>{}(a, b): " << modulus<int>{}(a, b) << endl;

    //  关系仿函数
    //  bool equal_to<T> 等于
    cout << "equal_to<int>{}(a, b): " << equal_to<int>{}(a, b) << endl;
    //  bool not_equal_to<T> 不等于
    cout << "not_equal_to<int>{}(a, b): " << not_equal_to<int>{}(a, b) << endl;
    //  bool greater<T> 大于
    cout << "greater<int>{}(a, b): " << greater<int>{}(a, b) << endl;
    //  bool greater_equal<T> 大于等于
    cout << "greater_equal<int>{}(a, b): " << greater_equal<int>{}(a, b) << endl;
    //  bool less<T> 小于
    cout << "less<int>{}(a, b): " << less<int>{}(a, b) << endl;
    //  bool less_equal<T> 小于等于
    cout << "less_equal<int>{}(a, b): " << less_equal<int>{}(a, b) << endl;

    //逻辑仿函数    
    bool b1 = true, b2 = false;
    //  bool logical_and<T> 逻辑与
    cout << "logical_and<bool>{}(b1, b2): " << logical_and<bool>{}(b1, b2) << endl;

    //  bool logical_not<T> 逻辑非
    cout << "logical_not<bool>{}(b1): " << logical_not<bool>{}(b1) << endl;

    //  bool logical_or<T> 逻辑或
    cout << "logical_or<bool>{}(b1, b2): " << logical_or<bool>{}(b1, b2) << endl;


    return 0;
}