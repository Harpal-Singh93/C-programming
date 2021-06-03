#include<stdio.h>
int sum(int a);
int main()
{
int num,z;
printf("enter a number upto that number you want a sum: ");
scanf("%d",&num);
z=sum(num);
printf("\nthe sum of number is : %d",z);
return 0;
}
int sum(int a)
{
    if(a!=0)
    {
                
       return a+sum(a-1);
    }
  else
  {
      return 0;
  }
  
}