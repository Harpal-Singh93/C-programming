#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    float *ptr;
    printf("enter the number upto which you want to store float \n");
    scanf("%d",&n);
    ptr=(float*)calloc(n,sizeof(float));
      
   /*  for(i=0;i<n;i++)
     {
       printf("enter the values for %d \n",i+1); 
       scanf("%f",&ptr[i]);
        }*/
         for(i=0;i<n;i++)
     {
       printf("enter the values for %d  is %f \n",i+1,ptr[i]); 
       
        }

    free(ptr);
     return 0;
 }