#include<stdio.h>

struct Student
{
	int no;
	int age;
	char gender;
	float score;
};

void student_info(struct Student *stu)
{
	printf("学号：%d 年龄：%d 性别：%c 成绩：%.1f\n", stu->no, stu->age, stu->gender, stu->score);
}

int main()
{
	struct Student stu[5] = {
		{ 202601, 20, 'b', 77 },
		{ 202602,	 19, 'g', 80 },
		{ 202603,	 20, 'b', 88 },
		{ 202604,	 18, 'g', 62 },
		{ 202605, 19, 'b', 88 },
	};
	//  定义student结构类型的变量max，并将结构数组第一个元素的值赋给max
	struct Student* p[3] = { NULL };
	int max = stu[0].score;
	//	寻找包含最大成绩成员的元素，当存在多个包含相同的最大成绩的元素时，存储它们的地址。
	for (int i = 0; i < 5; i++) {
		//	如果当前元素stu[i]包含的最大成绩stu[i].score 等于 当前的最大成绩max，则添加当前元素的地址到指针数组p
		if (max == stu[i].score)
		{
			for (int j = 0; j < 3; j++) {
				if (p[j] == NULL) {
					p[j] = stu + i;
					break;
				}
			}
		}
		//	如果当前元素stu[i]包含的最大成绩stu[i].score 大于 当前的最大成绩max，
		//	指针数组p全部置空，且p的第一个元素指向当前元素stu[i]
		else if (max < stu[i].score) {
			max = stu[i].score;
			for (int j = 0; j < 3; j++) p[j] = NULL;
			p[0] = stu + i;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (p[i] != NULL) student_info(p[i]);
	}
	return 0;
}