/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* stream;
	char name[10];
	int kor, eng, total;

	printf("1. 이름입력: ");
	fscanf(stdin, "%s", name);

	printf("2. 국어점수, 영어 점수 입력:");
	fscanf_s(stdin, "%d %d",&kor,&eng);
	total = kor + eng;

	stream = fopen("data3.txt", "w");
	fprintf(stream, "%s %d %d %d \n", name, kor, eng, total);
	fclose(stream);

	return 0;
}
*/