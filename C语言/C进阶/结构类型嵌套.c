#include<stdio.h>
#include<stdlib.h>

struct Date
{
	int year;
	int month;
	int day;
};

struct Student
{
	int no;
	int age;
	char gender;
	float score;
	struct Date date;
	//  struct Student stu;   //  不允许嵌套自身
	struct Student* stu; //  允许嵌套自身指针作为成员变量
};

void student_info(struct Student stu)
{
	printf("学号：%d\t年龄：%d\t性别：%c\t成绩：%.1f\t生日：%d-%d-%d\n", stu.no, stu.age, stu.gender, stu.score, stu.date.year, stu.date.month, stu.date.day);
}

//  从CSV文件读取所有学生数据并打印
void read_students_from_csv(const char* filename) {
	FILE* fp = fopen(filename, "r");
	if (fp == NULL) {
		printf("文件打开失败！\n");
		return;
	}

	char line[100];
	// 跳过第一行表头
	fgets(line, sizeof(line), fp);

	// 循环读取每一行数据
	while (fgets(line, sizeof(line), fp) != NULL) {
		struct Student s = { 0 };
		// 按 CSV 格式解析
		sscanf(line, "%d,%d,%c,%f,%d,%d,%d", &s.no, &s.age, &s.gender, &s.score, &s.date.year, &s.date.month, &s.date.day);
		student_info(s); // 打印
	}
	fclose(fp);
}

int main()
{
	//struct Student s1;
	//s1.age = 19;
	//s1.no = 202601;
	//s1.gender = 'b';
	//s1.score = 99.5;
	//s1.date.year = 2007;
	//s1.date.month= 2;
	//s1.date.day = 24;
	//struct Student s2 = { 202602 ,18 , 'g',97 };
	//student_info(s1);
	//student_info(s2);
	read_students_from_csv("students.csv");
	return 0;
}