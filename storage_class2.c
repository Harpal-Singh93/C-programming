#include<stdio.h>
#include "temp1.c"
int func1(int a,int b)
{
//int sum;
//sum=a+b;
//printf("\n%d",sum);
//return sum;
}
extern int sum ; // extern tell the compiler that sum is taken from somewhere else so we need not to
int main()      // intiallise sum again in main 
{	
//int sum;
//sum=func1(3,5);
printf("%d\n",sum);


return 0 ;
}