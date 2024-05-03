#include<stdio.h>
int main()
{
    int x,y,s;
    scanf("%d %d",&x,&y);
    s=x+y;
    s%=12;
    printf("%d",s);
    return 0;
}