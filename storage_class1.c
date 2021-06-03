#include<stdio.h>
int sum;// global variable  it comes under external class
int func1(int a,int b)
{
int sum; // default storage class is auto we can also write here (auto int sum )
sum=a+b;
return sum;
}

int main()
{	
func1(3,5);
printf("the sum is %d",sum);// we cannot access sum here because sum is local variable of func1
//its scope is only in func1
//its by default initial value is garbage

return 0 ;
}