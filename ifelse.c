#include<stdio.h>
int main()
{
int sci,math;
printf("Lets check whether you are pass or not\n");
printf("Enter your science marks: ");
scanf("%d",&sci);
printf("\nEnter your math marks: ");
scanf("%d",&math);
if(sci>=33 && math>=33)
{
printf("\nyou are pass in both subject\n your price is 50 rupees\n");
}
else if(sci >=33)
{
    printf("\nyou are pass in science\n your price is 20 rupees\n");
}
else if(math >=33)
{
printf("\nyou are pass in math\n your price is 20 rupees\n");
}
else
{
printf("Better Luck next time YOu are fail");
}

return 0;
}