#include<stdio.h>
int main()
{
    int i,j,k=0;
    scanf("%d",&i);
    for(j=0;i!=0;i/=10)
    {
        j++;
        k+=(i%10);
    }
    printf("%d,%d",j,k);
    return 0;
}