#include<stdio.h>
#include<stdlib.h>
#define x 14
int main()
{
# if x < 10
printf("the value of pi is wrong\n");
# elif x <20
printf("the value of x is %d\n",x);
# endif
#ifdef x
printf("the value of x is defined\n");
#endif
}
