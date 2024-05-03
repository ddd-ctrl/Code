#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[20];
	scanf("%s", a);
	int i = 0, j = 0, k = 0;
	for (i = 0; i <= 20; i++)
	{
		if ((int)a[i] == 0)
			break;
		else if ((((int)a[i] >= 65) && ((int)a[i] <= 90)) || (((int)a[i] >= 97) && ((int)a[i] <= 122)))
			j++;
		else if(((int)a[i]>=48)&&((int)a[i]<=57))
		{
			k++;
		}
	}
	printf("%d %d", j, k);
	return 0;
}