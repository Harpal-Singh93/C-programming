#include<stdio.h>
int main()
{
int num,num1;
  FILE *ptr;
ptr=fopen("hello.txt","r");
fscanf(ptr,"%d",&num);
printf("the num is %d \n",num);

fscanf(ptr,"%d",&num1);
printf("the num1 is %d \n",num1);
fclose(ptr);
     return 0;
 }