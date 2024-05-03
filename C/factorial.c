#include<stdio.h>
int main()
{
    long int i=1,factorial=1,sum=0;
    for(i=1;i<=10;i++)
    {
        factorial=factorial*i;
        sum=sum+factorial;
    }
    printf("%d",sum);
    return 0;
}