#include<stdio.h>
#include<string.h>
union tution
{
    char name[20];
    int roll_no;             // in union we got the highest memory of data type present in union to whole set
    int marks;                // rest it is similar to structure
};

int main()
{
   union tution s1;
   s1.marks=78;
   s1.roll_no=16; 
   strcpy(s1.name,"Ravi");  // in case unions the memory is allocated to only one variable who require most byte
       //if we change the order of these equation output change 
   
   printf("the roll no is is %d\n",s1.roll_no);
   printf("the marks is %d\n",s1.marks);
printf("the name is %s\n",s1.name);
     return 0;
 }