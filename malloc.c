#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(30*sizeof(int));
    if (ptr==NULL)
    {
        printf("memory does not intialised \n");
    }
     free(ptr);
   return 0;
 }