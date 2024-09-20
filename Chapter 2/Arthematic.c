#include <stdio.h>

int main(){

// RESULT = OPERATION is LEGAL
// OPERATION = RESULT is illegal (not allowed)
    int a = 40;
    int b = 20;
    int c = a + b;//Right
    printf("When we add %d and %d we get %d\n",a,b,c);
    

// Modulas Operator : helps to find out REMAINDER             //Professionally used to know if 2 numbers are divisible or not
    //  % → returns the remainder
    //  % → cannot be applied on float 
    //  % → sign is same as of numerator (-5%2=-1)


     printf("if a is divided by b then remainder will be %d", a%b);
     return 0;

}