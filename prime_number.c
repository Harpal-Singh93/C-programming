#include <stdio.h>
int main()
{
    int num,a,b=0;
    printf("enter a number to check whether it is prime number or not\n");
    scanf("%d",&num);
    for(a=2;a<num;a++)
    {
      if(num%a==0)
      {
          printf("the number is not prime");
          b=1;
          break;
      }  
      }
if(b==0)
{

    printf("the number is prime\n");
}

    return 0;
}