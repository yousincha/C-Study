#include <stdio.h>
void add(int num1, int num2);
void subtract(int num1, int num2);

int main()
{
	int x, z;
	char c;
	void(*pointer)(int, int);

	printf("add �Լ��� �ּ� : %x \n", add);
	printf("subtract �Լ��� �ּ� : %x \n", add);
	printf("�Է�: ");

	scanf_s("%d %c %d", &x, &c, &z);

	if (c=='+')
		pointer = add;

	else if (c == '-')
		pointer = subtract;

	else
		printf("�� ��° �����ڴ� '+' �Ǵ� '-'�� �Է��ϼ���. \n");

	pointer(x, z);

	return 0;

}
void add(int num1, int num2)
{
	int result;
	result = num1 + num2;
	printf("%d + %d = %d �Դϴ�. \n", num1, num2, result);
}
void subtract(int num1, int num2)
{
	int result;
	result = num1 - num2;
	printf("%d - %d = %d �Դϴ�. \n", num1, num2, result);
}