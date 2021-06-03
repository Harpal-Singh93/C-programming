#include<stdio.h>
int main()
{
  char str[]={"harpal singh"};
  FILE *ptr;
 // ptr=fopen("writefile.txt","r");
  //fgets(str,20,ptr);
  //printf("%s",str);

ptr=fopen("writefile.txt","w");
//fputs(str,ptr);
fputs("hello my name is harpal\n",ptr);


 return 0;
 }