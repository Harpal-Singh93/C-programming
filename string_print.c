#include<stdio.h>
#include<string.h>
int main()
{
   char arr[35];
   char arr1[35];
   int i=0;
   char c;
   printf("enter the first string \n ");
   scanf("%s",&arr);
   printf("enter another string  character by character\n");
 
   while(c!='\n')
   { 
       fflush(stdin);
       scanf("%c",&c);
     arr1[i]=c;
     i++;
    }
    arr1[i]='\0';
    printf("the first string is %s\n",arr);
    printf("the first string is %s\n",arr1);

     return 0;
 }