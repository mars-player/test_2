#include <stdio.h>
#define FEET_TO_CM 30.48
#define INCH_TO_CM 2.54
int main(void)
{
	int feet;
	float inches, cm;
	printf("CONVERT CM TO INCHES!\n");
	scanf_s("%f", &cm);
	while (cm > 0)
	{
		feet = cm / FEET_TO_CM;
		inches = (cm - feet * FEET_TO_CM) / INCH_TO_CM;
		printf(" %.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
		scanf_s("%f", &cm);
	}
	return 0;
}