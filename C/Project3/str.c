#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[6][11] = { 0 };
	char b[11] = { 0 };
	int i = 0,j = 0;
	for (i = 0; i < 6; i++)
	{
		gets(a[i]);
	}
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 5-j; i++)
		{
			if (strcmp(a[i], a[i + 1]) > 0)
			{
				strcpy(b, a[i]);
				strcpy(a[i], a[i + 1]);
				strcpy(a[i + 1], b);
			}
		}
	}
	for (i = 0; i < 6; i++)
	{
		printf("%s\n", a[i]);
	}
	return 0;
}