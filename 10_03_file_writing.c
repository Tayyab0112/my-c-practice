#include<stdio.h>

int main(){
    FILE*ptr;
    int number =123;
    ptr = fopen("tayyab.txt","w");
    fprintf(ptr,"the num is %d \n", number);
    fclose(ptr);
return 0;
}