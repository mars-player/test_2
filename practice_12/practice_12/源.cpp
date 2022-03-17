#include <stdio.h>
int main(void)
{
	int first, second;
	printf("This program computers moduli.\n");
	printf("Enter an integer to server as the second operand:");
	scanf_s("%d", &second);
	printf("Now enter the first operand:");
	scanf_s("%d", &first);
	while (first > 0)
	{
		printf("%d %% %d is %d\n", first, second, first % second);
		scanf_s("%d", &first);
	}
	printf("Done!\n");
	return 0;

}