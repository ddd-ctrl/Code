#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a+b<=2760)
        printf("%.2f",b*0.538);
    else if((a+b<=4800)&&(a<=2760))
        printf("%.2f",((2760-a)*0.538+(a+b-2760)*0.588));
    else if((a+b<=4800)&&(a>2760))
        printf("%.2f",(b*0.588));
    else if((a+b>4800)&&(a<=2760))
        printf("%.2f",((2760-a)*0.538+(4800-2760)*0.588+(a+b-4800)*0.838));
    else if((a+b>4800)&&(a<=4800))
        printf("%.2f",((4800-a)*0.588+(a+b)*0.838));
    else 
        printf("%.2f",(b*0.838));
    return 0;
}