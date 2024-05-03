#include<stdio.h>
int hehe(int y, int z)
{
    switch (y)
        {
        case 1:
        return z;
        break;
        case 2:
        return 31+z;
        break;
        case 3:
        return 60+z;
        break;
        case 4:
        return 91+z;
        break;
        case 5:
        return 121+z;
        break;
        case 6:
        return 152+z;
        break;
        case 7:
        return 182+z;
        break;
        case 8:
        return 213+z;
        break;
        case 9:
        return 244+z;
        break;
        case 10:
        return 274+z;
        break;
        case 11:
        return 305+z;
        break;
        case 12:
        return 335+z;
        break;
        }
}

int main()
{
    int x,y,z;
    scanf("%d-%d-%d",&x,&y,&z);
    if((x%4==0&&x%100!=0)||x%400==0)
    {
        printf("%d",hehe(y,z));
    }
    else
    {
        printf("%d",hehe(y,z)-1);
    }
    return 0;
}