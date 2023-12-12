#include <iostream>
#include <stdio.h>

int main()
{
	float num1, num2;

	printf("Enter first number: ");
	scanf_s("%f", &num1);
	printf("Enter second number: ");
	scanf_s("%f", &num2);

	if (num1 > num2)
		printf("%.2f", num1);
	else
		printf("%.2f %.2f", num1, num2);

	return 0;
}