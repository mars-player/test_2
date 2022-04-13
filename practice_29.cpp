#include <stdio.h>
#include <string.h>
int main(void)
{
	float chuckie = 100;
	int year = 0;
	do{
		chuckie = chuckie + chuckie * 0.08;
		chuckie -= 10;
		year++;
		printf("%f\n", chuckie);
	}while ( chuckie > 9); //若账户余额小于9万美元，则下一年将会被全部支取 
	printf("%d years later. Chuckie's account %f \n", year, chuckie);
	printf("%d years later. Chuckie's account is null\n", ++year);
	return 0;
}
