#include <stdio.h>
typedef struct
{
	int data[100];
	int length;
}Set;

void cset(Set& s, int a[], int n)
{
	for (int i = 0; i < n; i++)
		s.data[i] = a[i];
	s.length = n;
}

void dispset(Set s)
{
	for (int i = 0; i < s.length; i++)
		printf("%d ", s.data[i]);
	printf("\n");
}

int inset(Set s, int e)
{
	for (int i = 0; i < s.length; i++)
		if (s.data[i] == e)
			return 1;
}

void add(Set s1, Set s2, Set& s3)
{
	int i;
	for (i = 0; i < s1.length; i++)
		s3.data[i] = s1.data[i];
	s3.length = s1.length;
	for (i = 0; i < s2.length; i++)
		if (!inset(s1, s2.data[i]))
		{
			s3.data[s3.length] = s2.data[i];
			s3.length++;
		}
}

void sub(Set s1, Set s2, Set& s3)
{
	s3.length = 0;
	for (int i = 0; i < s1.length; i++)
	{
		if (!inset(s2, s1.data[i]))
		{
			s3.data[s3.length] = s1.data[i];
			s3.length++;
		}
	}
}

void intersection(Set s1, Set s2, Set& s3)
{
	s3.length = 0;
	for (int i = 0; i < s1.length; i++)
		if (inset(s2, s1.data[i]))
		{
			s3.data[s3.length] = s1.data[i];
			s3.length++;
		}
}

int main()
{
	int a[] = { 1,4,2,6,8 };
	int b[] = { 2,5,3,6 };
	Set s1, s2, s3;
	cset(s1, a, 5);
	cset(s2, b, 4);
	printf("���� s1 :"); dispset(s1);
	printf("���� s2 :"); dispset(s2);
	add(s1, s2, s3);
	printf("���� s1 �� s2 �Ĳ���:"); dispset(s3);
	sub(s1, s2, s3);
	printf("���� s1 �� s2 �Ĳ:"); dispset(s3);
	intersection(s1, s2, s3);
	printf("���� s1 �� s2 �Ľ���:"); dispset(s3);
	getchar();



}

