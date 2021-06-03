#include<stdio.h>
void printstar(int row,int column)
{
for (int i = 0; i < row; i++)
{
   for (int j = 0; j <= i; j++)
   {
      printf("*");
   }
   printf("\n");
   
}


}
int main()
{
   int i,j;	
   printf("enter the row \n");
   scanf("%d",&i);
   printf("enter the column \n");
   scanf("%d",&j);
   printstar(i,j);

return 0 ;
}