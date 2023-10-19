#include<stdio.h>
#include<stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};

int main()
{
	int num_students;
	struct Student* s;

	printf("학생 수 입력:");
	scanf_s("%d", &num_students);
	s = (struct Student*)malloc(num_students * sizeof(struct Student));

	for (int i = 0; i < num_students; i++) {
		printf("학생 # %d-%d 학번 입력 :", num_students, i + 1);
		scanf_s("%d", &s[i].sno);

		printf("학생 # %d-%d 이름 입력 :", num_students, i+1);
		scanf_s("%s", &s[i].name,10);

		printf("학생 # %d-%d 성적 입력 :", num_students, i + 1);
		scanf_s("%d", &s[i].score);
	}
	int sum = 0;
	for (int i = 0; i < num_students; i++) {
		sum += s[i].score;
	}
	printf("총점은 = %.2f", ((float)sum / num_students));
	free(s);
	return 0;
}