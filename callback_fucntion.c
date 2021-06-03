#include<stdio.h>
float avg(float a,float b)
{
return (a+b)/2;
}
void gdafter(float(*fptr)(float,float))
{
printf("good afternoon user\n");
printf("the average of 3.1 and 7.3 is %f\n",fptr(3.1,7.3));
}
void gdeve(float(*fptr)(float,float))
{
printf("good evening user\n");
printf("the average of 4.6 and 6.4 is %f\n",fptr(4.6,6.4));
}




int main()
{	

float(*ptr)(float,float);
ptr=&avg;
gdafter(ptr);
gdeve(ptr);


return 0 ;
}