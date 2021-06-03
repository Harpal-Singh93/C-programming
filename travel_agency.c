#include<stdio.h>
typedef struct travel
{
char name[20];
char driv_lic[20];
char route[20];
int kms;
}tra;

int main()
{
int n;
printf("welcome to xyz travel agency\n");
printf("\nenter the number upto 3 for which you want to store info for drivers\n ");
scanf("%d",&n);
tra num[n];
for(int i=0;i<n;i++)
{
    printf("\nenter the data for %d driver\n",i+1);
   printf("\nenter the name: \n"); 
   scanf("%s",&num[i].name);
   // gets(num[i].name);
   printf("\nenter the driving licsense number \n");
   scanf("%s",&num[i].driv_lic);
   printf("\nenter the route : \n ");
   scanf("%s",&num[i].route);
   printf("\nenter the kms driven by the driver\n");
   scanf("%d",&num[i].kms);

}
printf("\nthe data entered by you is \n");
for(int i=0;i<n;i++)
{
printf(" \nthe data for %d driver\n",i+1);
printf("\nthe entered name by you is %s\n",num[i].name);
printf("\nthe entered driving licsense entered by you is %s\n",num[i].driv_lic);
 printf("\n the route entered is  %s  \n ",num[i].route);
 printf("\n the kms driven by the driver are %d\n",num[i].kms);

}

    return 0;
}