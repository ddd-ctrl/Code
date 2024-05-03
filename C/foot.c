#include<stdio.h>
int main()
{
int foot,inch,cm;
double m;
scanf("%d",&cm);
m=cm/30.48;
inch=m*12;
foot=m;
inch%=12;
printf("%d %d",foot,inch);
return 0;
}