#include<stdio.h>
//  编写函数，删除字符串中指定的字符。
void delete_char(char* s, char c);

int main()
{
	char s[] = "sfgawhgkjafgsgg";
	delete_char(s, 'a');
	printf("删除后的字符串：%s\n", s);
	return 0;
}

//void delete_char(char* s, char c)
//{
//	int i, j = 0;
//	for (i = 0; i < strlen(s); i++)
//	{
//		if (s[i] != c)
//		{
//			s[j++] = s[i];
//		}	
//	}
//	s[j] = '\0';
//}
void delete_char(char* s, char c)
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			//  如果是，后面的字符向前移动一个位置
			for (int j = i; j < strlen(s); j++)
			{
				s[j] = s[j+1];
			}
			break;
		}
	}
}
