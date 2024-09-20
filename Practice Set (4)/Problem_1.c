#include <stdio.h>

int main(){
// Write a program to print multiplication table of a given number n.

    int a;
    printf("Enter Number : ");
    scanf("%d", &a);

    for (int i = 1; i<=10; i++)
    {  
        printf("%d * %d = %d\n",a,i,a*i);
    }
    
    return 0;
}