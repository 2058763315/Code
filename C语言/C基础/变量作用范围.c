#include<stdio.h>
//  变量的作用范围
//  定义全局变量
int i = 100;

void test()
{
    //  访问全局变量
    printf("i：%d\n", i);
    i += 1;
}

int main()
{
    //  访问全局变量
    printf("i：%d\n", i);
    test();
    printf("i：%d\n", i);  
    int i = 10;  //  定义局部变量，如果局部变量和全局变量重名，局部变量覆盖全局变量。
    printf("i：%d\n", i); //  局部变量i覆盖全局变量i，没有特殊情况，尽量避免使用同名局部变量覆盖全局变量。
    test();  //  test函数中没有覆盖全局变量，使用全局变量。输出101
    return 0;
}