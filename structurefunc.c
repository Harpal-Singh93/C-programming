#include<stdio.h>
#include<string.h>
 struct employee
{
    int code;
    float salary;
    char name[15];
};
void show(struct employee c1);
int main()
{
struct employee e1={100,50000,"singh"};

show(e1);

    return 0;
}
void show(struct employee c1)
{
printf("%d\n",c1.code);
printf("%f\n",c1.salary);
printf("%s\n",c1.name);


} 