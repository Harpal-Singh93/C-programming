#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    
    int number,guess,num=0;
    srand(time(0));
    number=rand()%100+1;
  //  printf("the number is %d\n",number);
    do{
        printf( "enter a number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("enter a lower number\n");
         }
         else if(guess<number)

        {
            printf("enter a higher number\n");
         }
         else
         {
            printf("it's a match\n");
         }
    num++;
    }while(guess!=number);
printf("total number of attempts taken by you are %d\n",num);


     return 0;
 }