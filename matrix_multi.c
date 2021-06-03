#include<stdio.h>
int main()
{
    int i,j,k,l,sum=0;	
printf("welcome to matrix multiplication\n");    
printf("enter the number of  row of first matrix\n");
scanf("%d",&i);
printf("enter the number of column of first matrix\n");
scanf("%d",&j);
printf("enter the number of row of matrix two\n");
scanf("%d",&k);
printf("enter the number of column of matrix two\n");
scanf("%d",&l);
if(j != k)
{
printf("matrix multiplication is not possible\n");
}
int arr[i][j];
int arr1[k][l];
int arr2[i][l];
printf("enter the elements in first matrix\n");
for(int p=0;p<i;p++)
{
for(int q=0;q<j;q++)
{
printf("enter the elements in 1st matrix for  %d th row and %d column\n ",p+1,q+1);
scanf("%d",&arr[p][q]);
}
}
for(int r=0;r<k;r++)
{
for(int s=0;s<l;s++)
{
printf("enter the elements in 2nd matrix for  %d th row and %d column\n ",r+1,s+1);
scanf("%d",&arr[r][s]);
}
}

for(int t=0;t<i;t++)
{
for(int u=0;u<l;u++)
{
for(int v=0;v<2 ;v++)
{
   sum +=arr[t][v]*arr1[v][u]; 
}
arr2[t][u]=sum;
sum=0;
}
}

printf("the resulant matrix is \n");
for(int x=0;x<i;x++)
{
for(int y=0;y<l;y++)
{

    printf("%d\t",arr2[x][y]);
}

}


return 0 ;
}