#include<stdio.h>

inline int add(int a, int b);  //  定义内联函数，函数声明和定义分开时，inline写在函数声明前。

int main()
{
	printf("add(1, 2)：%d\n", add(1, 2));   //  优化后，内联函数被嵌入主调函数中。
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

