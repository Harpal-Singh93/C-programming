#include<stdio.h>
int main()
{	
int a=5;
float b=2.456;
void *ptr;
ptr=&a;
printf("the value of a is %d\n",*((int*)ptr));
ptr=&b;
printf("the value of a is %f\n",*((float*)ptr));



return 0 ;
}