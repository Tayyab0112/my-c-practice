#include<stdio.h>

int main(){
    
    int n ;
    printf("enter the number i\n");
    scanf("%d", &n);

    int check = 1;
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0 ){
            check = 0;
            break;
        }
    }

    if (check == 0 && n!=2)
    {
        printf("the number is not prime\n");
    }
    else{
        printf("the number is prime\n");
    }
    
    
return 0;
}