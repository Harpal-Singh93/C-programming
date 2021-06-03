#include<stdio.h>
int main()
{
    int a=51;
FILE *ptr;
ptr=fopen("writefile.txt","w");
fprintf(ptr,"%d",a);
fprintf(ptr,"\nthanks for using fprintf\n");
fclose(ptr);


    return 0;
}