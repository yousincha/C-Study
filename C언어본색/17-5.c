/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* stream1;
	FILE* stream2;
	int input = 0;

	stream1 = fopen("data1.txt", "r");
	stream2 = fopen("data2.txt", "w");

	puts("���Ϸκ��� �����͸� �Է�");

	while (input != EOF)
	{
		input = fgetc(stream1);
		fputc(input, stream2);
		fputc(input, stdout);
	}
	fclose(stream1);
	fclose(stream2);
	return 0;
}
*/