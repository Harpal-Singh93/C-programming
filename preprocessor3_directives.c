#include<stdio.h>
int main()
{	
printf("the file name is %s\n",__FILE__);
printf("the date is %s\n",__DATE__);
printf("the line number  is %d\n",__LINE__);
printf("the time is %s\n",__TIME__);
printf("the compiler is using ansi %d\n",__STDC__);// to know that compiler is using ansi standard or not 
return 0 ;
}