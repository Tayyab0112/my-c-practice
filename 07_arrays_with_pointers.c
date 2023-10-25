#include<stdio.h>

int main(){
    int marks[4] ;
    int*ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of i %d \n");
        scanf(" the value of i %d \n", ptr);
        ptr ++; 
    }


    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of i %d \n", marks[i] );
    }
    
return 0;
}