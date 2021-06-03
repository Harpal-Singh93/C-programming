#include<stdio.h>

int main()

{
    int i, age;
    for (i = 0; i < 5; i++)
    {

        printf("Enter your age: ");
        scanf("%d\n", &age);
        if (age <= 10)
        {

            break;
        }
        if (age > 10 && age <= 20)
        {

           continue;
        }
    
        printf("hello");
        printf("bye");
    }
    return 0;
}