#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char you,char comp)
{

    if(you==comp)
    {

       return 0;
    }
if(you=='g'&& comp=='s')
{
    return 1;
}
else if(you=='s'&& comp=='g')
{
    return -1;
}
if(you=='w'&& comp=='s')
{
    return -1;
}
else if(you=='s'&& comp=='w')
{
    return 1;
}
if(you=='g'&& comp=='w')
{
    return -1;
}
else if(you=='w'&& comp=='g')
{
    return 1;
}



}

int main ()
{
int num,rannum;
char you,comp;
srand(time(0));
rannum=rand()%100+1;
if(rannum<33)
{
   comp='s'; 
}
else if(rannum>33 && rannum<66)
{
comp='g';
}
else
{
    comp='w';
}

printf("enter 's' for snake , 'w' for water and 'g' for gun\n ");
scanf("%c",&you);

num=game(you,comp);
printf("your choice is %c and computer choice is %c\n",you,comp);
if(num==0)
{
    printf("game is draw\n");
}else if(num==1){
    printf("you won the game\n");
}
else
{
    printf("you lose try again\n");
}

    return 0;
}


