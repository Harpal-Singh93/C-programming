#include<stdio.h>
int func(int);
int main()
{
    int num,z;
    printf("Program for checking a number is prime or not\n");
    printf("enter a number\n");
    scanf("%d",&num);	
    
   

 z=func(num); 
 if (z==1)
 {
     printf("the number is not prime");
 }
 else
 {
printf("the number is  prime");

 }
  
return 0 ;
}
 int func(int value)
    {
     for (int i = 2; i < value; i++)
    {
        if (value%i==0)
        {
          return 1;
        }
       else
       {
         return 0;
       }
    }
    }