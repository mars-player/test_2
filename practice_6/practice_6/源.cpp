#include <stdio.h>
#define MIN_PER_HOU 60
int main(int argc, char* argv[])
{
	int hours, minutes, input;
	printf("CONVERT MINUTES TO HOURS!\n");
	printf("PLEASE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT):");
	scanf_s("%d", &input);
	while (input > 0)
	{
		printf("CONVERT TO %d HOUR AND %d MINUTES\n", input / MIN_PER_HOU, input % MIN_PER_HOU);
		scanf_s("%d", &input);
	}
	printf("PROGRAM EXIT!\n");

}