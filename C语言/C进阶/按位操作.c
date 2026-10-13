#include <stdio.h>

void test01()
{
	//  按位操作

	//  按位或 两个数字对应的二进制上的位数字，有1则1。
	//  0001 0010
	//  0001 1001
	printf("%d\n", 18 | 25);
	printf("%d\n", 18 & 25);
	printf("%d\n", 18 ^ 25);

	int number = 18;
	//  1001 0000
	printf("%d\n", number << 3);
	//  0000 0011
	printf("%d\n", number >> 3);

	unsigned char num = 194;
	//  1100 0010		194
	//  0011 1101		61
	num = ~num;
	printf("%d\n", num);
}

void test02()
{
	// a 97：	0110 0001
	// A 65：	0100 0001
	//  用1101 1111
	//  有0则0，给某一位强制写0
	char a[50];
	printf("输入字符串：");
	scanf("%s", &a);
	for (int i = 0; i < strlen(a); i++)
	{
		printf("%c", (a[i] & ~32));
	}
	printf("\n\n");
	//  A 65：	0100 0001
	//  a 97：	0110 0001
	//  用0010 0000
	//  有1则1，给某一位强制写1
	for (int i = 0; i < strlen(a); i++)
	{
		printf("%c", (a[i] | 32));
	}
	printf("\n\n");
	//  大小写互转
	for (int i = 0; i < strlen(a); i++)
	{
		printf("%c", (a[i] ^ 32));
	}
	printf("\n");
}
int main()
{
	//test01();
	test02();
	return 0;
}
