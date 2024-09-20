#include <stdio.h>


int main(){
//2. Write a program to print multiplication table of 10 in reversed order.

    int a ;
    printf("Enter a number :  ");
    scanf("%d", &a);

    for (int i = 10; i; i--)
    {
       printf("%d x %d = %d \n",a,i,a*i);
    }
    
    return 0;
}