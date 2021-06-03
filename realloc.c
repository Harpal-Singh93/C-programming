#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
     int *ptr;
     ptr=(int *) malloc(6 * sizeof(int));
for(i=0;i<6;i++)
{
     printf("enter the elements for %d\n",i+1);
    scanf("%d",&ptr[i]);
}
for(i=0;i<6;i++)
{
     printf(" the elements entered are %d  is  %d\n",i+1,ptr[i]);
   
}
// reallocate
ptr=realloc(ptr,10*sizeof(int));
for(i=0;i<10;i++)
{
     printf("enter the elements for %d\n",i+1);
    scanf("%d",&ptr[i]);
}
for(i=0;i<10;i++)
{
     printf(" the elements entered are %d  is  %d\n",i+1,ptr[i]);
   
}

free(ptr);

     return 0;
 }