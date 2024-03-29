#include <stdio.h>
int Temperatures(double fahrenheit);
int main(void)
{
	double input;
	printf("This program convert fahrenheit to celsius and kelvin.\n");
	printf("Enter a fahrenheit to start:");
	while (scanf_s("%lf", &input) == 1)
	{
		Temperatures(input);
		printf("Enter next fashrenheit!(q to quit)");

	}
	printf("Done!\n");
	return 0;
}

int Temperatures(double fahrenheit)
{
	const double F_TO_C = 32.0;
	const double C_TO_K = 273.16l;
	double celsius, kelvin;
	celsius = 5.0 / 9.0 * (fahrenheit - F_TO_C);
	kelvin = celsius + C_TO_K;
	printf("%.2f. fahrenheit, equal %.2f celsius, and %.2fkelvin\n", fahrenheit, celsius, kelvin);
	return 0;
}