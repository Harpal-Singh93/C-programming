#include<stdio.h>
int main()
{
    int num,num1;
    FILE *ptr;
    ptr=fopen("hello1.txt","r");
   if(ptr==NULL)
   {
    printf("file does not exist\n");
   }
else
{
   fscanf(ptr,"%d",&num);
   printf("the first number is %d\n",num);
   fscanf(ptr,"%d",&num1);
   printf("the first number is %d\n",num1);
   fclose(ptr);
}



     return 0;
 }