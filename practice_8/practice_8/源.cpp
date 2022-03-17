#include <stdio.h>
#define WEEK_PER_DAY 7
int main()
{
	int weeks, input;
	printf("input the days( <=0 to quit):");
	scanf_s("%d", &input);
	while (input > 0) {
		printf("%d days are %d weeks, %d days\n", input, input / WEEK_PER_DAY, input % WEEK_PER_DAY);
		scanf_s("%d", &input);
	}
	return 0;

}