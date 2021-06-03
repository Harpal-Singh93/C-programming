#include<stdio.h>
int main()
{
    int *ptr,a=4,**ptr1;
    ptr=&a;
    ptr1=&ptr;
   
    printf("the value of a is %d\n",a);
    printf("the value of a using pointer to  pointer %d\n",**ptr1);


     return 0;
 }