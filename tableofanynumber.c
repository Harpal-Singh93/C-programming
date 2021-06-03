#include<stdio.h>
#include<conio.h>
int main()
{

int a,i;
printf("Enter the number whose table you want:\n");
scanf("%d",&a);
for(i=1;i<11;i++)
{

printf("%d\n",a*i);
}
return 0;
}