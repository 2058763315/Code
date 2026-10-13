#include <stdio.h>
//  定义联合类型
union MyData
{
    int i;
    char c;
    float f;
};

int main()
{
    union MyData d;
    d.i = 97;
    printf("d.c：%c\td.f：%f\n", d.c, d.f);
    d.c = 'A';
    printf("d.i：%d\td.f：%f\n", d.i, d.f);

    printf("sizeof(union MyData)：%zd\n", sizeof(union MyData));
    return 0;
}


