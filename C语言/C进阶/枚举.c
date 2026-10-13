#include<stdio.h>

//  定义枚举类型
//  枚举类型中各元素不能同名，如果不指定枚元素的起始值，
//  默认从0开始设置元素的值，后面的元素依次加一。
enum weekend { Sun, Mon, Tue , Wed, Thu, Fri, Sat };

int main()
{
	int n;
	printf("输入一个数字：");
	scanf("%d", &n);
	switch (n)
	{
	case Sun:
		printf("星期天\n"); break;
	case Mon:
		printf("星期一\n"); break;
	case Tue:
		printf("星期二\n"); break;
	case Wed:
		printf("星期三\n"); break;
	case Thu:
		printf("星期四\n"); break;
	case Fri:
		printf("星期五\n"); break;
	case Sat:
		printf("星期六\n"); break;
	}
}