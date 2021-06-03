#include<stdio.h>
void func1()
{
static int num;
//printf("by default value of static is 0");
num++;
printf("the num is %d\n",num);
}
int main()
{	
// static stoarge class
func1();
func1();
func1();
func1();


return 0 ;
}