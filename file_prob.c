#include<stdio.h>
int main()
{
    char c;
    FILE *ptr;
    FILE *ptr1;
    ptr1=fopen("w1.txt","w");
    ptr=fopen("writefile.txt","r");
    c=fgetc(ptr);
    while(c!=EOF)
    {
        printf("%c",c);
         fputc(c,ptr1);
      fputc(c,ptr1);
      c=fgetc(ptr);
      
    }

fclose(ptr);

     return 0;
 }