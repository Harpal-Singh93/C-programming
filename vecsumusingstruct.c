#include<stdio.h>
struct vector vecsum(struct vector s1,struct vector s2);
struct vector 
{
int x;
int y;

};
int main()
{
    int z;
    struct vector v2,sum;
    //v1.x=10;
   // v1.y=15;
    struct vector v1= {10,15};
    v2.x=20;
    v2.y=30;
 sum=vecsum(v1,v2);
    printf("the value of sum of x %d and y is %d \n",sum.x,sum.y);
    return 0;
 }
 struct vector vecsum(struct vector s1,struct vector s2)
 {

struct vector sum;
sum.x=s1.x+s2.x;
sum.y=s1.y+s2.y;
return sum;

 }
 