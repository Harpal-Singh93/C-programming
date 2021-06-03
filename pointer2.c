#include <stdio.h>
int main()
{

    int i, j, k;
    printf("enter the size of array: \n");
    scanf("%d", &i);
    int a[i];
    int *ptr=&a;

    printf("enter the elements of array\n");
    for (j = 0; j < i;j++)
    {
        scanf("%d", ptr);//ptr+j
       ptr++;
    }             
          ptr=&a;
    printf("the elements of array you have entered is \n");
    for (k = 0; k < i;k++)
    {

        printf("%d\n", *ptr);//*(ptr+k)
        ptr++;
    }
    printf("thank you");
    return 0;
}