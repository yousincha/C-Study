/*
#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int i = 0;
	int* p = (int*)calloc(sizeof(int), sizeof(int));

	if (p == NULL)
		printf("�� ������ ���� �޸� �Ҵ� ���� \n");

	for (i = 0; i < 4; i++)
	{
		p[i] = i;
		printf("�ּ�: %x \n", &p[i]);
		printf("  ��: %d \n", p[i]);
	}
	free(p);
	p = NULL;

	return 0;

}
*/