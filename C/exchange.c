#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n],i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            j=a[i+1];
            k=i+1;
        }
    }
    i=a[0];
    a[0]=a[k];
    a[k]=i;
    printf("%d",a[0]);
    for(i=1;i<n;i++)
    printf(" %d",a[i]);
    return 0;
}