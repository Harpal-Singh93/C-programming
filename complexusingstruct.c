#include<stdio.h>
typedef struct complex {

int real,imag;

}comp;
void display(comp c)
{
printf("the real part is %d\n",c.real);
printf("the imaginary part is %d\n",c.imag);

}
int main()
{
    int i=0;
    comp c[5];
for(i=0;i<5;i++)
    {
  printf("enter the real part for %d number \n",i+1);
  scanf("%d",&c[i].real);
printf("enter the imaginary part for %d number \n",i+1);
  scanf("%d",&c[i].imag);
    }
for(i=0;i<5;i++)
    {
 display(c[i]);
    }


     return 0;
 }