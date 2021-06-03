#include<stdio.h>
#include<stdlib.h>
int* danglingfunc()
{
int a=10,b=20,sum;
sum=a+b;
return &sum;

}
int main()
{	
// it is caused by 3 cases 
//case 1 is deallocation of memory
int*ptr;
ptr=(int*)malloc(5*sizeof(int));
ptr[0]=1;
ptr[1]=2;
ptr[2]=3;
ptr[3]=14;
free(ptr);// now ptr is a dangling pointer from here
//printf("%d",ptr[0]);

//case 2: Function returning local variable address

int *ptr1;

ptr1=danglingfunc();  // ptr 1 is a dangling pointer here
//printf("%d",*ptr1);   // now ptr1 is a dangling pointer because the scope of a in that function ends
// and ptr1 is pointing to old memory location of a and where a is not present at that time 


//case 3 : if a variable goes out of scope

int *ptr2;
{

    int i=45;
    ptr2=&i;
}
//here the i goes out of scope and ptr 2 now becomes a dangling pointer

return 0 ;
}