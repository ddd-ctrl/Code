#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    scanf("%d,%d,%d",&x,&y,&z);
    if(x+y<=z||x+z<=y||y+z<=x)
    {
        printf("给定三边不能构成三角形");
    }
    else
    {
        double p=(x+y+z)/2;
        double s=sqrt(p*(p-x)*(p-y)*(p-z));
        printf("%.2f",s);
    }
    return 0;
}