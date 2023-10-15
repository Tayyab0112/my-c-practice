#include<stdio.h>

int main(){
    int n;
    printf("enter the number \n");
    scanf("%d", &n);

    int fac = 1;
    for (int i = n; i > 0; i--)
    {
        fac =  fac*i;
    }
    
    printf("the factrial of the number is %d \n",fac);
return 0;
}