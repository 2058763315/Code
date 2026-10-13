#include<stdio.h>

int my_add(int x, int y)
{
	return x + y;
}

int my_minus(int x, int y)
{
	return x - y;
}

int test(int x, int y, int (*fp)(int, int))
{
	x += 20;
	y += 20;
	return fp(x, y);
}

int main()
{
	printf("my_add：%p\n", my_add);
	printf("my_minus：%p\n", my_minus);

	//  定义函数指针，用于指向具有两个int型参数，并返回int型参数的函数。
	int (*fp)(int, int);
	//  函数指针fp指向函数my_add
	fp = my_add;
	//  使用函数指针调用函数
	printf("fp(20, 10)：%d\n", fp(20, 10));

	printf("test(20, 10, my_add)：%d\n", test(20, 10, my_add));
	printf("test(20, 10, my_minus)：%d\n", test(20, 10, my_minus));
	return 0;
}