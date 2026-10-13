#include<stdio.h>

int func(int n)
{
	static int f = 1;
	f *= n;
	return f;
}

int main()
{
	printf("func(2)£º%d\n", func(2));
	printf("func(4)£º%d\n", func(4));
	printf("func(3)£º%d\n", func(3));
	return 0;
}