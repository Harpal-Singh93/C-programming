#include<stdio.h>

/*// logic 
1,2,3,4,5,6
6,2,3,4,5,1
6,5,3,4,2,1
6,5,4,3,2,1
*/
void revarr(int arr[])
{
    int temp;
for(int i=0;i<3;i++)
{
temp=arr[i];
arr[i]=arr[5-i];
arr[5-i]=temp;

}

}
int main()
{
    int a[]={1,2,3,4,5,6};
    printf("the elements before reversal\n");
    for(int i=0;i<6;i++)
    {
      printf("%d\n",a[i]);
      
    }
    revarr(a);
    printf("elements after reversal\n");
    for(int i=0;i<6;i++)
    {
      printf("%d\n",a[i]);
      
    }

     return 0;
 }