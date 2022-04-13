#include <stdio.h>
#include <string.h> 
int main(void)
{
	int rabnud = 5;
	int weeks = 1;
	while (rabnud < 150)
	{
		printf("At %d weeks , Rabnud has %4d friends \n", weeks, rabnud);
		rabnud = 2 * (rabnud - weeks++);
	}
	printf("%d weeks has %4d friends \n", weeks, rabnud);
	printf("\nDone!\n");
	return 0;
}
