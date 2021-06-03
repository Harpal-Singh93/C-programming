#include<stdio.h>
void slice(char *st,int m ,int n)
{
int i=0;
while((i+m)<n)
{
st[i]=st[i+m-1];
i++;

}
st[i]='\0';


}

int main()
{
  int m,n;
char st[30];
printf("enter a string\n");
scanf("%s",st);
printf("enter the starting number where you want to cut the string\n");
scanf("%d",&m);
printf("enter the ending number where you want to cut the string\n");
scanf("%d",&n);
slice(st,m,n);
printf("the cut string is \n %s",st);
   return 0;
 }