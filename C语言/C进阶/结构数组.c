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
	//  定义student结构类型的变量max，并将结构数组第一个元素的值赋给max
	struct Student max = stu[0];
	for (int i = 0; i < 5; i++)
	{
		//  寻找包含成绩最高的成员的元素
		if (stu[i].score > max.score)
		{
			max = stu[i];
		}
	}
	student_info(max);
	return 0;
}