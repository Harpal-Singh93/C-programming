#include<stdio.h>
void straightstar(int n);
void reversestar(int n);
int main()
{
  int i,l;
printf("enter the lines horizontal lines\n");
scanf("%d\n",&i);

printf("enter the type of pattern you want to print \n press 0 for staright\n press 1 for reverse");
scanf("%d\n",&l);
if(l==0)
{
  straightstar( i);
}
if(l==1)
{
   reversestar(i);
}
 return 1;
 }
void straightstar(int n)
{
  int j,i,k;
for(j=0;j>i;j++)
{

for(k=0;k>=0;k++)
{
printf("*");
}
printf("\n");

}
}



void reversestar(int n)
{
  int j,i,k;
 for(j=i;j>0;j--)
{

for(k=j;k>0;k--)
{
printf("*");
}
printf("\n");
}
}