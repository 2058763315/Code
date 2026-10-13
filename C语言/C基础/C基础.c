#include <stdio.h>
#define PI 3.14
void test01()
{
    int a = 10, A = 100;
    printf("a=%d\n", a);
    a = 10 + 20;
    printf("a=%d\n", a);

    const int MAX = 1;
    printf("pi：%.2f\tMAX：%d", PI, MAX);

}
void test02()
{
    int a, b, area;

    printf("输入长：");
    scanf("%d", &a);

    printf("输入宽：");
    scanf("%d", &b);

    area = a * b;

    printf("面积为：%d\n", area);
}
void test03()
{
    int r;
    double area;
    printf("输入半径：");
    scanf("%d", &r);
    area = PI * r * r;
    printf("面积为：%.3f\n", area);
}
void test04()
{
    int i, n;
    int a = 1;
    printf("请输入n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = a * i;
    }
    printf("n的阶乘是%d\n", a);
    return 0;
}
void test05()
{
    short s;
    long long ll = 32768;
    s = ll;
    printf("%d\n", s);

    ll = 25454644545644646;
    printf("%lld\n", ll);

    unsigned short us = 32768;
    printf("%d\n", us);
    printf("%u\n", us);

    float f = 323456789;
    printf("%f\n", f);

    char c1 = 'a';
    unsigned char c2 = 'D';
    printf("%c\t%d\t\t%c\t%d\n", c1, c1, c2, c2);

    s = '1' + 10;
    printf("%c\t%d\n", s, s);
}

void test06()
{
    int i = 0, j = 0, m = 0;
    j = ++i;
    printf("%d\t%d\t\n", i, j);

    m = i++;
    printf("%d\t%d\t\n", i, m);
}

void test07()
{
    int a = 10;
    a += 100;
    printf("a:%d\n", a);
}
void test08()
{
    int a = 1,i;
    for (i = 0; i < 99999; i++)
    {
        a += i;
    }
    printf("a：%d\n", a);
}
void test09()
{
    int price, number, money, back;
    printf("输入商品的价格、数量和所付的钱：");
    scanf("%d %d %d", &price, &number, &money);
    if (money < price * number)
    {
        printf("所付的钱不够\n");
    }
    else if (money == price * number)
    {
        printf("无需找零\n");
    }
    else
    {
        back = money - price * number;
        printf("应找零钱：%d\n", back);
    }
}

int main()
{
    test09();
    return 0;
}
