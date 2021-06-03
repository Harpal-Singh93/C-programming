#include<stdio.h>
int main()
{	
int a=10l;
int *ptr; // it is a wild pointer because it is pointing to any random memory location 
ptr=&a; // ptr is no longer  a wild pointer here 
printf("derefrencing the ptr %d",*ptr);

// so we have to either initialise pointer with null or some address otherwise it is not good for our programms 
return 0 ;
}