#include<stdio.h>

void test01()
{
	int a = 4, b = 6;
	printf("a > b ：%d\n", a > b);
	printf("a < b ：%d\n", a > b);
	printf("(b - a) < (a + 1) ：%d", (b - a) < (a + 1));
}

void test02()
{
	/*条件运算符
	格式:表达式1?表达式2:表达式3;
	当表达式1的结果为1，取表达式2的值，否则取表达式3的值
	*/
	int a = 10, b = 20, max, min;
	max = a > b ? a : b;
	//a>b的结果是0，取表达式3的值。返回b的值。
	min = a < b ? a : b;
	//a>b的结果是1，取表达式2的值。返回a的值。
	printf("max：%d\tmin：%d\n", max, min);
}
/*逗号运算符
	逗号表达式有最低优先级
	逗号运算符，从左到右计算各个表达式，取最右边表达式的值作为整个表达式的结果。
*/
void test03()
{
	int a = 10, b = 20, c = 30;
	a = (b, c);   //先计算a = b，结果为a == 20, 再返回c。
	printf("a：%d\n", a);
}

void test04()
{
	int m = 90, n = 80;
	printf("%d\n", (m < n) ? (n - m) : (m + n));

	printf("(m<n)&&(m-n)<(m+n)：%d\n", (m < n) && (m - n) < (m + n));
	// m<n结果为0，不计算表达式(m - n) < (++m)，a的结果为90
	printf("(m<n)&&(m-n)<(++m)：%d\n", (m < n) && (m - n) < (++m));
	printf("%d\n", m);
	// m>n结果为1，不计算表达式(m - n) < (++m)，a的结果为91
	printf("(m>n)&&(m-n)<(++m)：%d\n", (m > n) && (m - n) < (++m));
	printf("%d\n", m);
}

void test05()
{
	int age;
	printf("请输入年龄：");
	scanf("%d", &age);
	if (age < 18)
	{
		printf("写作业\n");
	}
	else if (age < 30)
	{
		printf("拧螺丝\n");
	}
	else if (age < 40)
	{
		printf("上班，带孩子\n");
	}
	else if (age < 65)
	{
		printf("摸鱼\n");
	}
	else   //以上条件都不满足
	{
		printf("养老\n");
	}
}
void test06()
{
	int score;
	printf("请输入成绩：");
	scanf("%d", &score);

	if (score >= 0 && score <= 100)
	{
		if (score < 60)
		{
			printf("E级\n");
		}
		else if (score < 70)
		{
			printf("D级\n");
		}
		else if (score < 80)
		{
			printf("C级\n");
		}
		else if (score < 90)
		{
			printf("B级\n");
		}
		else if (score <= 100)
		{
			printf("A级\n");
		}
	}
	else
	{
		printf("输入不合法\n");
	}
}
void test07()
{
	int n;
	printf("请选择：");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("春");
		break;
	case 2:
		printf("夏");
		break;
	case 3:
		printf("秋");
		break;
	case 4:
		printf("冬");
		break;
	default:
		printf("输入错误");
	}
}
void test08()
{
	int score;
	printf("请输入成绩：");
	scanf("%d", &score);
	if (score >= 0 && score <= 100)
	{
		switch (score / 10)
		{
		case 10:
		case 9:
			printf("A级\n"); break;
		case 8:
			printf("B级\n"); break;
		case 7:
			printf("C级\n"); break;
		default:
			printf("E级\n");
		}
	}
	else
	{
		printf("输入不合法\n");
	}
}
void ex01()
{
	int year, month; 
	printf("输入年份和月份：");
	scanf("%d %d", &year, &month);
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31天\n"); break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30天\n"); break;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			printf("29天\n");
		}
		else {
			printf("28天\n");
		}
		break;
	default:
		printf("不合法\n"); break;
	}
}
void ex02()
{
	float money;
	printf("输入收入：");
	scanf("%f", &money);
	if (money < 0)
	{
		printf("错误\n");
		return 1;
	}
	if (money <= 5000)
	{
		printf("不纳税\n");
	}
	else if (money <= 10000)
	{
		printf("应纳税%.2f\n",(money-5000)*0.05);
	}
	else if (money <= 20000)
	{
		printf("应纳税%.2f\n", (money - 10000) * 0.1 + 5000 * 0.05);
	}
	else if (money <= 30000)
	{
		printf("应纳税%.2f\n", (money - 20000) * 0.15 + 10000 * 0.1 + 5000 * 0.05);
	}
	else
	{
		printf("应纳税%.2f\n", (money - 30000) * 0.2 + 10000 * 0.2 + 10000 * 0.1 + 5000 * 0.05);
	}
}
/*
	已知光速为299792458米/秒，太阳光从太阳到地球的时间为8分20秒，计算太阳到地球之间的距离
*/
void ex03()
{
	long long c = 299762458;
	printf("地球到太阳之间的距离为%lld米\n", c * 500);
}
/*
	设置一个四位数，计算这四位数的各位数字之和。
	输入 1234 ， 得到 10
*/
void ex04()
{
	int a, sum;
	printf("请输入一个4位数：");
	scanf("%d", &a);
	if (a <= 9999 && a >= 1000)
	{
		sum = a / 1000 + a % 1000 / 100 + a % 100 / 10 + a % 10;
		printf("四位数的各位数字之和为%d\n", sum);
	}
	else 
	{
		printf("数字不合法\n");
	}
}
void ex05()
{
	float salary, tax = 0;
	printf("请输入你的薪水：");
	scanf("%f", &salary);
	int flag = ((salary > 5000) + (salary > 10000) + (salary > 20000) + (salary > 30000)); 
	switch (flag)
	{
	case 4:
		tax += (salary - 30000) * 0.2;
		salary = 30000;
	case 3:
		tax += (salary - 20000) * 0.15;
		salary = 20000;
	case 2:
		tax += (salary - 10000) * 0.1;
		salary = 10000;
	case 1:
		tax += (salary - 5000) * 0.05;
		salary = 5000;
		break;
	default:
		tax = 0;
		break;
	}
	printf("应该缴纳税款%.2f元\n", tax);
}
void ex06()
{
	int i, j, k;
	for (i = 1; i < 5; i++) {
		for (j = 1; j < 5; j++) {
			for (k = 1; k < 5; k++) {
				if (i != k && i != j && j != k)
				{
					printf("%d %d %d\n", i, j, k);
				}
			}
		}
	}
}
#include<stdio.h>
void ex07()
{
	int x, y, z, t;
	printf("输入三个数字：");
	scanf("%d%d%d", &x, &y, &z);
	if (x > y)
	{
		t = x; x = y; y = t;
	}
	if (x > z)
	{
		t = x; x = z; z = t;
	}
	if (y > z)
	{
		t = y; y = z; z = t;
	}
	printf("从小到大排序：%d %d %d\n", x, y, z);
}

void ex08()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
int main()
{
	//test08();
	ex08();
	
	return 0;
}