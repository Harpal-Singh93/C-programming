#include <stdio.h>
int sum(int a, int b);
void multiply(int a, int b);
void printdollar();
int division()
{
    int a, b, c;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
        c = a / b;
    printf(" \nthe result of division is :  %d", c);
}

int main2()
{
    int a, b, c, d;
    printf("enter first number : ");
scanf("%d",&a);
printf("enter second number : ");
scanf("%d",&b);

    printf("for sum press 0\n");
    printf("for multiply press 1\n");
    printf("for divide press 2\n");
    printf("for dollars press 3\n");
    scanf("%d\n", &d);
   
if(d==0)
{
c=sum (a,b);
        printf("The value of sum is: %d", c);
}
if(d==1)
{
        multiply(a, b); 
}
if(d==2)
{
    int a;
      a = division();
      printf("%d",a);

}
if(d==3)
{
        printdollar(); 
}

 return 0;
}
int sum(int a, int b)
{
    return a + b;
}
void multiply(int a, int b)
{
    int c;
    c = a * b;
    printf("the multiplication answer is : %d", c);
}
void printdollar()

{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%c\n", '$');
    }
}