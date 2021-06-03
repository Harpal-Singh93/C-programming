#include <stdio.h>
#include <string.h>
struct tution
{
    char name[20];
    int roll_no;
    int marks;
}; /* we can declare here as well as  just by tution ravi,priya,shubham;*/
int main()
{
    struct tution ravi, priya, shubam; // we can declare variable in main like that
    strcpy(ravi.name, "Ravi");
    strcpy(priya.name, "priya");
    strcpy(shubam.name, "shubam");
    ravi.roll_no = 1; // we can intiallise by one another way struct tution ravi={"harpal",10,50};
    priya.roll_no = 2;
    shubam.roll_no = 3;
    ravi.marks = 10;
    priya.marks = 29;
    shubam.marks = 39;
    printf("the data of the student you entered is : \n");
    printf("1st data\n");
    printf("name :%s\n", ravi.name);
    printf("roll no : %d\n", ravi.roll_no);
    printf("marks : %d\n", ravi.marks);
    printf("\n");
    printf("2nd data\n");
    printf("name :%s\n", priya.name);
    printf("roll no : %d\n", priya.roll_no);
    printf("marks : %d\n", priya.marks);
    printf("\n");
    printf("3rd data\n");
    printf("name :%s\n", shubam.name);
    printf("roll no : %d\n", shubam.roll_no);
    printf("marks : %d\n", shubam.marks);

    return 0;
}