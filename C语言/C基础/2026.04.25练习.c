#include<stdio.h>
#include<time.h>
void ex01()
{
	int n; 
	printf("输入数字：");
	scanf("%d", &n);
	for (int i = 1; i < n; i += 2)
	{
		for (int k = 0; k <= n - i; k++)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i = n; i >= 0; i -= 2)
	{
		for (int k = 0; k <= n - i; k++)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

}

void ex02()
{
	int n;
	while (1)
	{
		printf("输入数字：");
		scanf("%d", &n);
		Sleep(2000);
		if (n == 0 || n < 0)
		{
			printf("终止\n");
			break;
		}
		for (int i = 0; i < n / 2; i++)
		{
			for (int k = 0; k < n / 2 - i; k++)
			{
				printf("  ");
			}
			for (int j = 0; j < i * 2 + 1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		for (int i = n / 2; i >= 0; i--)
		{
			for (int k = 0; k < n / 2 - i; k++)
			{
				printf("  ");
			}
			for (int j = 0; j < i * 2 + 1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	
}

int main()
{
	ex02();
	return 0;
}