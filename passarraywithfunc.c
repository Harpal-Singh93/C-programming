#include <stdio.h>
int funcsum(int *ptr);
int funcdisplay(int array[]);
int arr2d(int arr[2][2]);
int main()
{
    int arr[] = {20, 40, 50, 60};
    int arr1[2][2]={{2,3},{4,5}};
    printf("the value of a[0] before function call is %d\n",arr[0]);
    funcdisplay(arr);
    funcsum(arr);
    arr2d(arr1);
    printf("the value of a[0] after function call is %d\n",arr[0]);  
    printf("thank you\n");

    return 0;
}
int funcdisplay(int array[])
{
    int i;
    for (i = 0; i < 4; i++)
    {

        printf("%d\n", array[i]);
    }
}
int funcsum(int *ptr)
{
int z=0,i;
for(i = 0; i < 4; i++)
{
z=z+*(ptr+i);
}
    printf("The sum of given elements in the  array is :  %d\n ", z);
*ptr=10;  // the value of array changes outside main effects in main  because we pass the base address of array

}
int arr2d(int arr[2][2])
{
int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
    printf("the elements of 2d array is %d\n",arr[i][j]);
}

}


}
