/*
#include <stdio.h>
void add(double num1, double num2);
int main()
{
	double x = 3.1, y = 5.1;
	void(*pointer)(double, double);

	printf("add �Լ��� �ּ�: %x \n", add);
	printf("�Լ� �������� �ּ�: %x \n", &pointer);

	pointer = add;
	pointer(x, y);

	return 0;
}

void add(double num1, double num2)
{
	double result;
	result = num1 + num2;
	printf("%lf + %lf = %lf�Դϴ�. \n", num1, num2, result);
}
*/