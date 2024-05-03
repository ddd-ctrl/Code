#include<stdio.h>
int main()
{
    int i,j=0,k=1,sum;
    scanf("%d",&i);
    for (;i/10>0||i%10>0;i/10)
    {
        sum=0;
        for(j=i/10;j>0;j/=10,k*=10);
        for (j=i;j>0;j/=10,k/=10)
        {
            sum+=j%10*k;
        }
        if(i==sum)
        {
            printf("%c",'Y');
            break;
        };
            if(j==0)
        {   printf("%c",'N');
            break;
        }
    }

    

    return 0;
}
