#include <stdio.h>

void swap(int* , int*); // its okay not to write (int *a, int *b)   


// **PRO Tip : Read code <--- (left to right)
void swap(int *a, int *b){
    int temp;      // Declare a temporary plate (variable)
    temp = *a;     // Put the apple (value at *a) on the temporary plate (temp)
    *a = *b;       // Put the banana (value at *b) where the apple was (at *a)
    *b = temp;     // Put the apple (from temp) where the banana was (at *b)

    }
int main(){
    int a = 8, b=9;
    swap(&a,&b);

    printf("The value of A is %d and the value of B is %d\n",a,b);
    return 0;
}