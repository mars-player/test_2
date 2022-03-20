#include <stdio.h>
int main(void)
{
	int i, j;
	for (i = 2; i <= 100; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0 && i != 2)
				break;
		}
		if (j>= i - 1)
			printf("%d ", i);
		
	}
	return 0;
}