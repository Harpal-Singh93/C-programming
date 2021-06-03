#include<stdio.h>
int swap(int *a3,int *a4);
int main()
{
   int x=5,y=9; 

printf("the values of x is %d and y is %d before swaping \n",x,y);
     swap(&x,&y);
     



     return 0;
 }

 int swap(int *a1,int *a2)
 {
int temp1;

temp1=*a1;
*a1=*a2;
*a2=temp1;
printf("the values of x is %d and y is %d after swaping\n ",*a1,*a2);

 }
