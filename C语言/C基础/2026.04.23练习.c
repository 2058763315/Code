#include<stdio.h>
/*  
	从键盘上输入若干个整数（每次输入一个）
	如果是偶数输出“是偶数”；
	如果是奇数输出“是奇数”；
	如果是0，则结束循环。
*/
void ex01()
{
	int n = 0;
	
	while (1)
	{
		printf("请输入：");
		scanf("%d", &n);
		if (n == 0)
			break;
		if (n % 2 == 0)
		{
			printf("是偶数\n");
		}
		else 
		{
			printf("是奇数\n");
		}
	}
}

void ex02()
{
	float a[5][2];
	for (int i = 0; i < 5; i++)
	{
			printf("输入第%d个同学的语文和数学成绩：", i+1);
			scanf("%f%f", &a[i][0], &a[i][1]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("第%d个同学的平均成绩为%.2f\n", i+1, (a[i][0] + a[i][1]) / 2);
	}
}




int main()
{
	ex02();
	return 0;
}