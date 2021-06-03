#include<stdio.h>
#include<string.h>
typedef struct student{
int id;
int roll;
char a[20];
}std;


int main()
{
 std s1,s2;// here we can also use struct student s1,s2; both are valid
 s1.id=10;
 s2.id=11;
 s1.roll=1;
 s2.roll=2;
 strcpy(s1.a,"harpal");
 strcpy(s2.a,"singh");
 printf("the name is %s\n",s1.a);
printf("the id is %d \n",s1.id );
printf("the roll number is %d\n",s1.roll);

 printf("the name is %s\n",s2.a);
 printf("the id is %d \n",s2.id );
 printf("the roll number is %d\n",s2.roll);
            // main use of typedef in structure we dont need to write a complete name of structure again and again 




     
      /*typedef int* pointer;
      pointer a,b;  // now all the variables are pointer 
      int c=10;
      a=&c;
      b=&c;
      printf("%d\n",*a);
      printf("%d\n",b);
      */


     /* typedef int i;    typedef is used for giving alternative name to a given data type 
      i a=1;
      printf("%d",a);    
     */




     return 0;
 }