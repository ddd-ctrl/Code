#include <stdio.h>

int main()
{
    int i, j;
    printf("%d,",1);
    for (j = 1; j <= 1000; j++)
    {
        int sum = 0;
        for (i = 1; i < j; i++)
        {
            if (j % i == 0)
            {
                sum += i;
            }
        }
        if (sum == j)
        {
            printf("%d", j);
            if(j!=496)
            printf("%c",',');
        }
    }

    return 0;
}