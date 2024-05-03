#include<stdio.h>
int main()
{
    char input;
    scanf("%c", &input);
    if(input<97||input>122)
    {
        printf("No");
    }
    else
    {
        if(input+5>122)
        {
            printf("%c",input+5-122+96);
        }
        else
        {
            printf("%c",input+5);
        }
    }
    return 0;
}