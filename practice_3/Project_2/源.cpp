#include <stdio.h>
int main(void)
{
	float speed, size, time;
	printf("Please input the net speed(megabits per second):");
	scanf_s("%f", &speed);
	printf("Please input the file size(megabits):");
	scanf_s("%f", &size);
	time = size * 8 / speed;
	printf("At %.2f megabits per scond, a file of %.2f megabits downloads in %.2f seconds.", speed, size, time);
	return 0;
}