#include <iostream>
using namespace std;

class Student {
//private:

public:
	int id;
	int age;
	int score;
	Student(int id, int age, int score) {
		this->id = id;
		this->age = age;
		this->score = score;
	}
	void show() {
		cout << id << " " << age << " " << score << endl;
	}
};

void Bubblesort(Student* stu[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (stu[j]->score > stu[j + 1]->score) {
				swap(stu[j], stu[j + 1]);
			}
		}
	}
}

Student* binarySearch(Student* score[], int value, int left, int right) {
	if (left > right) return nullptr;
	int mid = left + (right - left) / 2;
	if (value == score[mid]->score) {
		return score[mid];
	}
	else if (value < score[mid]->score) {
		return binarySearch(score, value, left , mid - 1);
	}
	else if (value > score[mid]->score) {
		return binarySearch(score, value, mid + 1, right);
	}
	return nullptr;
}

int main() {
	Student stu[] = {
		Student(12, 45, 78),
		Student(3, 67, 91),
		Student(28, 54, 83),
		Student(19, 36, 62),
		Student(7, 41, 99),
	};
	int len = sizeof(stu) / sizeof(Student);
	for (int i = 0; i < len; i++) stu[i].show();

	Student* score[5];
	for (int i = 0; i < len; i++) score[i] = stu + i;
	Bubblesort(score, len);
	cout << "-----------" << endl;
	for (int i = 0; i < len; i++) score[i]->show();

	Student* a = binarySearch(score, 99, 0, len - 1);
	cout << "-----------" << endl;
	a->show();
	return 0;
}