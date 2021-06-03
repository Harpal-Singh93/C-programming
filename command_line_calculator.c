#include <stdio.h>

#include <stdlib.h>
#include <string.h>
// we use this program we have to type name of file and press tab and add .exe extension and type eg.add 34 56

int main(int argc, char *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];  //we dont used argv[0] because its stored the file name
    num1 = atoi(argv[2]); // atoi is used for taking integer type output from a string
    num2 = atoi(argv[3]);
    printf("the operation is %s\n", operation);
    printf("the first number is %d\n", num1);
    printf("the second number is %d\n", num2);
    if (strcmp(operation, "add") == 0)
    {
        printf("The sum is %d\n", num1 + num2);
    }
    if (strcmp(operation, "subtract") == 0)
    {
        printf("The subtraction is %d\n", num1 - num2);
    }
    if (strcmp(operation, "multiply") == 0)
    {
        printf("The multiply is %d\n", num1 * num2);
    }
    if (strcmp(operation, "divide") == 0)
    {
        printf("The division is %d\n", num1 / num2);
    }

    return 0;
}
