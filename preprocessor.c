#include<stdio.h>  // header file .h extension tells that that it is a header file 
 //    <> this bracket shows that the header file is taken from standard library functions
// #include "function.c"// "" is used for including a simple file// now it will give error because main  is defined 2 times
 #define pi 3.14  // preprocessor variable
#define square(x) x*x // it is macro and it is faster than functions   
#include "function.c"                 
 int main ()
 {
int radius=4;
printf("the value of pi is %.2f\n",pi);
printf("the area o circle is %f",pi*square(radius));



     return 0;
 }