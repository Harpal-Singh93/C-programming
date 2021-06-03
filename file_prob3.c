#include<stdio.h>
int main()
{
    int a;
    FILE *ptr;
    ptr=fopen("new3.txt","r");
    fscanf(ptr,"%d",&a);
    printf("previous value in file is %d\n",a);
    a=a*2;
     fclose(ptr);


    ptr=fopen("new3.txt","w");
    fprintf(ptr,"the updated value is %d\n",a);
    fclose(ptr);




     return 0;
 }