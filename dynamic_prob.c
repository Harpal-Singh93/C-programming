#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
   int *ptr;
   ptr=(int*)malloc(10*sizeof(int));  
   printf("the table of 7 is upto 10 \n");
for(i=1;i<11;i++)
{
printf("7 * %d = %d\n",i,i*7);
}
ptr=realloc(ptr,15*sizeof(int));
printf("the table of 7 is upto 15 \n");
for(i=1;i<16;i++)
{
printf("7 * %d = %d\n",i,i*7);
}

free(ptr);


     return 0;
 }