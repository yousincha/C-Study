/*
#include <stdio.h>

typedef struct score
{
	double math;
	double english;
	double average;
}SCORE;

struct student
{
	int no;
	SCORE s;
};

typedef struct student STUDENT;

int main(void)
{
	STUDENT stu = { 20101323,{90,80,0} };

	stu.s.average = (stu.s.math + stu.s.english) / 2;
	printf("�й�: %d \n", stu.no);
	printf("�������: %lf \n", stu.s.average);
	return 0;
}
*/