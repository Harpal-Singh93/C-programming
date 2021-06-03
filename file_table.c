#include<stdio.h>
int main()
{
    int num;
    FILE *ptr;
    printf("enter the number whose table you want\n");
    scanf("%d",&num);
    ptr=fopen("table.txt","w");
    for(int i=0;i<10;i++)
    {
      fprintf(ptr,"%d * %d =%d\n",num,i+1,num*(i+1));


    }
    fclose(ptr);
    printf("done \n");

     return 0;
 }