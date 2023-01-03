/*
#include <stdio.h>
void self_service(void);
int main(void)
{
	self_service();
}
void self_service(void)
{
	static int i = 1;
	if (i > 5)
		return;

	printf("셀프서비스 %d 회 \n", i);
	i = i + 1;
	self_service();
}
*/