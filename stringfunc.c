#include<stdio.h>
#include<string.h>
int main()
{
    int z,c;
    char arr[]={"hello of"};
    char arr1[]={" world"};
    z= strlen(arr);// for length of string
     printf("%d\n",z);
     printf(" before copy %s\n",arr1);
    // strcpy(arr1,arr);// to a copy a string from right to left
     printf("after copy %s",arr1);
     c=strcmp(arr,arr1);// for string compare
     printf("\n%d",c);
    puts(strcat(arr,arr1));//strcat for joining two string
    printf("\n");
    puts(strrev(arr));// reversing a string strrev
     return 0;
 }