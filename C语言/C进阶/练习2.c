//  编写convert函数，将一个只包含数字的字符串转换为对应的整数。

#include<stdio.h>
#include<string.h>

int conver(char* n);

int main()
{
	char s[20] = "12345";
	int n = conver(s);
	printf("n：%d\n", n);
	return 0;
}

int conver(char* n)
{
	int num = 0;
	for (int i = 0; i < strlen(n); i++)
	{
		printf("%d\n", n[i] - '0');  //  当前字符的ASCII码减去字符0的ASCII码，得到当前字符对应的int型数字。
		num = num * 10 + n[i] - '0';
	}	
	return num;
}