#include <stdio.h>
int main(void)
{
	int start, end;
	printf("Please enter the start number:");
	scanf_s("%d", &start);
	printf("Please enter the end number:");
	scanf_s("%d", &end);
	printf("	Ori:	Square:	Cubic:\n");
	for (int i = start; i <= end; i++)
	{
		printf("%6d,%10d,%10d", i, i * i, i * i * i);
		printf("\n");
	}
	return 0;
}