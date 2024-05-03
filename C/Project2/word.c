#include<stdio.h>
#include<string.h>
int main()
{
	char a[21] = { 0 };
	gets(a);
	int i = 0, j = 0;
	for (i = 1; i < 20; i++)
	{
		if ((int)a[i]!=32&&(int)a[i-1]==32)
			j++;

	}
	printf("%d", j + 1);
	return 0;
}