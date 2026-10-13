#include<stdio.h>

void test01()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}
}

void test02()
{
	int sum = 0, n = 0;
	printf("输入一个大于1的数：");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("从1到%d的和为%d\n",n,sum);
}
//  输出1到50之间能被3整除的数
void test03()
{
	for (int i = 1; i < 51; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
//  步长不一定是一，也不一定是正数
void test04()
{
	for (int i = 3; i < 51; i += 3)
	{
			printf("%d ", i);
	}
	printf("\n");
	for (int i = 48; i > 0; i -= 3)
	{
		printf("%d ", i);
	}
	printf("\n");
}
//  计算100以内偶数之和
void test05()
{
	int sum = 0;
	for (int i = 0; i < 100; i += 2)
	{
		sum += i;
	}
	printf("100以内偶数之和为%d\n",sum);
}
//  while循环
void test06()
{
	int m = 1,sum = 0;
	while (m <= 10)
	{
		sum += m;
		m++;
	}
	printf("sum=%d\n", sum);
}
//  while语句求一个整数n的阶乘
void test07()
{
	int n, i = 1, jie = 1;
	printf("输入一个整数：");
	scanf("%d", &n);
	while (i < n+1)
	{
		jie *=  i;
		i++;
		/*
		jie *=  i++;相当于如下，输出为6
				jie *=  i;
				i++;
		jie *=  ++i;相当于如下，输出为24
				i++;
				jie *=  i;
		*/
	}
	printf("%d的阶乘为%d\n", n, jie);
}
//  do while语句求1到100的和
void test08()
{
	int m = 1, sum = 0;
	do {
		sum += m;
		m++;	
		printf("%d\t", m);
	} while (m<=100);
	printf("\n");
	printf("sum=%d\n", sum);
}
void test09()
{
	//  break结束整个循环
	for (int i = 1; i <= 10; i++)
	{
		if (i % 3 == 0)
		{
			break;
		}
		printf("%d ", i);
	}
	printf("\n");
	//  break结束本轮循环
	for (int i = 1; i <= 10; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		printf("%d ", i);
	}
}

void test10()
{
	for (int i = 1; i < 10; i++)  // 控制行
	{
		// 第一步：前面打印空格（左空白）
		for (int k = 1; k < i; k++)
		{
			printf("        "); 
		}

		// 第二步：后面打印乘法式（右三角）
		for (int j = i; j < 10; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);
		}

		printf("\n");
	}
}
void test11()
{
	int a[40];
	printf("%zd\n", sizeof(a));   //  10个int型数组元素占用40字节内容空间
	//  使用下标访问数组元素
	for (int i = 0; i < 10; i++)
	{
		a[i] = i * 10;
		printf("%d\n", a[i]);  //  使用数组时注意不要越界。
	}
}
//  数组初始化
void test12()
{
	int a1[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", a1[i]);
	}
	printf("\n");
	int a2[5] = { 1,2,3 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", a2[i]);
	}
	char a3[1000] = { "ssd,sss"};
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", a3[i]);
	}
}
void test13()
{
	int a[5], sum = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("输入成绩：");
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("平均成绩为：%d\n", sum / 5);
}

void test14()
{
	int a[3][4], sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] = i * i + j * j;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
//  二维数组初始化
void test15() 
{
	printf("分行初始化部分元素：\n");
	int a[3][4] = { {1,2,3},{2,5,9},{5,15,64,24} };
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("顺序初始化：\n");
	int b[3][4] = { 1,2,3,5,2,5,9,11,5,15,64,24 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	
}
void test16()
{
	int a[2][3] = { 1,2,3,4,5,6 }, b[2][3] = { 7,8,9,10,11,12 };
	printf("相加之后结果为：\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
}

void test17()
{
	int a[4][4] = {
		{10,2,5,32},
		{15,23,9,8},
		{15,2,1,5},
		{ 4,5,8,22 }
	};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	int max = a[0][0];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	printf("max：%d\n", max);
}
void test18()
{
	int a, b, max = 0;
	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			max = i;
		}
	}
	printf("最大公约数为：%d\n", max);
}
void test19()
{
	int t1 = 1, t2 = 1, n, next;
	printf("需要几项：");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d\t", t1);
		next = t1 + t2;
		t1 = t2;
		t2 = next;
	}
}
void test20()
{
	int a, b, c;
	for (int i = 100; i < 10000; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100 % 10;
		if (i == (a * a * a + b * b * b + c * c * c))
		{
			printf("%d\t", i);
		}
	}
}
void test21()
{
	long ge, shi, qian, wan, x;
	printf("请输入 5 位数字：");
	scanf("%ld", &x);
	wan = x / 10000;           /*分解出万位*/
	qian = x / 1000 % 10 ;   /*分解出千位*/
	shi = x / 10 % 10 ;         /*分解出十位*/
	ge = x % 10;                  /*分解出个位*/
	if (ge == wan && shi == qian) { /*个位等于万位并且十位等于千位*/
		printf("这是回文数\n");
	}
	else {
		printf("这不是回文数\n");
	}
}
void test22()
{
	int a, b, c, d, e ,i;
	scanf("%d", &i);
	a = i % 10;  //  个位
	b = i / 10 % 10;
	c = i / 100 % 10;
	d = i / 1000 % 10;
	e = i / 10000 % 10;
	printf("%d\t%d\t%d\t%d\t%d\t", a, b, c, d, e);
}
void test23()
{
	int i, j, n = 0;

	for (i = 2; i < 1000; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{ 
			printf("%d\t", i);
			n++;
			if (n % 10 == 0)
				printf("\n");
		}
	}
}
void test24()
{
	int a[10] = { 1,5,9,12,28,36,45,48,56,68 };
	int n;
	printf("请输入要插入的数字：");
	scanf("%d", &n);

	// 找到要插入的位置 i
	int i;
	for (i = 0; i < 10; i++)
	{
		if (n < a[i])
		{
			break;
		}
	}

	if (i < 10)
	{
		// 从后往前挪，腾出位置
		for (int j = 9; j > i; j--)
		{
			a[j] = a[j - 1];
		}
		// 插入数字
		a[i] = n;
	}
	else
	{
		printf("数字太大，无法插入\n");
	}
	// 输出结果
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
}
int main()
{
	//test01();
	test22(); 
	return 0;
}
