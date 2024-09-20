#include <stdio.h>

int main(){
    // Quick Quiz: Write a program to print ‘n’ natural numbers in reverse order


    int i ;
    printf("Enter a number :");
    scanf("%d", &i);

    for (i ; i ; i--)           //  only (i) means i = 1; but there are two (i)      
    {                           // #first (i) means  i = input value               **for (initialize;
       printf("%d \n",i);       // #second (i) means  i = positive number          **for (test; 
    }

    return 0;
}