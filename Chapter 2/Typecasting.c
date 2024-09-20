#include <stdio.h>

int main(){
//TYPECASTING = Converting datatype
    int a = 4;
    float b = 9.5;

    a = (int) b; // We converted FLOAT (b) to INTEGER, Now a = 9 but b = 9.5 because we changed the value of (a) not value of (b)

    printf("Value of b is %d", a);
    return 0;
}