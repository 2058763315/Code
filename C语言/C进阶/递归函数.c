#include <stdio.h>

long long power(int n)
{
	long long r;
	if (n > 1)
	{
		r = n * power(n - 1);
	}
	else
	{
		r = 1;  //  Âú×ãµİ¹é½áÊøÌõ¼şÊ±Í£Ö¹µİ¹é
	}
	return r;
}

int main()
{
	printf("%lld\n", power(5));
	return 0;
}