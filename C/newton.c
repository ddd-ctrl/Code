#include<stdio.h>
#include<math.h>
int main()
{
    double a=0,b=1,c=0;
    scanf("%lf",&a);
        c=(b+a/b)/2;
    for(;fabs(c-b)>1e-6;)
    {
        b=c;
        c=(b+a/b)/2;
    }
    printf("%.2f",c);
    return 0;
}