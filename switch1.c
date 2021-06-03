#include<stdio.h>
int main()
{
    int a;
    printf("please select a case:");
    scanf("%d",&a);
    switch(a)
    {
        case 0:
        printf("good");
        break;

        case 1:  
        printf("bad");
        break;

        case 2:  
        printf("worse");
        break;
        
        default: 
        printf("beauty"); 

    }
       return 0;
    }