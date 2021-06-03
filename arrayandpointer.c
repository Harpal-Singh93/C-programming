// relationship between array and pointer and operator (+,-,++,--)used in case of pointer 

#include<stdio.h>
int main()
{

int a[]={1,30,3,4,5};
int*ptr=&a;
// first using array only

printf("the address of first number of array is  %d \n",a);
printf("the address of second number of array is %d \n",a+1);
printf("the address of first number of array is  %d \n",&a);
printf("the address of second number of array is %d \n",&a[1]);


// now using concept between pointers and array
printf("the address of first number of array is  %d \n",ptr);
ptr++;
printf("the address of second number of array is  %d \n",ptr);

printf("the address of third number of array is  %d \n",ptr+1);

printf("the address of first number of array is  %d \n",ptr-1);



printf("the first number of array is  %d \n",*ptr);
ptr++;

printf("the second number of array is  %d \n",*ptr);

printf("the first number of array is  %d \n",*(&a[0]));

printf("the second number of array is  %d \n",*(&a[1]));


    return 0;
}