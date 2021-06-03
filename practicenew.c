#include<stdio.h>
int main()
{
    int num;
   
   printf("enter a number to check whether it is postive or not and enter 0 to exit \n ");
   scanf("%d",&num);
   if(num>0)
   {

    printf("the number is positive\n");
   }
   else if (num<0)
   {
    printf("the number is negtive\n");
   }
  else
 {
     printf("the number is zero");
  }
 


return 0 ;
}