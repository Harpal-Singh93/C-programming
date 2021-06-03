#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int ran_num(){
   int num;
srand(time(NULL));
num =rand()%100+1;
return num;
}

int main()
{
   int hum=0,comp1=0,num;
   char comp,human;
   char name[20];	
printf("welcome to you in ROCK,SCISSOR and PAPER Game\n");
printf("Enter your name : \n");
gets(name);
for(int i=0;i<3;i++)
{
num=ran_num();
if(num<=33)
{
comp='r';
}
else if(num>33 && num<=66)
{
comp='s';
}
else
{
comp='p';
}
printf("\nenter your choice  form 'r','s','p'\n");
scanf("%c",&human);
getchar();
if(human==comp)
{
printf("%s entered %c and computer entered %c\n",name,human,comp);
hum++;
comp1++;
printf(" the %s scores are %d and computer score is %d",name,hum,comp1);
}
else if(human=='s'&& comp=='p')
{
  printf("%s entered 's' and computer entered 'p'\n",name);
  hum++;
printf(" the %s scores are %d and computer score is %d",name,hum,comp1);
}
else if(human=='r'&& comp=='s')
{
  printf("%s entered 'r' and computer entered 's'\n",name);
  hum++;
  printf(" the %s scores are %d and computer score is %d",name,hum,comp1);
}
else if(human=='p'&& comp=='r')
{
  printf("%s entered 'p' and computer entered 'r'\n",name);
  hum++;
  printf(" the %s scores are %d and computer score is %d",name,hum,comp1);
}
else if(human=='p'&& comp=='s')
{
  printf("%s entered 'p' and computer entered 's'\n",name);
  comp1++;
  printf(" the %s scores are %d and computer score is %d",name,hum,comp1);
}
else if(human=='s'&& comp=='r')
{
  printf("%s entered 's' and computer entered 'r'\n",name);
  comp1++;
  printf(" the %s scores are %d and computer score is %d",name,hum,comp1);
}
else if(human=='r'&& comp=='p')
{
  printf("%s entered 'r' and computer entered 'p'\n",name);
  comp1++;
  printf(" the %s scores are %d and computer score is %d",name,hum,comp1);
}
}
if(hum>comp1)
{
printf("\nthe final score of %s is %d and of computer is %d\n",name,hum,comp1);
printf("so %s won the game\n",name);
}
else if(comp1>hum)
{
printf("\nthe final score of %s is %d and of computer is %d\n",name,hum,comp1);
printf("so computer won the game\n");   
}
else
{
   printf("\nthe final score of %s is %d and of computer is %d\n",name,hum,comp1);
   printf("the match is draw\n");
}


return 0 ;
}