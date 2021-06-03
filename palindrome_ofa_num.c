#include<stdio.h>
int palindrome(int num)
{
int rev=0,temp;
temp=num;
while(num!=0)
{
    
  rev= rev*10+num%10;
  num=num/10;
}
if(rev==temp)
{
return 1;
}
else
{
return 0;
}
}
int main()
{	
    int num,z=0;
printf("enter a number\n");
scanf("%d",&num);
z=palindrome(num);
if(z==1)
{
printf("the number is a palindrome\n");
}
else
{
  printf("the number is  not a palindrome\n");  
    }

return 0 ;
}

