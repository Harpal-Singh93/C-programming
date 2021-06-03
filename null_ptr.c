#include<stdio.h>
int main()
{
    int a=34;	
    int *ptr;
    //int *ptr=NULL;
    //ptr=&a; 
//printf("the address of pointer is %d\n",ptr); // ptr not equal to address of a
printf("the address of pointer is %d\n",ptr);
//printf("trying to print the value at ptr %d",*ptr); // this line will give no output as we cannot dereference a null pointer
printf("trying to print the value at ptr %d\n",*ptr);
// if we dont intiallise a pointer it may point to any value
if(ptr!=NULL)
{
printf("the address of pointer is %d\n",ptr);

}
else
{
   printf("this pointer is a null pointer we cannot dereferenced it\n"); 
}

return 0 ;
}