/*
#include <stdio.h>

struct score
{
	double math;
	double english;
	double total;
};

struct student
{
	int no;
	struct score s;
};
int main(void)
{
	struct student stu;

	stu.no = 20230106;
	stu.s.math = 90;
	stu.s.english = 80;
	stu.s.total = stu.s.math+stu.s.english;

	printf("�й�: %d \n", stu.no);
	printf("����: %lf\n", stu.s.total);
	return 0;
}

*/