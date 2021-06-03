#include<stdio.h>
#include<stdlib.h>
int main()
{	
int *ptr,i=0;
while(i<45550)
{
    printf("hello\n");
ptr=malloc(34546*sizeof(int));
if(i%1000==0)
{
    getchar();
}
    i++;
 //  this program is using memory again and so we need to clear previous memory
 free(ptr);
 }

return 0 ;
}