#include<stdio.h>
int main()
{
    int i,j,k,sum=0;
    for(i=100;i<=500;i++)
    {
        j=i;
        for(sum=0;(j%10>0)||(j/10>0);j/=10)
        {
            k=j%10;
            sum=sum+k*k*k;
        }
        if(sum==i)
        printf(" %d",i);
    }
    return 0;
}