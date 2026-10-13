#include <stdio.h>

void ex01()
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
    ex01();
    return 0;
}