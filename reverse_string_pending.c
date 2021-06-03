#include<stdio.h>
#include<string.h>
void revstring(char arr1[])
{
char arr2[30];
int i=0,j;
j=strlen(arr1);
j=j-1;
while(j!=0)
{
arr2[i]=arr1[j];
i++;
j--;
}
printf("the reversed string is here :\n");
while(arr2[i]!='\0')
{
printf("%c",arr2[i]);
    i++;
}

}


int main()
{	
    char arr[30];
printf("enter a string\n");
gets(arr);
revstring(arr);

return 0 ;
}