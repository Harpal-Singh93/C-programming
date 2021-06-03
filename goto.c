#include<stdio.h>
int main()
{
int a,b,i;
for(i=0;i<4;i++)
{
printf("enter the first number : ");
scanf("%d",&a);
printf("\nenter the second number: ");
scanf("%d",&b);
if(a>b)
{

goto end;
}
}
end :
return 0;
}