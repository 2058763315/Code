#include<stdio.h>

/*
2、编写代码，实现输入一个数字，统计这个数字对应的二进制中有几个1
（输入数字10，输出结果2）
*/
void test01()
{
	int m, a, n = 0;
	printf("输入一个数字：");
	scanf("%d", &m);
	for (int i = 1; i <= 8; i++) {
		a =  m & 1;
		m = m >> 1;
		printf("%d", a);
		if (a == 1)
			n++;
	}
	printf("\n有%d个1\n", n);

}
/*
3、编写代码，输入数字m和n，判断m对应的二进制右数第n位是否为1，如果是就输出yes否则输出no
    m = 10, n = 2 输出的结果是yes  10 0000 1010，右数第二位是1 
    m = 20, n = 4 输出的结果是no，20 0001 0100，右数第四位不是1

*/ 
void test02()
{
	int m, n;
	int a[10];
	printf("输入数字m和n：");
	scanf("%d%d", &m, &n);
	for (int i = 1; i <= 8; i++) {
		a[i] = m & 1;
		m = m >> 1;
		printf("%d", a[i]);
	}
	printf("\n");
	if (a[n] == 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}

int main()
{
	test01();
	test02();
	return 0;
}
