#include<stdio.h>

void ex01()
{
	char s[] = "abcABC1234";
	printf("%d\n", strlen(s));
	char c;
	for (int i = 0; i < strlen(s) / 2; i++)
	{
		c = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = c;
	}
	printf("%s", s);
}

int main()
{
	ex01();
	return 0;
}
