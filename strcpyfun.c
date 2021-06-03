#include<stdio.h>

void strcopy(char *st1,char *st2)
{
int i=0;
while (i<7)
{
st1[i]=st2[i];
i++;
}

}
int main()
{
char arr1[]={"harpal"};
char arr2[]={'s','i','n','g','h','\0'};
strcopy(arr1,arr2);
printf("%s",arr1);

return 0;
 }