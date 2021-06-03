#include<stdio.h>
int main()
{

int a;
// checking the number is divisble by 2 or not 
printf("enter the number:  \n");
scanf("%d",&a);
if(a>=18)
{
    printf("you can vote\n");
}
else if(a>10)
{
printf("your are a kid\n");
}
else
{
 printf("grow up kid\n");   
}

return 0;

}