#include<stdio.h>
int fact(int num)
{
if (num==0||num==1)
{
    return 1;
}
else
{
    return num*fact(num-1);
}


}
int main()
{	
int num,factorial;
printf("enter a number whose factorial you want\n");
scanf("%d",&num);
factorial=fact(num);
printf("the factorial is %d\n",factorial);
return 0 ;
}