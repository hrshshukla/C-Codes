#include <stdio.h>
// STRCMP is used compare two strings 
// And prints +ve -ve value who ever comes first in ASCII Table 

#include <string.h>
int main(){

    int a = strcmp("first","last");
    int b = strcmp("last","first");
    
    printf("first and last = %d\n",a); // first and last = -1
    printf("last and first = %d\n",b); // last and first = 1

    return 0;
}