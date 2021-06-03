#include<stdio.h>
#include<math.h>
int main()
{
    int num,lastdigit,reverse=0,savenum;
printf("program for checking a number is palinedrome or not\n");
printf("enter a number\n");
scanf("%d",&num);
savenum=num;
while (num>0)
{
lastdigit=num%10;
reverse=(reverse*10)+lastdigit;  
num=num/10;  
}
if (reverse==savenum)
{
    printf("The number is palindrome");
}
else
{
   printf("The number is not palindrome"); 
}
return 0 ;
}