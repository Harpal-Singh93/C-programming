#include<stdio.h>
int main ()
{    int i,j,k;
     printf("enter the size of your array\n");
     scanf("%d",&j);
     int a[j];
     printf("\nenter the data in your array:");  
     for(k=0;k<j;k++)
     {

      scanf("%d",&a[k]);

     }
    
    for(i=0;i<j;i++)
{
     printf("\nthe elements of the a [%d] is this %d\n",i,a[i]);
}
return 0;
}