#include<stdio.h>
#include<stdlib.h>
int main()
{	
   int num,i=0;
   printf("enter the length of empolyee id you want to use \n");
scanf("%d",&num);
char *ptr;
ptr=(char *)malloc((num+1)*sizeof(char));
while(i<3)
{
printf("enter the id of %d employee\n",i+1);
scanf("%s",ptr);

printf("the employee id entered by you is in case of %d employee is %s\n",i+1,ptr);
i++;
}

return 0 ;

}