#include <stdio.h>
#include <stdlib.h>
 //  常量指针
void test01()
{
    int a = 10, b = 10;
    const int C = 1000;
    const int* p1 = &a;
    //  常量指针指向的内存地址的内容不可修改。
    printf("*p1：%d\n", *p1);
    //  *p1 = 100;
    printf("*p1：%d\n", *p1);

    p1 = &b;
    const int *p2 = &C;
    //  *p2 = 1;
    printf("*C：%d\n", C);
}
//  指针常量
void test02()
{
    //  指针常量要在定义时初始化
    int a = 10;
    //  指针常量定义后，指向不能改变
    int* const p2 = &a;
    //  指针常量指向的内存地址的内容可以修改
    *p2 = 1000;
    printf("*p2：%d\ta：%d\n", *p2, a);
}
//  常量指针常量
void test03()
{
    //  可以定义常量指针常量，这种指针既不能修改指向，也不能修改指向的内容。
    int a = 10, b = 20;
    const int* const p3 = &a;
    //  *p3 = &b;
    //  *p3 = 100;
}
//  内存管理
void test04()
{
    //  申请单个元素存储空间
    float* p1 = (float*)malloc(sizeof(float));
    *p1 = 10.1;
    printf("*p1：%f\n", *p1);
    //  释放动态分配的单个内存空间
    free(p1);

    //  申请多个连续的存储空间
    int n = 10;
    int *p2 = (int*)malloc(sizeof(int)*n);  //  申请n个的整型空间
    //  释放动态分配的连续内存空间
    free(p2);
}
int main()
{
    test04();
    return 0;
}

