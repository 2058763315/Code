#include<stdio.h>

typedef struct Student
{
	int no;
	int age;
	char gender;
	float score;
} s;  //  定义结构同时定义结构的简洁名称

void student_info(struct Student stu)
{
	printf("学号：%d 年龄：%d 性别：%c 成绩：%.1f\n", stu.no, stu.age, stu.gender, stu.score);
}

int main()
{
	s s2 = { 202602 ,18 , 'g',97 };
	student_info(s2);
	//  标识符s作为Student的变量，s作为student别名的作用被覆盖
	struct Student s = { 202601 ,19 , 'g',95 };
	//  s作为student别名的作用被覆盖后，不能再作为student的别名使用
	//  s s3 = { 202602 ,18 , 'g',97 };
	return 0;
}