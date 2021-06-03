#include<stdio.h>
int factorial(int num)
{
if(num==0||num==1)
{

    return 1;
}
else
{
    return num*(factorial(num-1));
}

}

int main()

{
    int num,a;
printf("enter a number whose factorial you want : ");
scanf("%d",&num);
a=factorial(num);
printf("factorial of the number you want is : %d",a);
return 0;
}

