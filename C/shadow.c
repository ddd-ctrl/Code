#include<stdio.h>
#include<math.h>
int hailun(int x, int y)
{
    double a,b,c,p;
    a=sqrt(x*x+y*y);
    b=sqrt(100*100+100*100);
    c=sqrt((100-x)*(100-x)+(100-y)*(100-y));
    p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
    int x,y,s;
    scanf("%d %d",&x,&y);
    s=hailun(x,y);
    printf("%d",s);
    return 0;
}