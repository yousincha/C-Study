/*
#include <stdio.h>
#include <time.h>

#define MAX 1000000

int main(void)
{
	register int i;
	clock_t startTime, endTime, result;

	startTime = clock();
	for (i = 0; i <= MAX; i++)
	{
		printf("%d \n", i);
	}
	endTime = clock();

	result = endTime - startTime;
	printf("�������� ���� �ӵ� :  %lf�� \n", (double)result / 1000);

	return 0;
}
*/