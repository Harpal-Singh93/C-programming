#include<stdio.h>
void arrrev(int *ptr,int a);
int main()
{
int a,i;
printf("enter the size of array%n");
scanf("%d",&a);
int arr[a];
printf("enter the elements in array%n");
for(i=0;i<a;i++)
{

scanf("%d",&arr[i]);

}
printf("\n elements you have entered is \n");
for(i=0;i<a;i++)
{

  printf("%d\n",arr[i]);
}
arrrev(arr,a);
  return 0;
}

void arrrev(int *ptr,int a)
{
  int i;
 printf("\nthe reverse order of elements you have entered is\n"); 
for(a-1;a>0;a--)
{
printf("%d\n",*(ptr+a-1));


}


}