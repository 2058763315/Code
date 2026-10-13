#include<stdio.h>

//  嵌套调用
//  求多个阶乘的和
int f1(int n);

int f2(int n);

int main()
{
	int n;
	printf("请输入数字：");
	scanf("%d", &n);
	printf("f1(%d)：%d\n", n, f1(n));
	return 0;
}

int f1(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += f2(i);
	}
	return sum;
}
int f2(int n)
{
	int jie = 1;
	for (int i = 1; i <= n; i++)
	{
		jie *= i;
	}
	return jie;
}
