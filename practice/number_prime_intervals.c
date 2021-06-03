#include<stdio.h>
int main()
{
    int low,high,flag;
    printf("Program to know prime numbers between two ranged numbers\n");
    printf("enter the lower limit\n");
    scanf("%d",&low);
    printf("enter the higher limit\n");
    scanf("%d",&high);
   while (low<high)
   {
       flag=0;
    //    #ignoring number less than 2

       if (low<=1)
       {
           low++;
           continue;
       }
    //    # logic for checking number prime or not 
       for (int i = 2; i <=low/2; i++)
       {
           if (low%i==0)
           {
             flag=1;
             break;
            }
           
       }
        if (flag==0)
        {
            printf("The prime number is %d\n",low);
        }
        
       


       ++low;
   }
   
    

return 0 ;
}