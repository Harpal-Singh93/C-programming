#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("new2.txt","w");
    char name1[20],name2[20];
    int sal1,sal2;
    printf("enter the name of 1st employee\n");
    gets(name1);
    printf("\nenter the salary\n");
    scanf("%d",&sal1);
    printf("enter the name of 2nd employee\n");
    fflush(stdin);
    gets(name2);
    printf("\nenter the salary\n");
    scanf("%d",&sal2);
    fprintf(ptr,"%s , %d\n",name1,sal1);
    fprintf(ptr,"%s , %d\n",name2,sal2);
    fclose(ptr);



     return 0;
 }