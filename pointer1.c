#include<stdio.h>
int main()
{   
    int a=7;
        
    int* ptr=&a;

    printf("the value of a is %d \n",a); 
    printf("the value of a's address is %x \n",&a); 
    printf("the value of a is using pointer %d \n",*ptr); 
    printf("the value of a's address using pointer %x \n",ptr);   
    printf(" address of pointer is %x \n",&ptr);
 

    return 0;
}