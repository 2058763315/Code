#include<stdio.h>
#include<ctype.h>
//  字符串的定义与初始化
void test01()
{
	//  字符数组初始化
	char c[10] = { 'c','p','r','g','r','a','m' };
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", c[i]);
	}
	printf("\n%s\n", c);

	//  字符串是以'\0'结束的字符数组
	char c1[10] = { 'c','p','r','g','\0','a','m' };
	printf("%s\n", c1);
	
	//  省略长度，按照赋值计算长度。
	char c2[] = "C Program";
	printf("%s\n", c2);
	printf("sizeof(c2)：%zd\n", sizeof(c2));

	//  指定长度时，数组长度应该大于字符串长度
	//	使用字符串"C Program”初始化时：
	//	c3的最小长度应该是9 + 1 = 10.虽然9也可以编译通过，但是%s输出时会出现乱码，因为没有字符串结束标志’\0’
	char c3[10] = "C Program";
	printf("%s\n", c3);
	printf("sizeof(c3)：%zd\n", sizeof(c3));

	//  计算字符串的长度
	char c4[20] = "Hello World!";
	int len = 0;
	while (c4[len] != '\0') len++;
	printf("len：%d\n", len);

	//  使用strlen计算字符串的长度
	printf("strlen(c4)：%d\n", strlen(c4));
}
/*
	strlen获取字符串长度
	strcpy拷贝字符串
	strcat拼接字符串
	strcmp比较字符串
	toupper(字符)转大写，tolower(字符)转小写
	isupper，islower判断是否为大小写     满足则返回正数，反之返回负数。
*/
//  字符串处理函数
void test02()
{
	//  strlen获取字符串长度
	char s1[20] = "C++";
	printf("strlen(s1)：%d\n", strlen(s1));

	//  字符串拷贝strcpy(目标，源)，确保目标长度足够大(大于源字符串的长度)
	char s2[] = "abcde";
	strcpy(s1, s2);
	printf("s1：%s\n", s1);

	char s3[20] = "Hello ";
	//  拼接字符串strcat(目标，源)，目标长度大于源字符串的长度
	strcat(s3, s2);
	printf("s3拼接后：%s\n", s3);
	
	//  相等返回0，s1>s2则返回正数，反之返回负数。
	char s4[20] = "Hello c";
	char s5[20] = "Hello ";
	strcmp(s4, s5);
	printf("strcmp(s4, s5)：%d\n", strcmp(s4, s5));

	//  转大小写
	char s6[20] = "Ccc Progaram";
	char c = toupper('s');
	printf("%c\n", c);
	for (int i = 0; i < strlen(s6); i++)
	{
		s6[i] = toupper(s6[i]);
	}
	printf("%s\n", s6);

	//  isupper，islower判断是否为大小写
	printf("%d\n", isupper('A'));
	printf("%d\n", islower('b'));
}
void test03()
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
void test04()
{
	int* p1, a = 10;
	float* p2, b = 20.0;
	//  &取地址运算符，获取变量的地址。
	printf("&a：%p &b：%p\n", &a, &b);
	p1 = &a;  //  p1指向a
	p2 = &b;  //  p2指向b
	printf("p1：%p p2：%p\n", p1, p2);
	//  *解引用，访问指针变量指向内存地址的值
	printf("p1：%d p2：%f\n", *p1, *p2);

	*p1 = 1000;
	printf("a：%d b：%f\n", a, b);
	printf("&a：%p &b：%p\n", &a, &b);

	p1 = p1 + 1;
	printf("p1：%p p2：%p\n", p1, p2);
}

void test05()
{
	int* p1, a1[10] = {1,2,3,4,5,6,7,8,9,10};
	//  数组名就是数组第一个元素的地址
	p1 = a1;
	printf("p1：%p\n", p1);
	//  增加4个字节(整型4个字节)
	p1 = p1 + 1;
	printf("p1：%p\n", p1);

	p1 = &a1[9];
	p1 = p1 - 1;
	printf("p1：%p, &a1[9]：%p, *p1：%d\n", p1, &a1[9], *p1);
}
void test06()
{
	//  指针的关系运算符比较的是指针存储的代表地址的16进制数字的大小。
	int* p1, * p2, * p3, a, b;
	//  等、不等运算符常用于判断两个指针是否指向相同的变量或指针是否为空指针。
	p1 = &a;
	p2 = &b;
	p3 = &a;
	printf("p1 == p2：%d\n", p1 == p2);
	printf("p1 == p3：%d\n", p1 == p3);

	p1 = NULL;
	if (p1 == NULL)
	{
		printf("p1是空指针\n");
	}

	int a1[10];
	p1 = &a1[0];
	p2 = &a1[9];
	printf("p1<p2：%d\n", p1 < p2);
}
void test07()
{
	//  指针变量的大小只和编译选项有关，和类型没有关系。
	//  x64选项时，大小为8字节，x86选项时，大小为4字节。
	char* p1 = NULL;
	printf("sizeof(p1)：%zd\n", sizeof(p1));

	short* p2 = NULL;
	printf("sizeof(p2)：%zd\n", sizeof(p2));

	int* p3 = NULL;
	printf("sizeof(p3)：%zd\n", sizeof(p3));
}
//  多级指针
void test08()
{
	int* p1, ** p2, a = 100;
	//  一级指针只能用于指向普通变量
	p1 = &a;
	printf("%p\n", p1);
	//  二级指针只能用于指向一级指针
	p1 = &a;
	p2 = &p1;
	printf("*p2：%p\n", *p2);
	printf("**p2：%d\n", **p2);
	printf("a：%d\n", a);
}
//  指针数组
void test09()
{
	int a = 10, b = 20, c = 30, sum = 0;
	//  元素为指针的数组
	int* p[3] = { &a, &b, &c };
	for (int i = 0; i < 3; i++)
	{
		sum += *p[i];
	}
	printf("sum：%d\n", sum);
}
void test10()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;
	printf("*(p + 1)：%d, a[1]：%d\n", *(p + 1), a[1]);

	p = &a[4];
	//  p[-1]等价于* (p + (-1))，取倒数第二个元素。
	printf("p[-1]：%d\n", p[-1]);
	printf("*(p+(-1))：%d\n", *(p + (-1)));
	p = &a[1];
	//  p[n] 表示指针 + n再取地址，相当于*((a+1)+1))==*(a+2)==a[2]结果为3
	printf("p[1]：%d\n", p[1]);
	printf("*(p+1)：%d\n", *(p + 1));
	printf("*((a + 1) + 1)：%d  a[2]：%d\n", *((a + 1) + 1), a[2]);
}
//  二维指针数组
void test11()
{
	//  二维数组的数组名[行位置]代表数组该行第一个元素的地址
	int a[3][5] = { 1,2,3,4,5,11,12,13,14,15,21,22,23,24,25 };
	printf("a[0]：%p a[1]：%p a[2]：%p\n", a[0], a[1], a[2]);
	printf("&a[0][0]：%p &a[1][0]：%p &a[2][0]：%p\n", &a[0][0], &a[1][0], &a[2][0]);
	//  借助一维指针数组访问二维数组
	int* p[3] = { a[0],a[1],a[2] };

	//  获取第一行第二列的元素
	printf("p[0][1]：%d, a[0][1]：%d\n", p[0][1], a[0][1]);
	printf("*(p[0] + 1)：%d\n",*(p[0] + 1));
	printf("*(*(p+0) + 1)：%d\n", *(*(p + 0)+ 1));
}

void test12()
{
	int a[4][4] = { 1,2,3,4,7,8,9,10,15,16,17,18,24,25,26,27 };
	int* p[4] = { a[0], a[1], a[2] ,a[3] };
	printf("p[3][2]：%d\ta[3][2]：%d\n", p[3][2], a[3][2] );
	printf("p[3][2]：%d\n", *(p[3] + 2));
	printf("p[3][2]：%d\n", *(*(p + 3 ) + 2));
}

int main()
{
	test12();
	return 0;
}