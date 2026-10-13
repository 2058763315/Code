#include<stdio.h>

struct Student
{
	int no;
	int age;
	char gender;
	float score;
};

void student_info(struct Student stu)
{
	printf("学号：%d 年龄：%d 性别：%c 成绩：%.1f\n", stu.no, stu.age, stu.gender, stu.score);
}

int main()
{
	struct Student stu[5] = {
		{ 202601, 20, 'b', 77 },
		{ 202602,	 19, 'g', 74 },
		{ 202603,	 20, 'b', 81 },
		{ 202604,	 18, 'g', 62 },
		{ 202605, 19, 'b', 88 },
	};
	struct Student* p = &stu[1];
	printf("(*p).age：%d\tstu[1].age：%d\n", (*p).age, stu[1].age);
	printf("p->age：%d\tstu[1].age：%d\n", p->age, stu[1].age);
	printf("(stu+3)->no：%d\n", (stu + 3)->no);
	return 0;
}