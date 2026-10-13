#include<stdio.h>

void test01()
{
	int a = 10, b = 20;
	if (a < b)
	{
		a = b;
	}
	printf("较大的数：%d\n", a);
}

int main()
{
	test01();
	return 0;
}