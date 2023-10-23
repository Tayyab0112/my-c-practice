#include<stdio.h>


void tentimes(int *a);
int main(){
    int b = 5;
    tentimes(&b);
    printf("the valueof b is %d", b);
    return 0;
}
void tentimes(int*a){
    *a = *a *(10);
    // printf("the valu of c %d\n",a);
}
