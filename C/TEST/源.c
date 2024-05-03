#include <stdio.h>
int main(void)
{
    char a[5] = "123";
    a[0] = '0';
    printf("%s", a);
    return 0;
}