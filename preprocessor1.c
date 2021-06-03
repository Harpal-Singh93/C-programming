#include<stdio.h>
#define hello 45
#undef hello

int main()
{	
#ifdef hello
printf("the hello is defined\n");
#endif
#ifndef hello 
printf("the hello is not defined\n");
#endif
return 0 ;
}