#include <stdio.h>
void printstr(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
}
int main()
{
    // char str[]={'h','e','l','l','o','\0'};
    //char str[] = {"hello"};
    // char str[5]={"hello"}; it will take one garbage value because we need atleast 6 spaces
    char str[20];
    printf("enter the any word\n");
    gets(str); // using scanf we cannot take white spaces so we used gets
    printf("output using printf %s\n",str);
    printf("output using puts");
    puts(str);
    printf("\n");
    //printstr(str);
    return 0;
}