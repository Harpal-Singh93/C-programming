#include<stdio.h>
int fibo(int n);
int fibonacci(int num)
{
if(num<=1)
{
    return num;
}
else 
{
return fibonacci(num-1)+fibonacci(num-2);

}
}

int main()

{
    int num,a,b;
printf("enter the number upto you want fibonacci series : ");
scanf("%d",&num);


b=fibo(num);
printf("fibonacci series you want is using iterative approach here : %d\n",b);
a=fibonacci(num);
printf("fibonacci series you want is using recursive here : %d\n",a);
return 0;
}

int fibo(int n)
{
int a=0,b=1,i;

for(i=0;i<n;i++)
{
b=a+b;
a=b-a;

}
return a;
}