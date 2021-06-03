#include<stdio.h>
int main()
{
    char c;
    FILE *ptr;
    ptr=fopen("writefile.txt","r");
    c=fgetc(ptr);
    while(c!=EOF)
    {
      printf("%c",c);
      c=fgetc(ptr);
      }

    fclose(ptr);  
    return 0;
 }