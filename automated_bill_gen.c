#include<stdio.h>
int main()
{
    char name[20],item[30],outlet[30];

    printf("enter the customer name\n");
    gets(name);
    printf("enter the item\n");
    gets(item);
     printf("enter the name of company\n");
     gets(outlet);
  FILE *ptr;
  ptr=fopen("hello.txt","w");
  fprintf(ptr,"Thanks  %s  for purchasing  %s  from our outlet  %s .\n",name,item,outlet);
  fprintf(ptr,"please visit our %s for any kind of goods.we plan to serve you again soon\n ",outlet);
  fclose(ptr);
  
  
  return 0 ;
}