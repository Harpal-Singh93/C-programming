#include<stdio.h>
#include<string.h>
void change(char *str)
{
int i,n=0,index=0;
for(i=0;i<strlen(str);i++)
{
if(str[i]=='<')
{
    n=1;
    continue;
}else if(str[i]=='>')
{
    n=0;
continue;
}
else if(n==0)
{
str[index]=str[i];
index++;
}

}
str[index]='\0';
// removing the front trailing 
while(str[0]==' ')
{
for(int i=0;i<strlen(str);i++)
{
str[i]=str[i+1];
}
}

// removing the trailing from back
while(str[(strlen(str))-1] ==' ')
{ 
str[(strlen(str))-1]='\0';
}

}


int main()
{
char str[]={"<h1>       this is coding <h1/>    "};

change(str);
printf("~~%s~~\n",str);
  return 0;
}