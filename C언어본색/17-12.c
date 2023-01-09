/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct score
{
	char name[20];
	double kor, eng, total;
};
typedef struct score STUDENT;

int main(void)
{
	STUDENT s, ss;
	FILE* stream;

	printf("1.이름 입력 : ");
	fscanf(stdin, "%s", s.name);

	printf("2.국어점수, 영어점수 입력:");
	fscanf(stdin, " %lf %lf", &s.kor, &s.eng);
	s.total = s.kor + s.eng;

	stream = fopen("student.dat", "wb");
	fwrite(&s, sizeof(s), 1, stream);
	fclose(stream);

	stream = fopen("student.dat", "rb");
	fread(&ss, sizeof(s), 1, stream);
	fprintf(stdout, "%s %.2lf %.2lf %.2lf \n", ss.name, ss.kor, ss.eng, ss.total);

	fclose(stream);

	return 0;
}
*/