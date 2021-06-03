#include<stdio.h>
int main()
{
    char c;
   FILE *ptr;
// program for writing a character by character in file 
ptr=fopen("new.txt","w");
fputc('c',ptr);
fputc('c',ptr);
fputc('c',ptr);

  /* /// program for getting a character read by one and one character
   ptr=fopen("writefile.txt","r");
   c=fgetc(ptr);
   printf("the character is %c\n",c);
   printf("the character is %c\n",fgetc(ptr));
   printf("the character is %c\n",fgetc(ptr));
*/


 }