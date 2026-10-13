#include<stdio.h>

struct Student 
{
	int no;
	int age;
	char gender;
	float score;
} s3;

void student_info(struct Student stu)
{
	printf("学号：%d 年龄：%d 性别：%c 成绩：%.1f\n", stu.no, stu.age, stu.gender, stu.score);
}

int main()
{
	printf("%zd\n", sizeof(struct Student));
	struct Student s1;
	s1.age = 19;
	s1.no = 202601;
	s1.gender = 'b';
	s1.score = 99.5;
	struct Student s2 = { 202602 ,18 , 'g',97 };
	student_info(s1);
	student_info(s2);

	s3.age = 18;
	s3.no = 202603;
	s3.gender = 'b';
	s3.score = 90.5;
	student_info(s3);
	return 0;
}