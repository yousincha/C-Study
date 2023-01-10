/*
#include <stdio.h>

#define MAX 100
#define PI 3.14


int main(void)
{
	int a = 3;
	printf("변경 전: %d, %lf \n", MAX, PI);

	#undef MAX
	#undef PI

	#define MAX 1000
	#define PI 3.141592
	printf("변경 후: %d, %lf \n", MAX, PI);

	return 0;
}
*/