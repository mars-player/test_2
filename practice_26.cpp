#include <stdio.h>
int main(void)
{
	double first[8], second[8];
	for (int i = 0; i < 8; i++)
    {
    	scanf("%lf", &first[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		double sum = 0;
		for (int j = 0; j <= i; j++)
		{
			sum = sum + first[j];
		}
		second[i] = sum;
	}
	/* ʹ��Ƕ��ѭ���������һ�������ǰN���
	 * Ҳ����ʹ�õ�ѭ�����������£�
	 * second[0] = first[0];
	 * for (int i = 1; i < 8; i++){
	 *    second[i] = second[i-1] + first[i];
	 * }
	 * */
	printf("All the data of two array:\n");
	printf("First Array:");
	for (int i = 0; i < 8; i++)
	    printf("%12lf. ", first[i]);
	printf("\nSecond Array:");
	for (int i = 0; i < 8; i++)
	    printf("%12lf. ", second[i]);
	printf("\nDone!\n");
	return 0;
}
