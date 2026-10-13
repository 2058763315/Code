void ex01()
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
		printf("应纳税%.2f\n", (money - 5000) * 0.05);
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
void ex02()
{
	long long c = 299762458;
	printf("地球到太阳之间的距离为%lld米\n", c * 500);
}
/*
	设置一个四位数，计算这四位数的各位数字之和。
	输入 1234 ， 得到 10
*/
void ex03()
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

int main()
{
	ex01();

	return 0;
}