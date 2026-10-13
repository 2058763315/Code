#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void test01()
{
    int* p1, a = 10;
    p1 = &a;
    printf("p1：%p\n", p1);
}
void test02()
{
    int n;
    while (1)
    {
        printf("请输入n的值：");
        scanf("%d", &n);
        if (n == 0 || n < 0)
        {
            break;
            printf("输入的数字非法，程序终止\n");
        }
        for (int i = 0; i < n / 2; i++)
        {
            for (int k = 0; k < n / 2 - i; k++)
            {
                printf("  ");
            }
            for (int j = 0; j < i * 2 + 1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (int i = n / 2; i >= 0; i--)
        {
            for (int k = 0; k < n / 2 - i; k++)
            {
                printf("  ");
            }
            for (int j = 0; j < i * 2 + 1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    
}

void test03()
{
    int n;
    printf("请输入n的值：");
    scanf("%d", &n);
    for (int i = 0; i < n / 2 + 1; i++)
    {
        for (int k = 0; k < n / 2 - i; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < n / 2; i++)
    {
        for (int k = 0; k < i + 1; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < (n / 2 - i) * 2 - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
//  函数的定义与使用
int my_sum(int n)  //  函数头，n为形参
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

long long my_jie(int n)
{
    long long jie = 1;
    for (int i = 1; i <= n; i++)
    {
        jie *= i;
    }
    return jie;
}

void test04()
{
    int n;
    while (1)
    {
        printf("请输入n的值：");
        scanf("%d", &n);
        if (n == 0 || n < 0)
        {
            break;
            printf("输入的数字非法，程序终止\n");
        }
        //  n为实参
        printf("sum：%d\n", my_sum(n));
        printf("jie：%lld\n", my_jie(n));
    }

}
void test05()
{
    printf("函数没有返回值时，函数类型要用void。\n");
}
//  数值作为函数参数
void my_swap1(int x,int y)
{
    //  函数调用时，系统为形参分配内存单元并将实参的值传递到形参的单元中。
    int tmp = x;
    x = y;
    y = tmp;                                
    printf("x：%d\ty：%d\n", x, y);
}
//  指针作为函数参数
void my_swap2(int* p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
    printf("x：%d\ty：%d\n", *p1, *p2);
}
void test06()
{
    int m = 1, n = 2;
    printf("原始m：%d\tn：%d\n", m, n);
    my_swap1(m, n);
    printf("m：%d\tn：%d\n", m, n);  //  实参的值没有修改
    my_swap2(&m, &n);
    printf("m：%d\tn：%d\n", m, n);  //  实参的值被修改了
}
//  数组作为参数和返回值
char* test()
{
    char* p = (char*)malloc(sizeof(char) * 10);
    //char a1[] = "Hello!";
    strcpy(p, "Hello!");
    printf("p1：%s\n", p);
    return p;
}

void test07()
{
    int a[5] = { 0 };
    char* p1 = test();
    printf("p1：%s\n", p1);
    free(p1);
}
void test1(char* s)
{
    printf("s：%p\n", s);
    s[0] = 'A';  //  传入的是数组的首地址，可以通过地址修改数组的值。
    s[1] = 'n';
}
void test08()
{
    char a[10] = "World";
    test1(a);
    printf("a：%p\n", a);
    printf("a：%s\n", a);
}

int main()
{
    //test05();
    test08();
    return 0;
}