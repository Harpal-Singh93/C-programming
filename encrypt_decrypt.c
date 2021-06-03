#include<stdio.h>
void encrypt(char *ptr)
{
   char c;
   while(*ptr!='\0')
{
     *ptr=*ptr+1;
    ptr++;
}

    }
 void decrypt(char *ptr)
{
   char c;
   while(*ptr!='\0')
{
     *ptr=*ptr-1;
    ptr++;
}

    }   

int main()
{
    char a[]={"hello my name is harpal"};
    char b[]={"ifmmp!nz!obnf!jt!ibsqbm"};
    encrypt(a);
    printf("the encrypted string is %s\n",a);
    decrypt(b);
printf("the decrypted string is %s\n",b);

     return 0;
 }