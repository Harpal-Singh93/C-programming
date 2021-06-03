#include <stdio.h>
int main()
{
    int a;
    float km, mile, inch, foot, cm;
    float inch1, pound, kg, meter;
 while (1)
 {
    printf("\npress 1 for km to miles \n");
    printf(" \npress 2 for inches to foot\n ");
    printf("press 3 for cms to inchs\n ");
    printf("press 4 for pound to kgs\n ");
    printf("press 5 for inches to meter\n ");
    printf("press 0 for exit\n");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("enter the km which you want to convert into mile\n");
        scanf("%f", &km);
        mile = 0.621 * km;
        printf("the result in mile is : %f\n", mile);
    }
    if (a == 2)
    {

        printf("enter the inches which you want to convert into foot\n");
        scanf("%f", &inch);
        foot = inch * 0.08333;
        printf("the result in foot is : %f\n", foot);
    }
    if (a == 3)
    {

        printf("enter the cm  to convert into inches\n");
        scanf("%f", &cm);
        inch1 = cm * 0.394;
        printf("the result in inchs is : %f\n", inch1);
    }
    if (a == 4)
    {

        printf("enter the pounds to convert into kgs\n");
        scanf("%f", &pound);
        kg = pound * 0.454;
        printf("the result in kgs is : %f\n", kg);
    }
    if (a == 5)
    {
        printf("enter the inches to convert into meters\n");
        scanf("%f", &inch1);
        meter = inch1 * 0.254;
        printf("the result in kgs is : %f\n", meter);
    }
    

    if (a == 0)
    {
        printf("thank you ");
        goto end;
    }
 }
 end :
    return 0;
}