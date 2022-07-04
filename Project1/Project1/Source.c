#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <locale.h>

float res(float a, float b) {
	return a / b;
}

double input_double()
{
	double number;
	bool flag = true;
	while (flag) {
		
		if (scanf("%lf", &number) != 1)
		{
			while (getchar() != '\n');
			printf("You made a mistake. Please retry! ");
		}
		else
		{
			flag = false;
		}
	}
	return number;
}

void main() {
	setlocale(LC_ALL, "eng");
	float a, b, result;
	printf("Ener first and second number: A/B\n");
	printf("A: ");
	a = input_double();
	printf("\nB: ");
	b = input_double();
	result = res(a, b);
	printf("\nA/b = %.2f/%.2f = %.2f", a, b, result);
}