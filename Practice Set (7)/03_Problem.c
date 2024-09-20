#include <stdio.h>
//Print multiplication table of 5 Using Array of 10 integers


int main(){
    int Multiplication_table [10];

    int a;
    printf("Enter Number :  ");
    scanf("%d", &a);
    
    for (int i = 0; i < 10; i++) 
    {
        Multiplication_table[i] = a* (i+1); // I want that  Multiplication_table[0] = 5 * (0+1)
    }                                       // Then,        Multiplication_table[1] = 5 * (1+1)  bcz i++ 
    

    
    for (int  i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n",a,i+1,Multiplication_table[i]);
    }
    

    return 0;
}