/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* stream;
	stream = fopen("seek.txt", "w");
	fputs("ABCDEFGHIJ", stream);
	fclose(stream);

	stream = fopen("seek.txt", "r");

	fseek(stream, 0, SEEK_SET);
	sprintf(stdout,"%c \n", fgetc(stream));
	fseek(stream, 2, SEEK_SET);
	sprintf(stdout, "%c \n", fgetc(stream));
	fseek(stream, -1, SEEK_END);
	sprintf(stdout, "%c \n", fgetc(stream));
	fseek(stream, -2, SEEK_CUR);
	sprintf(stdout, "%c \n", fgetc(stream));

	fclose(stream);
	return 0;
}
*/