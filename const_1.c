#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    int salary;
    char name[10];
};

int main(){
    
    struct employee e1;
    e1.code = 1000;
    strcpy(e1.name, "harry");
    e1.salary = 430000;
    printf("%d\n",e1.code);
    printf("%s\n",e1.name);
    printf("%d\n", e1.salary);
return 0;
}