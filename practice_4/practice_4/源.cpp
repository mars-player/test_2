#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[40]; char surname[40];
	int wname, wsurname;
	printf("Please input your first name:");
	scanf("%s", name);
	printf("Please input your last name:");
	scanf("%s", surname);
	wname = printf("%s", name);
	wsurname = printf("%s", surname);
	printf("\n%*d %*d", wname, wname, wsurname, wsurname);
	return 0;
}