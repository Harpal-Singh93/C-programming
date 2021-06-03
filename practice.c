#include<stdio.h>
int main(int argc, char  *argv[])
{
    printf("the number of argument is %d\n",argc-1);// its shows +1 always one is used for file address
 
   for(int i=0;i<argc;i++)
   {
    printf("the value at %d argument is %s\n",i+1,argv[i+1]);

   }



    return 0;
}
