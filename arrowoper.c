#include<stdio.h>
#include<string.h>
typedef struct student
{
int marks;
char name[20];
}stu;

int main()
{
   stu s1;
  strcpy(s1.name,"harpal");
   s1.marks=55;
   stu *ptr;
   ptr=&s1;
   printf("the name is %s\n",ptr->name);
   printf("the marks are %d\n",(*ptr).marks);
   
   return 0;
 }