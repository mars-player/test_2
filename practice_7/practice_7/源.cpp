#include <stdio.h>
int main(int argc, char* argv[])
{
	int counter, i = 0;
	printf("PRINT COUNTINUE 10 NUMBERS!\n");
	scanf_s("%d", &counter);
	while (i++ < 11)
	{
		printf("%d \n", counter++);
	}
	printf("PROGRAM EXIT!\n");
	return 0;
}