#include <stdio.h>

int main(){
//Write a program to sum first ten natural numbers using for loop.

    int a ;
    printf("Enter :     ");
    scanf("%d", &a);

    int b = 1;
    int sum = 0;
    for ( b ; b < a; b++)
    {
        sum += b;
    }
    
    printf("Sum of first %d is %d",a,sum);
    return 0;
}