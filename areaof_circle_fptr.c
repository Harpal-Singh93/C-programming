#include<stdio.h>
#include<math.h>
#define pi 3.14
float edistance(int x1,int y1,int x2,int y2)
{
       float b=(x2-x1)*(x2-x1) +(y2-y1)*(y2-y1);
    return sqrt(b);
}
float areaofcircle(int x1,int y1,int x2,int y2,float(*distance)(int x1,int y1,int x2,int y2))
{

return distance(x1,y1,x2,y2);

}



int main()
{	
 int x1,x2,y1,y2; 
 float dist;  
printf("enter the x cordinate of first point\n ");
scanf("%d",&x1);
printf("enter the y cordinate of first point\n ");
scanf("%d",&y1);
printf("enter the x cordinate of second point\n ");
scanf("%d",&x2);
printf("enter the y cordinate of second point\n ");
scanf("%d",&y2);
dist=areaofcircle(x1,y1,x2,y2,edistance);// we can also use here &edistance

printf("the distance that is equal to radius  is %f\n",dist);
printf("area of circle is %f",pi*dist*dist);
return 0 ;
}