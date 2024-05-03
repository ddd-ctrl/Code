#include<stdio.h>
int main()
{
    int score[10],sum=0;
    int i,j,k;
    double average;
    for(i=0;i<10;i++)
    scanf("%d",&score[i]);
    for(k=0;k<7;k++)
    {
        for(i=0;i<9-k;i++)
        {
            if(score[i]>score[i+1])
            {
                j=score[i];
                score[i]=score[i+1];
                score[i+1]=j;
            }
        }
    }
    for(i=1;i<9;i++)
    sum += score[i];
    average=sum/8.0;
    printf("%.3f",average);
    return 0;
}