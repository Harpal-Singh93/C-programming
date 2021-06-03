#include<stdio.h>
typedef struct timestamp
{
int day,month,year,hour,min,sec;
}match;
void display(match m1,match m2)
{
printf("%d-%d-%d , %d:%d:%d\n",m1.day,m1.month,m1.year,m1.hour,m1.min,m1.sec);
printf("%d-%d-%d , %d:%d:%d\n",m2.day,m2.month,m2.year,m2.hour,m2.min,m2.sec);
}
int comp(match m1,match m2)
{
if(m1.year>m2.year)
{
    return 1;
}
if(m1.year<m2.year)
{
    return -1;
}
if(m1.month>m2.month)
{
    return 1;
}
if(m1.month<m2.month)
{
    return -1;
}
if(m1.day>m2.day)
{
    return 1;
}
if(m1.day<m2.day)
{
    return -1;
}
if(m1.hour>m2.hour)
{
    return 1;
}
if(m1.hour<m2.hour)
{
    return -1;
}
if(m1.min>m2.min)
{
    return 1;
}
if(m1.min<m2.min)
{
    return -1;
}
if(m1.sec>m2.sec)
{
    return 1;
}
if(m1.sec<m2.sec)
{
    return -1;
}
return 0;

}

int main()
{
    int z;
    match m1={10,4,2023,6,10,15};
    match m2={20,4,2021,5,20,30};
     
    display(m1,m2);  
     
z=comp(m1,m2);
 printf("comparison of two dates  %d\n",z);

     return 0;
 }