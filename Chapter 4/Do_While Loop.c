#include <stdio.h>

int main(){
    //                 While Loop                                                   |                                 Do-While
    //  • ‘while’ checks the condition & then executes the code.                    |      ‘do-while’ executes the code & then checks the condition.

    int  a = 0 ;
    do
    {
        printf("Value of a is %d", a);
    } while (a>10);
    
    return 0;
}