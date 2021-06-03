#include<stdio.h>
//int a=5;

void func1()
{
static int a3=5;// the program take this value in its first call only that is main role of static variable
printf("the value of a3 is  %d\n",a3);//if we dont give any value to static variable its intiallise to 0
a3++;// any we have to give only constant value to static variable
}

int main()
{
    int a1=5;
/*    
int a=3; // if we have same name local and global variable than precedence is given to local variable
printf("%d",a);
*/
func1();
func1();
func1();



     return 0;
 }