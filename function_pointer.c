int sum(int a,int b)
{

return a+b;

}
#include<stdio.h>
int main()
{	
printf("the value of sum is %d\n",sum(8,9));// testing of function 
int (*fptr)(int,int);// declaring a function pointer
fptr=&sum;//creating a function pointer
int d=(*fptr)(4,3);// dereferencing a function pointer
printf("the value of d is  %d\n",d);


return 0 ;
}