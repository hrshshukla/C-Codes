#include <stdio.h>

int main(){
    //OPERATOR PRIORTIES
//OPERATOR ASSOCIATIVITY


//*1 - OPERATOR PRIORTIES : in absence of PARENTHESIS ()

    //  *1      */ %
    //  *2       +-
    //  *3       =


//*2 - OPERATOR ASSOCIATIVITY
// what if ( x*y/z ) ?
// then multiply (*) and divide (/) will start from LEFT --> RIGHT 
// So,      x*y/z = (x*y)/z
// And,    x/y*z = (x/y)*z


//Example :
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value is %d\n", a*b/c + 7);
    printf("The value is %d", 2*a + 3*b - 5*c );
    // 3*b/2*c + 7*a;
    // 3*b/2*c + 21
    // 18/2*c + 21
    // 9*c + 21
    // 81 + 21
    // 102

return 0;
}