#include<stdio.h>
//  递归方法
int fei(int n)
{
	int a;
	if (n > 1)
	{
		a = fei(n - 1) + fei(n - 2);
	}
	else if(n == 1)
	{
		a = 1;
	}
	else if(n == 0)
	{
		a = 0;
	}
	return a;
}
void test01()
{
	int n;
	//printf("输入数字：");
	//scanf("%d", &n);
	//printf("第%d项为%d", n, fei(n));
	for (int i = 0; i <= 40; i++)
	{
		printf("第%d项为%d\n", i, fei(i));
	}
}
//  数组方法
void test02()
{
	int a[100],n = 15;
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];

	}
	for (int i = 0; i <= n; i++)
	{
		printf("第%d项为%d\n", i, a[i]);
	}
}


int main()
{

	test02();
	return 0;
}