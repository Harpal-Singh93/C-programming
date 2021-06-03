#include <stdio.h>
int main()
{
    int a=0,b;
    printf("Enter the number:");
    scanf("%d",&b);
    while (a < b)
    {
        a = a + 1;
        printf("%d\n", a);
    } 
    return 1;
}