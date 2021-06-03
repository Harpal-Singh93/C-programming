#include<stdio.h>
int main()
{
 int unit;
 float amount;
 printf("Enter number of units whose bill you want:");
 scanf("%d",&unit);

if(unit<=50)
{
    amount=unit*0.50;
    printf("\nThe bill amount is:%5.4f",amount);
}
else if(unit<=150)
{
    amount=25+(unit-50)*0.75;
    printf("\nThe bill amount is:%5.4f",amount);
}
else if(unit<=250)
{
    amount=100+(unit-150)*1.20;
    printf("\nThe bill amount is:%5.4f",amount);
}
else if(unit>250)
{
amount=220+(unit-250)*1.50;
    printf("\nThe bill amount is:%5.4f",amount);
}
else{

    printf("enter a valid number");
}

return 1;
    }